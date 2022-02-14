
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int free_tx; } ;
struct srp_iu {int list; } ;
struct ib_wc {scalar_t__ status; int opcode; scalar_t__ wr_id; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_cq*,int,struct ib_wc*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__,int ,struct srp_target_port*) ;

__attribute__((used)) static void FUNC_4(struct ib_cq *VAR_1, void *VAR_2)
{
 struct srp_target_port *VAR_3 = VAR_2;
 struct ib_wc VAR_4;
 struct srp_iu *VAR_5;

 while (FUNC_0(VAR_1, 1, &VAR_4) > 0) {
  if (FUNC_1(VAR_4.status == VAR_0)) {
   VAR_5 = (struct srp_iu *) (uintptr_t) VAR_4.wr_id;
   FUNC_2(&VAR_5->list, &VAR_3->free_tx);
  } else {
   FUNC_3(VAR_4.status, VAR_4.opcode, VAR_3);
  }
 }
}
