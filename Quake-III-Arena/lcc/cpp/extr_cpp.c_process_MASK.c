
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* tp; TYPE_1__* lp; TYPE_1__* bp; } ;
typedef TYPE_2__ Tokenrow ;
struct TYPE_12__ {int line; int lineinc; scalar_t__ ifdepth; } ;
struct TYPE_10__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_8__* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 () ;

void
FUNC_8(Tokenrow *VAR_9)
{
 int VAR_10 = 0;

 for (;;) {
  if (VAR_9->tp >= VAR_9->lp) {
   VAR_9->tp = VAR_9->lp = VAR_9->bp;
   VAR_7 = VAR_6;
   VAR_10 |= FUNC_4(VAR_9, 1);
   VAR_9->tp = VAR_9->bp;
  }
  if (VAR_9->tp->type == VAR_0) {
   if (--VAR_5>=0) {
    if (VAR_3->ifdepth)
     FUNC_1(VAR_1,
      "Unterminated conditional in #include");
    FUNC_7();
    VAR_3->line += VAR_3->lineinc;
    VAR_9->tp = VAR_9->lp;
    FUNC_3();
    continue;
   }
   if (VAR_4)
    FUNC_1(VAR_1, "Unterminated #if/#ifdef/#ifndef");
   break;
  }
  if (VAR_9->tp->type==VAR_2) {
   VAR_9->tp += 1;
   FUNC_0(VAR_9);
  } else if (!VAR_8 && VAR_10)
   FUNC_2(VAR_9, ((void*)0));
  if (VAR_8)
   FUNC_6(VAR_9);
  FUNC_5(VAR_9);
  VAR_10 = 0;
  VAR_3->line += VAR_3->lineinc;
  if (VAR_3->lineinc>1) {
   FUNC_3();
  }
 }
}
