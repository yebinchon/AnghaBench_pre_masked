
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0,
                                        char *VAR_1)
{
  int VAR_2 = 256;
  char *VAR_3 = FUNC_4(VAR_2);
  FILE *VAR_4 = FUNC_2(VAR_0, "rb");
  VAR_1[0] = '\0';
  if(VAR_4 != ((void*)0)) {
    while(FUNC_1(VAR_3, VAR_2 - 2, VAR_4) != ((void*)0)) {
      FUNC_5(VAR_3, " a = control: %s", VAR_1);
    }
    FUNC_0(VAR_4);
  }
  FUNC_3(VAR_3);
}
