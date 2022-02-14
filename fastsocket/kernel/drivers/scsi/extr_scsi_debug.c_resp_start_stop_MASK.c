
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int stopped; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 int FUNC_1 (struct sdebug_dev_info*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd * VAR_3,
      struct sdebug_dev_info * VAR_4)
{
 unsigned char *VAR_5 = (unsigned char *)VAR_3->cmnd;
 int VAR_6, VAR_7, VAR_8;

 if ((VAR_7 = FUNC_0(VAR_3, 1, VAR_4)))
  return VAR_7;
 VAR_6 = (VAR_5[4] & 0xf0) >> 4;
 if (VAR_6) {
  FUNC_1(VAR_4, VAR_0, VAR_1,
           0);
  return VAR_2;
 }
 VAR_8 = VAR_5[4] & 1;
 if (VAR_8 == VAR_4->stopped)
  VAR_4->stopped = !VAR_8;
 return 0;
}
