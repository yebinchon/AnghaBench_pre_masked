
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int dummy; } ;
struct ib_wc {scalar_t__ status; int opcode; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_1 (struct ib_cq*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,struct srp_target_port*) ;
 int FUNC_4 (struct srp_target_port*,struct ib_wc*) ;

__attribute__((used)) static void FUNC_5(struct ib_cq *VAR_2, void *VAR_3)
{
 struct srp_target_port *VAR_4 = VAR_3;
 struct ib_wc VAR_5;

 FUNC_1(VAR_2, VAR_0);
 while (FUNC_0(VAR_2, 1, &VAR_5) > 0) {
  if (FUNC_2(VAR_5.status == VAR_1)) {
   FUNC_4(VAR_4, &VAR_5);
  } else {
   FUNC_3(VAR_5.status, VAR_5.opcode, VAR_4);
  }
 }
}
