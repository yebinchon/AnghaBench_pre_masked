
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_qp {int refcount; } ;
struct ib_qp {int qp_num; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 struct nes_qp* FUNC_3 (struct ib_qp*) ;

void FUNC_4(struct ib_qp *VAR_1)
{
 struct nes_qp *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_2(VAR_0, "Bumping refcount for QP%u.  Pre-inc value = %u\n",
   VAR_1->qp_num, FUNC_1(&VAR_2->refcount));
 FUNC_0(&VAR_2->refcount);
}
