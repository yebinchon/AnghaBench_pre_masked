
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int * cmnd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdebug_dev_info*,unsigned long long,int) ;
 int FUNC_1 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned char*,int) ;
 unsigned int FUNC_3 (int *) ;
 unsigned long long FUNC_4 (int *) ;
 unsigned int FUNC_5 (unsigned long long,unsigned int*) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (unsigned int,unsigned char*) ;
 int FUNC_8 (unsigned long long,unsigned char*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd * VAR_1,
          struct sdebug_dev_info * VAR_2)
{
 unsigned long long VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;
 unsigned char VAR_7[VAR_0];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, 1, VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_3 = FUNC_4(&VAR_1->cmnd[2]);
 VAR_4 = FUNC_3(&VAR_1->cmnd[10]);

 if (VAR_4 < 24)
  return 0;

 VAR_8 = FUNC_0(VAR_2, VAR_3, 1);
 if (VAR_8)
  return VAR_8;

 VAR_5 = FUNC_5(VAR_3, &VAR_6);

 FUNC_6(VAR_7, 0, VAR_0);
 FUNC_7(16, &VAR_7[0]);
 FUNC_8(VAR_3, &VAR_7[8]);
 FUNC_7(VAR_6, &VAR_7[16]);
 VAR_7[20] = !VAR_5;

 return FUNC_2(VAR_1, VAR_7, VAR_0);
}
