
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct reordering_mpdu {int dummy; } ;
struct reordering_list {scalar_t__ qlen; int * next; } ;
typedef int UINT32 ;
struct TYPE_5__ {int * mem; struct reordering_list freelist; int lock; } ;
struct TYPE_6__ {TYPE_1__ mpdu_blk_pool; } ;
typedef int * PUCHAR ;
typedef TYPE_2__* PRTMP_ADAPTER ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct reordering_mpdu*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct reordering_list*,struct reordering_mpdu*) ;
 int FUNC_4 (TYPE_2__*,int **,int) ;

BOOLEAN FUNC_5(PRTMP_ADAPTER VAR_4, int VAR_5)
{
 int VAR_6;
 PUCHAR VAR_7;
 struct reordering_mpdu *VAR_8;
 struct reordering_list *VAR_9;


 FUNC_1(&VAR_4->mpdu_blk_pool.lock);


 VAR_9 = &VAR_4->mpdu_blk_pool.freelist;
 VAR_9->next = ((void*)0);
 VAR_9->qlen = 0;

 FUNC_0(VAR_2, ("Allocate %d memory for BA reordering\n", (UINT32)(VAR_5*sizeof(struct reordering_mpdu))));


 FUNC_4(VAR_4, (PUCHAR *)&VAR_7, (VAR_5*sizeof(struct reordering_mpdu)));

 VAR_4->mpdu_blk_pool.mem = VAR_7;

 if (VAR_7 == ((void*)0))
 {
  FUNC_0(VAR_1, ("Can't Allocate Memory for BA Reordering\n"));
  return(VAR_0);
 }


 for (VAR_6=0; VAR_6<VAR_5; VAR_6++)
 {

  VAR_8 = (struct reordering_mpdu *) VAR_7;

  FUNC_2(VAR_8, sizeof(struct reordering_mpdu));

  VAR_7 += sizeof(struct reordering_mpdu);

  FUNC_3(VAR_9, VAR_8);
 }

 return(VAR_3);
}
