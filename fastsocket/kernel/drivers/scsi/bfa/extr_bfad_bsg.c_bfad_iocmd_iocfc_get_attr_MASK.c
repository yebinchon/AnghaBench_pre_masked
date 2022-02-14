
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfa; } ;
struct bfa_bsg_iocfc_attr_s {int iocfc_attr; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int
FUNC_1(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_iocfc_attr_s *VAR_3 = (struct bfa_bsg_iocfc_attr_s *)VAR_2;

 VAR_3->status = VAR_0;
 FUNC_0(&VAR_1->bfa, &VAR_3->iocfc_attr);

 return 0;
}
