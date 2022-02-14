
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int device_flags; int mode; int modes_supported; int (* setmode_handler ) (int ,int) ;int context; int (* detectmode_handler ) (int ,int*) ;int devpath; int init_device_done; } ;
struct TYPE_2__ {int msgLength; } ;
struct SmsMsgData_ST {int* msgData; TYPE_1__ xMsgHeader; } ;
typedef enum sms_device_type_st { ____Placeholder_sms_device_type_st } sms_device_type_st ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (struct smscore_device_t*,int,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (struct smscore_device_t*) ;
 char*** VAR_11 ;
 int FUNC_11 (struct smscore_device_t*,char*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct smscore_device_t*,struct SmsMsgData_ST*,int ,int *) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,int) ;

int FUNC_17(struct smscore_device_t *VAR_12, int VAR_13)
{
 void *VAR_14;
 int VAR_15 = 0;
 enum sms_device_type_st VAR_16;

 FUNC_4("set device mode to %d", VAR_13);
 if (VAR_12->device_flags & VAR_8) {
  if (VAR_13 < VAR_0 || VAR_13 >= VAR_2) {
   FUNC_5("invalid mode specified %d", VAR_13);
   return -VAR_3;
  }

  FUNC_13(VAR_12->devpath, VAR_13);

  if (!(VAR_12->device_flags & VAR_9)) {
   VAR_15 = FUNC_10(VAR_12);
   if (VAR_15 < 0) {
    FUNC_5("mode detect failed %d", VAR_15);
    return VAR_15;
   }
  }

  if (VAR_12->mode == VAR_13) {
   FUNC_7("device mode %d already set", VAR_13);
   return 0;
  }

  if (!(VAR_12->modes_supported & (1 << VAR_13))) {
   char *VAR_17;

   VAR_16 = FUNC_12(VAR_12->devpath);
   VAR_17 = FUNC_6(VAR_12, VAR_13, VAR_16);

   VAR_15 = FUNC_11(VAR_12,
            VAR_17, ((void*)0));
   if (VAR_15 < 0) {
    FUNC_9("error %d loading firmware: %s, "
      "trying again with default firmware",
      VAR_15, VAR_17);


    VAR_17 = VAR_11[VAR_13][VAR_16];
    VAR_15 = FUNC_11(VAR_12,
            VAR_17, ((void*)0));

    if (VAR_15 < 0) {
     FUNC_9("error %d loading "
       "firmware: %s", VAR_15,
       VAR_17);
     return VAR_15;
    }
   }
   FUNC_8("firmware download success: %s", VAR_17);
  } else
   FUNC_7("mode %d supported by running "
     "firmware", VAR_13);

  VAR_14 = FUNC_3(sizeof(struct SmsMsgData_ST) +
     VAR_10, VAR_6 | VAR_5);
  if (VAR_14) {
   struct SmsMsgData_ST *VAR_18 =
    (struct SmsMsgData_ST *)
     FUNC_0(VAR_14);

   FUNC_1(&VAR_18->xMsgHeader, VAR_7,
         sizeof(struct SmsMsgData_ST));
   VAR_18->msgData[0] = VAR_13;

   VAR_15 = FUNC_14(
    VAR_12, VAR_18, VAR_18->xMsgHeader.msgLength,
    &VAR_12->init_device_done);

   FUNC_2(VAR_14);
  } else {
   FUNC_5("Could not allocate buffer for "
    "init device message.");
   VAR_15 = -VAR_4;
  }
 } else {
  if (VAR_13 < VAR_0 || VAR_13 > VAR_1) {
   FUNC_5("invalid mode specified %d", VAR_13);
   return -VAR_3;
  }

  FUNC_13(VAR_12->devpath, VAR_13);

  if (VAR_12->detectmode_handler)
   VAR_12->detectmode_handler(VAR_12->context,
          &VAR_12->mode);

  if (VAR_12->mode != VAR_13 && VAR_12->setmode_handler)
   VAR_15 = VAR_12->setmode_handler(VAR_12->context, VAR_13);
 }

 if (VAR_15 >= 0) {
  VAR_12->mode = VAR_13;
  VAR_12->device_flags &= ~VAR_9;
 }

 if (VAR_15 < 0)
  FUNC_5("return error code %d.", VAR_15);
 return VAR_15;
}
