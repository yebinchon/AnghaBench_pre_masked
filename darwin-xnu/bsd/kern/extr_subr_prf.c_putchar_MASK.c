
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct putchar_args {int flags; int * tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;

void
FUNC_5(int VAR_8, void *VAR_9)
{
 struct putchar_args *VAR_10 = VAR_9;
 char **VAR_11 = (char**) VAR_10->tty;

 if (VAR_6)
  VAR_5 = 0;
 if ((VAR_10->flags & VAR_0) && VAR_10->tty == ((void*)0) && VAR_5) {
  VAR_10->tty = VAR_5;
  VAR_10->flags |= VAR_4;
 }
 if ((VAR_10->flags & VAR_4) && VAR_10->tty && FUNC_3(VAR_8, VAR_10->tty) < 0 &&
     (VAR_10->flags & VAR_0) && VAR_10->tty == VAR_5)
  VAR_5 = 0;
 if ((VAR_10->flags & VAR_1) && VAR_8 != '\0' && VAR_8 != '\r' && VAR_8 != 0177)
  FUNC_0(VAR_8);
 if ((VAR_10->flags & VAR_2) && VAR_8 != '\0' && VAR_8 != '\r' && VAR_8 != 0177)
  FUNC_1(VAR_7, VAR_8);
 if ((VAR_10->flags & VAR_0) && VAR_5 == 0 && VAR_8 != '\0')
  FUNC_4)(VAR_8);
 if (VAR_10->flags & VAR_3) {
  **VAR_11 = VAR_8;
  (*VAR_11)++;
 }
}
