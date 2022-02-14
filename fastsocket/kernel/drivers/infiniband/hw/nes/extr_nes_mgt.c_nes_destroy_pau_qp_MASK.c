
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nes_qp {int pau_lock; int cm_node; int pau_list; } ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nes_device*,struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct nes_device *VAR_2, struct nes_qp *VAR_3)
{
 struct sk_buff *VAR_4;
 unsigned long VAR_5;
 FUNC_0(&VAR_1);



 FUNC_5(&VAR_3->pau_lock, VAR_5);
 while (FUNC_4(&VAR_3->pau_list)) {
  VAR_4 = FUNC_3(&VAR_3->pau_list);
  FUNC_1(VAR_2, VAR_4, VAR_0);
  FUNC_2(VAR_3->cm_node);
 }
 FUNC_6(&VAR_3->pau_lock, VAR_5);
}
