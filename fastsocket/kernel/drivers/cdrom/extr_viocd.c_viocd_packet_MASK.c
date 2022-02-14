
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rwrt_feature_desc {int curr; void* feature_code; } ;
struct packet_command {unsigned int buflen; int* cmd; int stat; TYPE_2__* sense; scalar_t__ buffer; } ;
struct feature_header {int dummy; } ;
struct cdrom_device_info {int mask; TYPE_1__* ops; } ;
struct TYPE_6__ {int erasable; void* disc_information_length; } ;
typedef TYPE_3__ disc_information ;
struct TYPE_5__ {int sense_key; int asc; int ascq; } ;
struct TYPE_4__ {int capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_4,
  struct packet_command *VAR_5)
{
 unsigned int VAR_6 = VAR_5->buflen;
 int VAR_7 = -VAR_3;

 switch (VAR_5->cmd[0]) {
 case 128:
  {
   disc_information *VAR_8 = (disc_information *)VAR_5->buffer;

   if (VAR_6 >= 2) {
    VAR_8->disc_information_length = FUNC_0(1);
    VAR_7 = 0;
   }
   if (VAR_6 >= 3)
    VAR_8->erasable =
     (VAR_4->ops->capability & ~VAR_4->mask
      & (VAR_0 | VAR_1)) != 0;
  }
  break;
 case 129:
  if (VAR_5->cmd[3] == VAR_2) {
   struct rwrt_feature_desc *VAR_9 = (struct rwrt_feature_desc *)(VAR_5->buffer + sizeof(struct feature_header));

   if ((VAR_6 >=
        (sizeof(struct feature_header) + sizeof(*VAR_9))) &&
       (VAR_4->ops->capability & ~VAR_4->mask
        & (VAR_0 | VAR_1))) {
    VAR_9->feature_code = FUNC_0(VAR_2);
    VAR_9->curr = 1;
    VAR_7 = 0;
   }
  }
  break;
 default:
  if (VAR_5->sense) {

   VAR_5->sense->sense_key = 0x05;
   VAR_5->sense->asc = 0x20;
   VAR_5->sense->ascq = 0x00;
  }
  break;
 }

 VAR_5->stat = VAR_7;
 return VAR_7;
}
