
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sense {int dummy; } ;
struct packet_command {unsigned int buflen; scalar_t__ data_direction; int stat; int timeout; int sense; int buffer; int cmd; scalar_t__ quiet; } ;
struct cdrom_device_info {int * handle; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ,int,int ,unsigned int*,int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct cdrom_device_info *VAR_4,
       struct packet_command *VAR_5)
{
 ide_drive_t *VAR_6 = VAR_4->handle;
 unsigned int VAR_7 = 0;
 unsigned VAR_8 = VAR_5->buflen;

 if (VAR_5->timeout <= 0)
  VAR_5->timeout = VAR_0;





 if (VAR_5->data_direction == VAR_1)
  VAR_7 |= VAR_3;

 if (VAR_5->sense)
  FUNC_1(VAR_5->sense, 0, sizeof(struct request_sense));

 if (VAR_5->quiet)
  VAR_7 |= VAR_2;

 VAR_5->stat = FUNC_0(VAR_6, VAR_5->cmd,
        VAR_5->data_direction == VAR_1,
        VAR_5->buffer, &VAR_8,
        VAR_5->sense, VAR_5->timeout, VAR_7);
 if (!VAR_5->stat)
  VAR_5->buflen -= VAR_8;
 return VAR_5->stat;
}
