
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd * VAR_3,
   struct sdebug_dev_info * VAR_4)
{
 unsigned char VAR_5[VAR_0];
 unsigned int VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_0(VAR_3, 1, VAR_4)))
  return VAR_7;

 VAR_2 = FUNC_2();
 FUNC_3(VAR_5, 0, VAR_0);
 if (VAR_2 < 0xffffffff) {
  VAR_6 = (unsigned int)VAR_2 - 1;
  VAR_5[0] = (VAR_6 >> 24);
  VAR_5[1] = (VAR_6 >> 16) & 0xff;
  VAR_5[2] = (VAR_6 >> 8) & 0xff;
  VAR_5[3] = VAR_6 & 0xff;
 } else {
  VAR_5[0] = 0xff;
  VAR_5[1] = 0xff;
  VAR_5[2] = 0xff;
  VAR_5[3] = 0xff;
 }
 VAR_5[6] = (VAR_1 >> 8) & 0xff;
 VAR_5[7] = VAR_1 & 0xff;
 return FUNC_1(VAR_3, VAR_5, VAR_0);
}
