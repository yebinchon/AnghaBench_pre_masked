
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct c2_dev {int dummy; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct c2_cq {TYPE_1__ ibcq; } ;


 struct c2_cq* FUNC_0 (struct c2_dev*,int ) ;
 int FUNC_1 (struct c2_cq*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(struct c2_dev *VAR_0, u32 VAR_1)
{
 struct c2_cq *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_2("discarding events on destroyed CQN=%d\n", VAR_1);
  return;
 }

 (*VAR_2->ibcq.comp_handler) (&VAR_2->ibcq, VAR_2->ibcq.cq_context);
 FUNC_1(VAR_2);
}
