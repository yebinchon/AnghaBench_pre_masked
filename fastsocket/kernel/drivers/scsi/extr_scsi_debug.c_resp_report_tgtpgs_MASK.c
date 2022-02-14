
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdebug_dev_info {int channel; TYPE_2__* sdbg_host; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;
struct TYPE_4__ {TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd * VAR_4,
         struct sdebug_dev_info * VAR_5)
{
 unsigned char *VAR_6 = (unsigned char *)VAR_4->cmnd;
 unsigned char * VAR_7;
 int VAR_8 = VAR_5->sdbg_host->shost->host_no;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = ((VAR_6[6] << 24) + (VAR_6[7] << 16) + (VAR_6[8] << 8)
  + VAR_6[9]);

 VAR_7 = FUNC_2(VAR_2, VAR_1);
 if (! VAR_7)
  return VAR_0 << 16;






 VAR_15 = 0x1;
 VAR_16 = 0x2;
 VAR_13 = (((VAR_8 + 1) & 0x7f) << 8) +
     (VAR_5->channel & 0x7f);
 VAR_14 = (((VAR_8 + 1) & 0x7f) << 8) +
     (VAR_5->channel & 0x7f) + 0x80;




 VAR_9 = 4;
 if (0 == VAR_3) {
     VAR_7[VAR_9++] = VAR_8 % 3;
     VAR_7[VAR_9++] = 0x0F;
 } else {
     VAR_7[VAR_9++] = 0x0;
     VAR_7[VAR_9++] = 0x01;
 }
 VAR_7[VAR_9++] = (VAR_13 >> 8) & 0xff;
 VAR_7[VAR_9++] = VAR_13 & 0xff;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0x1;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = (VAR_15 >> 8) & 0xff;
 VAR_7[VAR_9++] = VAR_15 & 0xff;
 VAR_7[VAR_9++] = 3;
 VAR_7[VAR_9++] = 0x08;
 VAR_7[VAR_9++] = (VAR_14 >> 8) & 0xff;
 VAR_7[VAR_9++] = VAR_14 & 0xff;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0x1;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = (VAR_16 >> 8) & 0xff;
 VAR_7[VAR_9++] = VAR_16 & 0xff;

 VAR_12 = VAR_9 - 4;
 VAR_7[0] = (VAR_12 >> 24) & 0xff;
 VAR_7[1] = (VAR_12 >> 16) & 0xff;
 VAR_7[2] = (VAR_12 >> 8) & 0xff;
 VAR_7[3] = VAR_12 & 0xff;







 VAR_12 = FUNC_3(VAR_11,VAR_9);
 VAR_10 = FUNC_0(VAR_4, VAR_7,
       FUNC_3(VAR_12, VAR_2));
 FUNC_1(VAR_7);
 return VAR_10;
}
