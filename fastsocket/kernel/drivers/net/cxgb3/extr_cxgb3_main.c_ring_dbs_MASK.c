
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_qset {TYPE_2__* txq; scalar_t__ adap; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; } ;
struct TYPE_4__ {int cntxt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct sge_qset *VAR_7 = &VAR_4->sge.qs[VAR_5];

  if (VAR_7->adap)
   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    FUNC_1(VAR_4, VAR_0, VAR_1 | FUNC_0(VAR_7->txq[VAR_6].cntxt_id));
 }
}
