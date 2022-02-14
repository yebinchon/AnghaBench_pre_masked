
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nes_qp {int ibqp; } ;
struct disconn_work {int work; struct nes_qp* nesqp; } ;
struct TYPE_2__ {int disconn_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 struct disconn_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct nes_qp *VAR_4)
{
 struct disconn_work *VAR_5;

 VAR_5 = FUNC_1(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_4->ibqp);
 VAR_5->nesqp = VAR_4;
 FUNC_0(&VAR_5->work, VAR_3);
 FUNC_3(VAR_2->disconn_wq, &VAR_5->work);
 return 0;
}
