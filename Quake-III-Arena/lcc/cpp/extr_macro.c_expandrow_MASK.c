
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* tp; TYPE_2__* lp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_12__ {scalar_t__ type; int len; scalar_t__ hideset; int * t; } ;
typedef TYPE_2__ Token ;
struct TYPE_13__ {int flag; scalar_t__ val; } ;
typedef TYPE_3__ Nlist ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 () ;

void
FUNC_8(Tokenrow *VAR_9, char *VAR_10)
{
 Token *VAR_11;
 Nlist *VAR_12;

 if (VAR_10)
  FUNC_6(VAR_10, -1, "");
 for (VAR_11 = VAR_9->tp; VAR_11<VAR_9->lp; ) {
  if (VAR_11->type!=VAR_6
   || FUNC_5(VAR_11->t[0], VAR_11->len>1?VAR_11->t[1]:0)==0
   || (VAR_12 = FUNC_4(VAR_11, 0))==((void*)0)
   || (VAR_12->flag&(VAR_2|VAR_3))==0
   || VAR_11->hideset && FUNC_1(VAR_11->hideset, VAR_12)) {
   VAR_11++;
   continue;
  }
  VAR_9->tp = VAR_11;
  if (VAR_12->val==VAR_4) {
   VAR_11->type = VAR_0;
   if ((VAR_11+1)<VAR_9->lp && (VAR_11+1)->type==VAR_6)
    (VAR_11+1)->type = VAR_7;
   else if ((VAR_11+3)<VAR_9->lp && (VAR_11+1)->type==VAR_5
    && (VAR_11+2)->type==VAR_6 && (VAR_11+3)->type==VAR_8)
    (VAR_11+2)->type = VAR_7;
   else
    FUNC_2(VAR_1, "Incorrect syntax for `defined'");
   VAR_11++;
   continue;
  }
  if (VAR_12->flag&VAR_3)
   FUNC_0(VAR_9, VAR_12->val);
  else {
   FUNC_3(VAR_9, VAR_12);
  }
  VAR_11 = VAR_9->tp;
 }
 if (VAR_10)
  FUNC_7();
}
