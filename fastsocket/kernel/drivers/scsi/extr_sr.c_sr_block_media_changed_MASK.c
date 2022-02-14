
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int cdi; } ;
struct gendisk {int dummy; } ;


 int FUNC_0 (int *) ;
 struct scsi_cd* FUNC_1 (struct gendisk*) ;

__attribute__((used)) static int FUNC_2(struct gendisk *VAR_0)
{
 struct scsi_cd *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_1->cdi);
}
