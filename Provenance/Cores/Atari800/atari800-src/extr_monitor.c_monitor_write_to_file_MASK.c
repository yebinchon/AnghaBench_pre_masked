
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int FILE ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (int *,int,int,int *) ;
 scalar_t__ FUNC_3 (int*,int*) ;
 char* FUNC_4 () ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(void)
{
 UWORD VAR_1;
 UWORD VAR_2;
 if (FUNC_3(&VAR_1, &VAR_2) && VAR_1 <= VAR_2) {
  const char *VAR_3;
  FILE *VAR_4;
  VAR_3 = FUNC_4();
  if (VAR_3 == ((void*)0))
   VAR_3 = "memdump.dat";
  VAR_4 = FUNC_1(VAR_3, "wb");
  if (VAR_4 == ((void*)0))
   FUNC_5(VAR_3);
  else {
   size_t VAR_5 = VAR_2 - VAR_1 + 1;
   if (FUNC_2(&VAR_0[VAR_1], 1, VAR_2 - VAR_1 + 1, VAR_4) < VAR_5)
    FUNC_5(VAR_3);
   FUNC_0(VAR_4);
  }
 }
}
