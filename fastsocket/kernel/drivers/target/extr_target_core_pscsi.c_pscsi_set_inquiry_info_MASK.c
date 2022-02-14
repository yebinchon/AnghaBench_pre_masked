
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_wwn {int * revision; int * model; int * vendor; } ;
struct scsi_device {scalar_t__ inquiry_len; unsigned char* inquiry; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_1(struct scsi_device *VAR_1, struct t10_wwn *VAR_2)
{
 unsigned char *VAR_3;

 if (VAR_1->inquiry_len < VAR_0)
  return;

 VAR_3 = VAR_1->inquiry;
 if (!VAR_3)
  return;



 FUNC_0(&VAR_2->vendor[0], &VAR_3[8], sizeof(VAR_2->vendor));
 FUNC_0(&VAR_2->model[0], &VAR_3[16], sizeof(VAR_2->model));
 FUNC_0(&VAR_2->revision[0], &VAR_3[32], sizeof(VAR_2->revision));
}
