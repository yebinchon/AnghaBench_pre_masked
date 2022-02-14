
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tuner_types {char* fw_name; int tuner_type; int tuner_name; } ;
struct dst_types {size_t offset; char* device_id; int dst_type; int tuner_type; int dst_feature; int type_flags; } ;
struct dst_state {int tuner_type; int* rxbuffer; int dst_type; int type_flags; int * fw_name; int dst_hw_cap; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int,char*,...) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;
 int FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (struct dst_state*) ;
 void* VAR_9 ;
 int FUNC_6 (struct dst_state*) ;
 int FUNC_7 (struct dst_state*,int) ;
 int FUNC_8 (struct dst_state*,int ) ;
 scalar_t__ FUNC_9 (struct dst_state*,int*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int *,char*,int) ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (struct dst_state*,int*,int ) ;

__attribute__((used)) static int FUNC_14(struct dst_state *VAR_12)
{
 u8 VAR_13;

 int VAR_14, VAR_15;
 struct dst_types *VAR_16 = ((void*)0);
 struct tuner_types *VAR_17 = ((void*)0);

 u8 VAR_18 = 0;
 u32 VAR_19 = 0;

 static u8 VAR_20[8] = {0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff};

 VAR_12->tuner_type = 0;
 VAR_20[7] = FUNC_4(VAR_20, 7);

 if (FUNC_13(VAR_12, VAR_20, VAR_5))
  return -1;
 if ((FUNC_5(VAR_12)) < 0)
  return -1;
 if (FUNC_9(VAR_12, &VAR_13, VAR_6))
  return -1;
 if (VAR_13 != VAR_0) {
  FUNC_1(VAR_11, VAR_3, 1, "Write not Acknowledged! [Reply=0x%02x]", VAR_13);
  return -1;
 }
 if (!FUNC_8(VAR_12, VAR_1))
  return -1;
 if (FUNC_9(VAR_12, VAR_12->rxbuffer, VAR_5))
  return -1;

 FUNC_5(VAR_12);
 if (VAR_12->rxbuffer[7] != FUNC_4(VAR_12->rxbuffer, 7)) {
  FUNC_1(VAR_11, VAR_3, 1, "Checksum failure!");
  return -1;
 }
 VAR_12->rxbuffer[7] = '\0';

 for (VAR_14 = 0, VAR_16 = VAR_9; VAR_14 < FUNC_0(VAR_9); VAR_14++, VAR_16++) {
  if (!FUNC_11 (&VAR_12->rxbuffer[VAR_16->offset], VAR_16->device_id, FUNC_10 (VAR_16->device_id))) {
   VAR_19 = VAR_16->type_flags;
   VAR_18 = VAR_16->dst_type;


   VAR_12->dst_hw_cap = VAR_16->dst_feature;
   FUNC_1(VAR_11, VAR_2, 1, "Recognise [%s]", VAR_16->device_id);
   FUNC_12(&VAR_12->fw_name[0], VAR_16->device_id, 6);

   if (VAR_16->tuner_type & VAR_8) {
    switch (VAR_18) {
    case 128:

     if (FUNC_3(VAR_12) < 0) {
      FUNC_1(VAR_11, VAR_2, 1, "Unsupported");
      VAR_12->tuner_type = VAR_7;
     }
     break;
    default:
     break;
    }
    if (FUNC_2(VAR_12) < 0)
     FUNC_1(VAR_11, VAR_2, 1, "Unsupported");

   } else {
    VAR_12->tuner_type = VAR_16->tuner_type;
   }
   for (VAR_15 = 0, VAR_17 = VAR_10; VAR_15 < FUNC_0(VAR_10); VAR_15++, VAR_17++) {
    if (!(FUNC_11(VAR_16->device_id, VAR_17->fw_name, 7)) &&
     VAR_17->tuner_type == VAR_12->tuner_type) {
     FUNC_1(VAR_11, VAR_2, 1, "[%s] has a [%s]",
      VAR_16->device_id, VAR_17->tuner_name);
    }
   }
   break;
  }
 }

 if (VAR_14 >= FUNC_0(VAR_9)) {
  FUNC_1(VAR_11, VAR_2, 1, "Unable to recognize %s or %s", &VAR_12->rxbuffer[0], &VAR_12->rxbuffer[1]);
  FUNC_1(VAR_11, VAR_2, 1, "please email linux-dvb@linuxtv.org with this type in");
  VAR_18 = 128;
  VAR_19 = VAR_4;
 }
 FUNC_7(VAR_12, VAR_18);
 VAR_12->type_flags = VAR_19;
 VAR_12->dst_type = VAR_18;
 FUNC_6(VAR_12);

 return 0;
}
