
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_bsg_bbcr_attr_s {int attr; int status; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_0, void *VAR_1)
{
 struct bfa_bsg_bbcr_attr_s *VAR_2 = (struct bfa_bsg_bbcr_attr_s *) VAR_1;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->bfad_lock, VAR_3);
 VAR_2->status =
  FUNC_0(&VAR_0->bfa, &VAR_2->attr);
 FUNC_2(&VAR_0->bfad_lock, VAR_3);

 return 0;
}
