
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct reordering_mpdu {int pPacket; } ;
struct TYPE_14__ {scalar_t__ qlen; } ;
struct TYPE_13__ {TYPE_3__* BARecEntry; } ;
struct TYPE_12__ {scalar_t__ REC_BA_Status; TYPE_7__ list; } ;
struct TYPE_10__ {int lock; int mem; } ;
struct TYPE_11__ {TYPE_1__ mpdu_blk_pool; int BATabLock; TYPE_4__ BATable; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;
typedef TYPE_3__* PBA_REC_ENTRY ;
typedef TYPE_4__ BA_TABLE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_2__*,struct reordering_mpdu*) ;
 struct reordering_mpdu* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;

void FUNC_7(PRTMP_ADAPTER VAR_3)
{
 BA_TABLE *VAR_4;
 PBA_REC_ENTRY VAR_5;
 struct reordering_mpdu *VAR_6;
 int VAR_7;

 VAR_4 = &VAR_3->BATable;


 FUNC_1(&VAR_3->BATabLock);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
 {
  VAR_5 = &VAR_4->BARecEntry[VAR_7];
  if (VAR_5->REC_BA_Status != VAR_2)
  {
   while ((VAR_6 = FUNC_5(&VAR_5->list)))
   {
    FUNC_0(VAR_6->pPacket);
    FUNC_3(VAR_3, VAR_6->pPacket, VAR_1);
    FUNC_4(VAR_3, VAR_6);
   }
  }
 }
 FUNC_2(&VAR_3->BATabLock);

 FUNC_0(VAR_5->list.qlen == 0);

 FUNC_1(&VAR_3->mpdu_blk_pool.lock);
 FUNC_6(VAR_3, VAR_3->mpdu_blk_pool.mem);
 FUNC_2(&VAR_3->mpdu_blk_pool.lock);
}
