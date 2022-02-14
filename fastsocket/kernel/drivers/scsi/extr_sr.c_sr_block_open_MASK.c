
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int cdi; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,int ) ;
 struct scsi_cd* FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_cd*) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct scsi_cd *VAR_3 = FUNC_1(VAR_1->bd_disk);
 int VAR_4 = -VAR_0;

 if (VAR_3) {
  VAR_4 = FUNC_0(&VAR_3->cdi, VAR_1, VAR_2);
  if (VAR_4)
   FUNC_2(VAR_3);
 }
 return VAR_4;
}
