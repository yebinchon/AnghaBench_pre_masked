
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ehca_sport {int saved_attr; void* port_state; } ;
struct TYPE_3__ {int name; } ;
struct ehca_shca {TYPE_1__ ib_device; struct ehca_sport* sport; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ehca_shca*,int,int ,char*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int VAR_10 ;
 int FUNC_3 (struct ehca_shca*,int,int *) ;
 int FUNC_4 (TYPE_1__*,char*,int,...) ;
 int FUNC_5 (struct ehca_shca*,int) ;
 int FUNC_6 (struct ehca_sport*) ;

__attribute__((used)) static void FUNC_7(struct ehca_shca *VAR_11, u64 VAR_12)
{
 u8 VAR_13 = FUNC_0(VAR_6, VAR_12);
 u8 VAR_14 = FUNC_0(VAR_8, VAR_12);
 u8 VAR_15;
 struct ehca_sport *VAR_16 = &VAR_11->sport[VAR_14 - 1];

 switch (VAR_13) {
 case 0x30:
  if (FUNC_0(VAR_7, VAR_12)) {




   if (VAR_10 < 0)
    if (FUNC_6(VAR_16))
     break;

   VAR_16->port_state = VAR_3;
   FUNC_1(VAR_11, VAR_14, VAR_1,
         "is active");
   FUNC_3(VAR_11, VAR_14, &VAR_16->saved_attr);
  } else {
   VAR_16->port_state = VAR_4;
   FUNC_1(VAR_11, VAR_14, VAR_2,
         "is inactive");
  }
  break;
 case 0x31:




  if (FUNC_0(VAR_5, VAR_12)) {
   FUNC_4(&VAR_11->ib_device, "disruptive port "
      "%d configuration change", VAR_14);

   VAR_16->port_state = VAR_4;
   FUNC_1(VAR_11, VAR_14, VAR_2,
         "is inactive");

   VAR_16->port_state = VAR_3;
   FUNC_1(VAR_11, VAR_14, VAR_1,
         "is active");
   FUNC_3(VAR_11, VAR_14,
         &VAR_16->saved_attr);
  } else
   FUNC_5(VAR_11, VAR_14);
  break;
 case 0x32:
  FUNC_2(&VAR_11->ib_device, "Adapter malfunction.");
  break;
 case 0x33:
  FUNC_2(&VAR_11->ib_device, "Traced stopped.");
  break;
 case 0x34:
  VAR_15 = FUNC_0(VAR_9, VAR_12);
  if (VAR_15 == 0x80)
   FUNC_1(VAR_11, VAR_14,
         VAR_0,
         "client reregister req.");
  else
   FUNC_4(&VAR_11->ib_device, "Unknown util async "
      "event %x on port %x", VAR_15, VAR_14);
  break;
 default:
  FUNC_2(&VAR_11->ib_device, "Unknown event code: %x on %s.",
    VAR_13, VAR_11->ib_device.name);
  break;
 }

 return;
}
