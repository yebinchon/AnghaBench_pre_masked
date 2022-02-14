
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {int dummy; } ;
struct fileglob {int fg_lflags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fileproc*,struct fileglob*,void*) ;
 void* FUNC_3 () ;
 int FUNC_4 (struct fileglob*) ;
 scalar_t__ FUNC_5 (struct fileglob*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct fileglob *VAR_3, void *VAR_4)
{
 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_3();

 (void) FUNC_0(1, &VAR_1);
 if (FUNC_5(VAR_3)) {
  FUNC_1(VAR_3->fg_lflags & VAR_0);
  FUNC_4(VAR_3);
 }
 (void) FUNC_0(-1, &VAR_2);

 FUNC_6(VAR_4);
 (void) FUNC_2((struct fileproc *)0, VAR_3, VAR_4);
 FUNC_7(VAR_4);
}
