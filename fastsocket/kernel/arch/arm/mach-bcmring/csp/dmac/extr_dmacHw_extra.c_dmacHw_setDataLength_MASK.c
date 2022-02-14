
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hi; } ;
struct TYPE_7__ {scalar_t__ llp; TYPE_1__ ctl; } ;
typedef TYPE_2__ dmacHw_DESC_t ;
struct TYPE_8__ {int srcMaxTransactionWidth; } ;
typedef TYPE_3__ dmacHw_CONFIG_t ;
struct TYPE_9__ {TYPE_2__* pHead; } ;


 TYPE_5__* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(dmacHw_CONFIG_t *VAR_1,
     void *VAR_2,
     size_t VAR_3
    ) {
 dmacHw_DESC_t *VAR_4;
 dmacHw_DESC_t *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;

 VAR_5 = (FUNC_0(VAR_2))->pHead;
 VAR_4 = VAR_5;

 VAR_7 = FUNC_1(VAR_1->srcMaxTransactionWidth);
 VAR_6 = VAR_3 / VAR_7;
 do {
  VAR_4->ctl.hi = VAR_6 & VAR_0;
  VAR_4 = (dmacHw_DESC_t *) VAR_4->llp;
 } while (VAR_4 != VAR_5);
}
