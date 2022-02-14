
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smscore_device_t {int device_flags; int context; int device; } ;
struct firmware {int size; int data; } ;
typedef int (* loadfirmware_t ) (int ,int *,int ) ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct smscore_device_t*,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct smscore_device_t *VAR_7,
        char *VAR_8,
        loadfirmware_t VAR_9)
{
 int VAR_10 = -VAR_1;
 const struct firmware *VAR_11;
 u8 *VAR_12;

 if (VAR_9 == ((void*)0) && !(VAR_7->device_flags &
           VAR_6))
  return -VAR_0;

 VAR_10 = FUNC_5(&VAR_11, VAR_8, VAR_7->device);
 if (VAR_10 < 0) {
  FUNC_6("failed to open \"%s\"", VAR_8);
  return VAR_10;
 }
 FUNC_6("read FW %s, size=%zd", VAR_8, VAR_11->size);
 VAR_12 = FUNC_2(FUNC_0(VAR_11->size, VAR_5),
       VAR_4 | VAR_3);
 if (VAR_12) {
  FUNC_3(VAR_12, VAR_11->data, VAR_11->size);

  VAR_10 = (VAR_7->device_flags & VAR_6) ?
        FUNC_7(VAR_7,
          VAR_12,
          VAR_11->size) :
        VAR_9(VAR_7->context,
        VAR_12, VAR_11->size);

  FUNC_1(VAR_12);
 } else {
  FUNC_6("failed to allocate firmware buffer");
  VAR_10 = -VAR_2;
 }

 FUNC_4(VAR_11);

 return VAR_10;
}
