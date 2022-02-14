
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ c_cc; } ;
struct tty {int t_lflag; scalar_t__ t_rocount; int t_iflag; int t_column; int t_state; int t_rocol; int* t_cc; TYPE_1__ t_rawq; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_6 ;


 char* VAR_7 ;

 int FUNC_4 (int,int ) ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct tty*) ;
 char VAR_11 ;
 size_t VAR_12 ;

 int * FUNC_6 (TYPE_1__*,int*) ;
 int * FUNC_7 (TYPE_1__*,int *,int*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (int,struct tty*) ;
 int FUNC_11 (char,struct tty*) ;
 int FUNC_12 (struct tty*) ;
 int FUNC_13 (struct tty*,int) ;

__attribute__((used)) static void
FUNC_14(int VAR_13, struct tty *VAR_14)
{
 u_char *VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_5(VAR_14);

 if (!FUNC_3(VAR_14->t_lflag, VAR_0) || FUNC_3(VAR_14->t_lflag, VAR_4))
  return;
 FUNC_2(VAR_14->t_lflag, VAR_5);
 if (FUNC_3(VAR_14->t_lflag, VAR_2)) {
  if (VAR_14->t_rocount == 0) {



   FUNC_12(VAR_14);
   return;
  }
  if (VAR_13 == ('\t' | VAR_11) || VAR_13 == ('\n' | VAR_11))
   FUNC_13(VAR_14, 2);
  else {
   FUNC_2(VAR_13, ~VAR_10);
   switch (FUNC_0(VAR_13)) {
   case 131:
    if(!(FUNC_3(VAR_14->t_iflag, VAR_6) && FUNC_1(VAR_13))) {
     FUNC_13(VAR_14, 1);
    }
    break;
   case 134:
   case 133:
   case 132:
   case 130:
   case 128:
    if (FUNC_3(VAR_14->t_lflag, VAR_1))
     FUNC_13(VAR_14, 2);
    break;
   case 129:
    if (VAR_14->t_rocount < VAR_14->t_rawq.c_cc) {
     FUNC_12(VAR_14);
     return;
    }
    VAR_16 = VAR_14->t_column;
    FUNC_4(VAR_14->t_state, VAR_8);
    FUNC_4(VAR_14->t_lflag, VAR_5);
    VAR_14->t_column = VAR_14->t_rocol;
    for (VAR_15 = FUNC_6(&VAR_14->t_rawq, &VAR_17); VAR_15;
        VAR_15 = FUNC_7(&VAR_14->t_rawq, VAR_15, &VAR_17))
     FUNC_10(VAR_17, VAR_14);
    FUNC_2(VAR_14->t_lflag, VAR_5);
    FUNC_2(VAR_14->t_state, VAR_8);


    VAR_16 -= VAR_14->t_column;
    VAR_14->t_column += VAR_16;
    if (VAR_16 > 8)
     VAR_16 = 8;
    while (--VAR_16 >= 0)
     (void)FUNC_11('\b', VAR_14);
    break;
   default:

    FUNC_9("ttyrub: would panic c = %d, val = %d\n", VAR_13, FUNC_0(VAR_13));



   }
  }
 } else if (FUNC_3(VAR_14->t_lflag, VAR_3)) {
  if (!FUNC_3(VAR_14->t_state, VAR_9)) {
   FUNC_4(VAR_14->t_state, VAR_9);
   (void)FUNC_11('\\', VAR_14);
  }
  FUNC_10(VAR_13, VAR_14);
 } else
  FUNC_10(VAR_14->t_cc[VAR_12], VAR_14);
 --VAR_14->t_rocount;
}
