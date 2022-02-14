
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct c4iw_qp {int lock; TYPE_1__ attr; } ;
typedef enum c4iw_qp_state { ____Placeholder_c4iw_qp_state } c4iw_qp_state ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct c4iw_qp *VAR_0, enum c4iw_qp_state VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_0->attr.state = VAR_1;
 FUNC_1(&VAR_0->lock, VAR_2);
}
