
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_cb_qe_s {int cbarg; int (* cbfn ) (int ,int ) ;int pre_rmv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct list_head*,struct list_head**) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct bfa_s *VAR_1, struct list_head *VAR_2)
{
 struct list_head *VAR_3;
 struct bfa_cb_qe_s *VAR_4;

 while (!FUNC_2(VAR_2)) {
  FUNC_1(VAR_2, &VAR_3);
  VAR_4 = (struct bfa_cb_qe_s *) VAR_3;
  FUNC_0(VAR_4->pre_rmv);
  VAR_4->cbfn(VAR_4->cbarg, VAR_0);
 }
}
