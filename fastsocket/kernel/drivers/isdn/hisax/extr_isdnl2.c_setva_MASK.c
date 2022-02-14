
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int flag; } ;
struct Layer2 {unsigned int va; size_t sow; int window; int lock; TYPE_2__** windowar; int flag; } ;
struct PStack {TYPE_1__ lli; struct Layer2 l2; } ;
struct TYPE_4__ {int len; scalar_t__ pkt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct PStack*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct PStack *VAR_3, unsigned int VAR_4)
{
 struct Layer2 *VAR_5 = &VAR_3->l2;
 int VAR_6;
 u_long VAR_7;

 FUNC_2(&VAR_5->lock, VAR_7);
 while (VAR_5->va != VAR_4) {
  (VAR_5->va)++;
  if(FUNC_4(VAR_1, &VAR_5->flag))
   VAR_5->va %= 128;
  else
   VAR_5->va %= 8;
  VAR_6 = VAR_5->windowar[VAR_5->sow]->len;
  if (VAR_2 == VAR_5->windowar[VAR_5->sow]->pkt_type)
   VAR_6 = -1;
  FUNC_0(VAR_5->windowar[VAR_5->sow]);
  VAR_5->windowar[VAR_5->sow] = ((void*)0);
  VAR_5->sow = (VAR_5->sow + 1) % VAR_5->window;
  FUNC_3(&VAR_5->lock, VAR_7);
  if (FUNC_4(VAR_0, &VAR_3->lli.flag) && (VAR_6 >=0))
   FUNC_1(VAR_3, VAR_6);
  FUNC_2(&VAR_5->lock, VAR_7);
 }
 FUNC_3(&VAR_5->lock, VAR_7);
}
