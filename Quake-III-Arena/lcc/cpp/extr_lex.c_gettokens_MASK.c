
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_11__ {size_t max; TYPE_2__* lp; TYPE_2__* bp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_12__ {int* t; int wslen; int len; int type; scalar_t__ flag; scalar_t__ hideset; } ;
typedef TYPE_2__ Token ;
struct TYPE_13__ {int* inp; int* inl; int* inb; int fd; scalar_t__ lineinc; } ;
typedef TYPE_3__ Source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int** VAR_11 ;
 TYPE_3__* VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_3__*) ;

int
FUNC_8(Tokenrow *VAR_13, int VAR_14)
{
 register int VAR_15, VAR_16, VAR_17;
 register uchar *VAR_18;
 register Token *VAR_19, *VAR_20;
 int VAR_21;
 Source *VAR_22 = VAR_12;
 int VAR_23 = 0;
 extern char VAR_24[];

 VAR_19 = VAR_13->lp;
 VAR_18 = VAR_22->inp;
 if (VAR_14) {
  VAR_22->lineinc = 0;
  if (VAR_18>=VAR_22->inl) {
   VAR_22->inl = VAR_22->inb;
   FUNC_2(VAR_22);
   VAR_18 = VAR_22->inp = VAR_22->inb;
  } else if (VAR_18 >= VAR_22->inb+(3*VAR_4/4)) {
   FUNC_5(VAR_22->inb, VAR_18, 4+VAR_22->inl-VAR_18);
   VAR_22->inl = VAR_22->inb+(VAR_22->inl-VAR_18);
   VAR_18 = VAR_22->inp = VAR_22->inb;
  }
 }
 VAR_20 = &VAR_13->bp[VAR_13->max];
 VAR_21 = 1;
 for (;;) {
    continue2:
  if (VAR_19>=VAR_20) {
   VAR_13->lp = VAR_19;
   VAR_19 = FUNC_4(VAR_13);
   VAR_20 = &VAR_13->bp[VAR_13->max];
  }
  VAR_19->type = VAR_9;
  VAR_19->hideset = 0;
  VAR_19->t = VAR_18;
  VAR_19->wslen = 0;
  VAR_19->flag = 0;
  VAR_16 = VAR_8;
  for (;;) {
   VAR_17 = VAR_16;
   VAR_15 = *VAR_18;
   if ((VAR_16 = VAR_11[VAR_15][VAR_16]) >= 0) {
    VAR_18 += VAR_21;
    VAR_21 = 1;
    continue;
   }
   VAR_16 = ~VAR_16;
  reswitch:
   switch (VAR_16&0177) {
   case 131:
    VAR_18 += VAR_21;
    VAR_21 = 1;
   case 130:
    VAR_19->type = FUNC_0(VAR_16);
    VAR_19->len = VAR_18 - VAR_19->t;
    VAR_19++;
    goto continue2;

   case 133:
    VAR_19->type = VAR_5;
    VAR_19->len = VAR_18 - VAR_19->t;
    VAR_23 |= FUNC_6(VAR_19->t[0], VAR_19->len>1?VAR_19->t[1]:0);
    VAR_19++;
    goto continue2;

   case 128:
    VAR_19->wslen = VAR_18 - VAR_19->t;
    VAR_19->t = VAR_18;
    VAR_16 = VAR_8;
    continue;

   default:
    if ((VAR_16&VAR_7)==0) {
     VAR_18 += VAR_21;
     VAR_21 = 1;
     continue;
    }
    VAR_16 &= ~VAR_7;
    VAR_22->inp = VAR_18;
    if (VAR_15=='?') {
     if (FUNC_7(VAR_22)) {
      VAR_16 = VAR_17;
      continue;
     }
     goto reswitch;
    }
    if (VAR_15=='\\') {
     if (FUNC_3(VAR_22)) {
      VAR_22->lineinc++;
      VAR_16 = VAR_17;
      continue;
     }
     goto reswitch;
    }
    FUNC_1(VAR_10, "Lexical botch in cpp");
    VAR_18 += VAR_21;
    VAR_21 = 1;
    continue;

   case 137:
    VAR_22->inp = VAR_18;
    FUNC_2(VAR_12);
    VAR_16 = VAR_17;
    continue;

   case 136:
    VAR_19->type = VAR_1;
    VAR_19->len = 0;
    VAR_22->inp = VAR_18;
    if (VAR_19!=VAR_13->bp && (VAR_19-1)->type!=VAR_6 && VAR_12->fd!=-1)
     FUNC_1(VAR_10,"No newline at end of file");
    VAR_13->lp = VAR_19+1;
    return VAR_23;

   case 129:
    FUNC_1(VAR_2, "Unterminated string or char const");
   case 132:
    VAR_19->t = VAR_18;
    VAR_19->type = VAR_6;
    VAR_19->len = 1;
    VAR_19->wslen = 0;
    VAR_22->lineinc++;
    VAR_22->inp = VAR_18+1;
    VAR_13->lp = VAR_19+1;
    return VAR_23;

   case 134:
    FUNC_1(VAR_3, "EOF in string or char constant");
    break;

   case 138:
    VAR_22->lineinc++;
    VAR_16 = VAR_0;
    VAR_18 += VAR_21;
    VAR_21 = 1;
    if (VAR_18 >= VAR_22->inb+(7*VAR_4/8)) {
     FUNC_5(VAR_19->t, VAR_18, 4+VAR_22->inl-VAR_18);
     VAR_22->inl -= VAR_18-VAR_19->t;
     VAR_18 = VAR_19->t+1;
    }
    continue;

   case 135:
    FUNC_1(VAR_10, "EOF inside comment");
    --VAR_18;
   case 139:
    ++VAR_18;
    VAR_19->t = VAR_18;
    VAR_19->t[-1] = ' ';
    VAR_19->wslen = 1;
    VAR_16 = VAR_8;
    continue;
   }
   break;
  }
  VAR_18 += VAR_21;
  VAR_21 = 1;
  VAR_19->len = VAR_18 - VAR_19->t;
  VAR_19++;
 }
}
