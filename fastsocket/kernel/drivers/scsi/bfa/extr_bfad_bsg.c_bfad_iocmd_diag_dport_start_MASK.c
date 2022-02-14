
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_bsg_dport_enable_s {scalar_t__ status; int pat; int lpcnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,struct bfad_hal_comp*) ;
 int FUNC_1 (struct bfad_s*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_dport_enable_s *VAR_4 =
    (struct bfa_bsg_dport_enable_s *)VAR_3;
 unsigned long VAR_5;
 struct bfad_hal_comp VAR_6;

 FUNC_2(&VAR_6.comp);
 FUNC_3(&VAR_2->bfad_lock, VAR_5);
 VAR_4->status = FUNC_0(&VAR_2->bfa, VAR_4->lpcnt,
     VAR_4->pat, VAR_1,
     &VAR_6);
 FUNC_4(&VAR_2->bfad_lock, VAR_5);

 if (VAR_4->status != VAR_0) {
  FUNC_1(VAR_2, VAR_4->status);
 } else {
  FUNC_5(&VAR_6.comp);
  VAR_4->status = VAR_6.status;
 }

 return 0;
}
