
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chtype ;
typedef int WINDOW ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int,char*,char const*) ;
 int FUNC_2 () ;
 int * VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(WINDOW *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  const char *VAR_5,
  chtype VAR_6)
{ int VAR_7, VAR_8, VAR_9;
 float VAR_10;


 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0;
 FUNC_0(VAR_1, VAR_9, VAR_8);
 if (VAR_3 != 0)
  VAR_8 = VAR_3;
 if (VAR_2 != 0)
  VAR_9 = VAR_2;
 if (VAR_4 == 0)
  VAR_4 = 80;

 VAR_7 = FUNC_3(VAR_5);
 VAR_10 = (VAR_4 - VAR_7) / 2;
 VAR_8 = VAR_3 + (int)VAR_10;
 (void) FUNC_4(VAR_1, VAR_6);
 FUNC_1(VAR_1, VAR_9, VAR_8, "%s", VAR_5);
 FUNC_2();
}
