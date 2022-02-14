
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int poll; } ;
struct TYPE_3__ {scalar_t__ polling; int holdoff_tmr; } ;
struct sge_qset {TYPE_2__ napi; TYPE_1__ rspq; } ;
struct qset_params {int coalesce_usecs; scalar_t__ polling; } ;


 int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct sge_qset *VAR_2, const struct qset_params *VAR_3)
{
 VAR_2->rspq.holdoff_tmr = FUNC_0(VAR_3->coalesce_usecs * 10, 1U);
 VAR_2->rspq.polling = VAR_3->polling;
 VAR_2->napi.poll = VAR_3->polling ? VAR_0 : VAR_1;
}
