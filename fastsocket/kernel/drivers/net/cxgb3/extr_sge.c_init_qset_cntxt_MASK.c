
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int cntxt_id; } ;
struct sge_qset {TYPE_3__* txq; TYPE_2__* fl; TYPE_1__ rspq; } ;
struct TYPE_6__ {scalar_t__ token; scalar_t__ cntxt_id; } ;
struct TYPE_5__ {int cntxt_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static void FUNC_0(struct sge_qset *VAR_8, unsigned int VAR_9)
{
 VAR_8->rspq.cntxt_id = VAR_9;
 VAR_8->fl[0].cntxt_id = 2 * VAR_9;
 VAR_8->fl[1].cntxt_id = 2 * VAR_9 + 1;
 VAR_8->txq[VAR_6].cntxt_id = VAR_3 + VAR_9;
 VAR_8->txq[VAR_6].token = VAR_4 + VAR_9;
 VAR_8->txq[VAR_7].cntxt_id = VAR_2 + VAR_9;
 VAR_8->txq[VAR_5].cntxt_id = VAR_0 + VAR_9;
 VAR_8->txq[VAR_5].token = VAR_1 + VAR_9;
}
