
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smscore_device_t {scalar_t__ mode; int gpio_get_res; int ir_init_done; int gpio_get_level_done; int gpio_set_level_done; int gpio_configuration_done; int resume_done; int trigger_done; int data_download_done; int reload_start_done; int init_device_done; int version_ex_done; int modes_supported; } ;
struct smscore_client_t {int (* onresponse_handler ) (int ,struct smscore_buffer_t*) ;int context; } ;
struct smscore_buffer_t {int offset; scalar_t__ size; scalar_t__ p; } ;
struct SmsVersionRes_ST {int FirmwareId; int SupportedProtocols; int RomVersionMinor; int RomVersionMajor; } ;
struct SmsMsgHdr_ST {int msgType; scalar_t__ msgLength; int msgDstId; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;





 int VAR_5 ;


 int FUNC_0 (int *) ;
 int VAR_6 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct smscore_device_t*,char const*,int) ;
 struct smscore_client_t* FUNC_4 (struct smscore_device_t*,int,int ) ;
 int FUNC_5 (struct smscore_device_t*,struct smscore_buffer_t*) ;
 int FUNC_6 (int ,struct smscore_buffer_t*) ;

void FUNC_7(struct smscore_device_t *VAR_7,
  struct smscore_buffer_t *VAR_8) {
 struct SmsMsgHdr_ST *VAR_9 = (struct SmsMsgHdr_ST *) ((u8 *) VAR_8->p
   + VAR_8->offset);
 struct smscore_client_t *VAR_10;
 int VAR_11 = -VAR_3;
 static unsigned long VAR_12;
 static int VAR_13;
 unsigned long VAR_14 = FUNC_1(VAR_6);

 if (!VAR_12)
  VAR_12 = VAR_14;

 if (VAR_14 - VAR_12 > 10000) {
  FUNC_2("\ndata rate %d bytes/secs",
     (int)((VAR_13 * 1000) /
    (VAR_14 - VAR_12)));

  VAR_12 = VAR_14;
  VAR_13 = 0;
 }

 VAR_13 += VAR_8->size;

 if ((VAR_9->msgType == VAR_4) ||
   (VAR_9->msgType == VAR_5)) {
  if (VAR_7->mode == VAR_0)
   VAR_9->msgDstId = VAR_2;
 }


 VAR_10 = FUNC_4(VAR_7, VAR_9->msgType, VAR_9->msgDstId);



 if (VAR_10)
  VAR_11 = VAR_10->onresponse_handler(VAR_10->context, VAR_8);

 if (VAR_11 < 0) {
  switch (VAR_9->msgType) {
  case 138:
  {
   struct SmsVersionRes_ST *VAR_15 =
    (struct SmsVersionRes_ST *) VAR_9;
   FUNC_2("MSG_SMS_GET_VERSION_EX_RES "
      "id %d prots 0x%x ver %d.%d",
      VAR_15->FirmwareId, VAR_15->SupportedProtocols,
      VAR_15->RomVersionMajor, VAR_15->RomVersionMinor);

   VAR_7->mode = VAR_15->FirmwareId == 255 ?
    VAR_1 : VAR_15->FirmwareId;
   VAR_7->modes_supported = VAR_15->SupportedProtocols;

   FUNC_0(&VAR_7->version_ex_done);
   break;
  }
  case 134:
   FUNC_2("MSG_SMS_INIT_DEVICE_RES");
   FUNC_0(&VAR_7->init_device_done);
   break;
  case 128:
   FUNC_2("MSG_SW_RELOAD_START_RES");
   FUNC_0(&VAR_7->reload_start_done);
   break;
  case 139:
   FUNC_0(&VAR_7->data_download_done);
   break;
  case 129:
   FUNC_2("MSG_SW_RELOAD_EXEC_RES");
   break;
  case 130:
   FUNC_2("MSG_SMS_SWDOWNLOAD_TRIGGER_RES");
   FUNC_0(&VAR_7->trigger_done);
   break;
  case 132:
   FUNC_0(&VAR_7->resume_done);
   break;
  case 137:
   FUNC_2("MSG_SMS_GPIO_CONFIG_EX_RES");
   FUNC_0(&VAR_7->gpio_configuration_done);
   break;
  case 135:
   FUNC_2("MSG_SMS_GPIO_SET_LEVEL_RES");
   FUNC_0(&VAR_7->gpio_set_level_done);
   break;
  case 136:
  {
   u32 *VAR_16 = (u32 *) VAR_9;
   VAR_7->gpio_get_res = VAR_16[1];
   FUNC_2("MSG_SMS_GPIO_GET_LEVEL_RES gpio level %d",
     VAR_7->gpio_get_res);
   FUNC_0(&VAR_7->gpio_get_level_done);
   break;
  }
  case 131:
   FUNC_0(&VAR_7->ir_init_done);
   break;
  case 133:
   FUNC_3(VAR_7,
    (const char *)
    ((char *)VAR_9
    + sizeof(struct SmsMsgHdr_ST)),
    (int)VAR_9->msgLength
    - sizeof(struct SmsMsgHdr_ST));
   break;

  default:
   break;
  }
  FUNC_5(VAR_7, VAR_8);
 }
}
