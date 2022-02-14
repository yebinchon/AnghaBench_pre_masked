
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unmap_block_desc {int blocks; int lba; } ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sdebug_dev_info*,unsigned long long,unsigned int) ;
 int FUNC_2 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 unsigned int FUNC_3 (unsigned char*) ;
 unsigned int FUNC_4 (int *) ;
 unsigned long long FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (unsigned int,int ) ;
 unsigned int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,unsigned char*,unsigned int) ;
 int FUNC_10 (unsigned long long,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd * VAR_2, struct sdebug_dev_info * VAR_3)
{
 unsigned char *VAR_4;
 struct unmap_block_desc *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2, 1, VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_3(&VAR_2->cmnd[7]);
 FUNC_0(FUNC_8(VAR_2) != VAR_7);

 VAR_8 = (VAR_7 - 8) / 16;

 VAR_4 = FUNC_7(FUNC_8(VAR_2), VAR_0);
 if (!VAR_4)
  return VAR_1;

 FUNC_9(VAR_2, VAR_4, FUNC_8(VAR_2));

 FUNC_0(FUNC_3(&VAR_4[0]) != VAR_7 - 2);
 FUNC_0(FUNC_3(&VAR_4[2]) != VAR_8 * 16);

 VAR_5 = (void *)&VAR_4[8];

 for (VAR_6 = 0 ; VAR_6 < VAR_8 ; VAR_6++) {
  unsigned long long VAR_10 = FUNC_5(&VAR_5[VAR_6].lba);
  unsigned int VAR_11 = FUNC_4(&VAR_5[VAR_6].blocks);

  VAR_9 = FUNC_1(VAR_3, VAR_10, VAR_11);
  if (VAR_9)
   goto out;

  FUNC_10(VAR_10, VAR_11);
 }

 VAR_9 = 0;

out:
 FUNC_6(VAR_4);

 return VAR_9;
}
