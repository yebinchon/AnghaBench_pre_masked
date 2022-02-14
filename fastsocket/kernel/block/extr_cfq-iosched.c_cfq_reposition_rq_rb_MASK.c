
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct cfq_queue {TYPE_2__* cfqd; int * queued; int sort_list; } ;
struct TYPE_6__ {int blkg; } ;
struct TYPE_5__ {TYPE_1__* serving_group; } ;
struct TYPE_4__ {int blkg; } ;


 TYPE_3__* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int *,int *,int ,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (int *,struct request*) ;
 int FUNC_5 (struct request*) ;
 size_t FUNC_6 (struct request*) ;

__attribute__((used)) static void FUNC_7(struct cfq_queue *VAR_0, struct request *VAR_1)
{
 FUNC_4(&VAR_0->sort_list, VAR_1);
 VAR_0->queued[FUNC_6(VAR_1)]--;
 FUNC_3(&(FUNC_0(VAR_1))->blkg,
     FUNC_5(VAR_1), FUNC_6(VAR_1));
 FUNC_1(VAR_1);
 FUNC_2(&(FUNC_0(VAR_1))->blkg,
   &VAR_0->cfqd->serving_group->blkg, FUNC_5(VAR_1),
   FUNC_6(VAR_1));
}
