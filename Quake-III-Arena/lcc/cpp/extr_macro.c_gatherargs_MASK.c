
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* lp; TYPE_2__* tp; TYPE_2__* bp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_2__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

int
FUNC_5(Tokenrow *VAR_10, Tokenrow **VAR_11, int *VAR_12)
{
 int VAR_13 = 1;
 int VAR_14 = 0;
 Token *VAR_15, *VAR_16;
 Tokenrow VAR_17;
 int VAR_18;
 int VAR_19;

 *VAR_12 = -1;

 for (;;) {
  VAR_10->tp++;
  VAR_14++;
  if (VAR_10->tp >= VAR_10->lp) {
   FUNC_2(VAR_10, 0);
   if ((VAR_10->lp-1)->type==VAR_3) {
    VAR_10->lp -= 1;
    VAR_10->tp -= VAR_14;
    return VAR_14;
   }
  }
  if (VAR_10->tp->type==VAR_6)
   break;
  if (VAR_10->tp->type!=VAR_8)
   return VAR_14;
 }
 *VAR_12 = 0;
 VAR_14++;
 VAR_18 = VAR_14;
 VAR_10->tp++;

 VAR_19 = 0;
 while (VAR_13>0) {
  if (VAR_10->tp >= VAR_10->lp)
   FUNC_2(VAR_10, 0);
  if (VAR_19) {
   VAR_19 = 0;
   FUNC_3(VAR_10);
  }
  if (VAR_10->tp->type==VAR_3) {
   VAR_10->lp -= 1;
   VAR_10->tp -= VAR_14;
   FUNC_1(VAR_4, "EOF in macro arglist");
   return VAR_14;
  }
  if (VAR_10->tp->type==VAR_8) {
   VAR_10->tp += 1;
   FUNC_0(VAR_10, -1);
   VAR_10->tp -= 1;
   FUNC_3(VAR_10);
   VAR_19 = 1;
   continue;
  }
  if (VAR_10->tp->type==VAR_6)
   VAR_13++;
  else if (VAR_10->tp->type==VAR_9)
   VAR_13--;
  VAR_10->tp++;
  VAR_14++;
 }
 VAR_10->tp -= VAR_14;

 VAR_16 = VAR_15 = VAR_10->tp+VAR_18;
 for (; VAR_13>=0; VAR_16++) {
  if (VAR_16->type == VAR_6) {
   VAR_13++;
   continue;
  }
  if (VAR_16->type==VAR_9)
   VAR_13--;
  if (VAR_16->type==VAR_1)
   VAR_16->type = VAR_2;
  if (VAR_16->type==VAR_0 && VAR_13==0 || VAR_13<0 && (VAR_16-1)->type!=VAR_6) {
   if (*VAR_12>=VAR_7-1)
    FUNC_1(VAR_5, "Sorry, too many macro arguments");
   VAR_17.bp = VAR_17.tp = VAR_15;
   VAR_17.lp = VAR_16;
   VAR_11[(*VAR_12)++] = FUNC_4(&VAR_17);
   VAR_15 = VAR_16+1;
  }
 }
 return VAR_14;
}
