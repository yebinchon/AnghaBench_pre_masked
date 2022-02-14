
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* tp; TYPE_2__* bp; TYPE_2__* lp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_15__ {scalar_t__ type; } ;
typedef TYPE_2__ Token ;
typedef int Nlist ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;

void
FUNC_7(Nlist *VAR_4, Tokenrow *VAR_5, Tokenrow **VAR_6)
{
 Tokenrow VAR_7;
 Token *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_5->tp=VAR_5->bp; VAR_5->tp<VAR_5->lp; ) {
  if (VAR_5->tp->type==VAR_3) {
   VAR_8 = VAR_5->tp;
   VAR_5->tp += 1;
   if ((VAR_10 = FUNC_5(VAR_4, VAR_5->tp))<0) {
    FUNC_2(VAR_1, "# not followed by macro parameter");
    continue;
   }
   VAR_9 = 1 + (VAR_5->tp - VAR_8);
   VAR_5->tp = VAR_8;
   FUNC_4(VAR_5, VAR_9, FUNC_6(VAR_6[VAR_10]));
   continue;
  }
  if (VAR_5->tp->type==VAR_2
   && (VAR_10 = FUNC_5(VAR_4, VAR_5->tp)) >= 0) {
   if ((VAR_5->tp+1)->type==VAR_0
    || VAR_5->tp!=VAR_5->bp && (VAR_5->tp-1)->type==VAR_0)
    FUNC_4(VAR_5, 1, VAR_6[VAR_10]);
   else {
    FUNC_0(&VAR_7, VAR_6[VAR_10]);
    FUNC_3(&VAR_7, "<macro>");
    FUNC_4(VAR_5, 1, &VAR_7);
    FUNC_1(VAR_7.bp);
   }
   continue;
  }
  VAR_5->tp++;
 }
}
