
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char const*,int,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(const char *VAR_2)
{
  FILE *VAR_3;
  int VAR_4 = 0;
  int VAR_5;

  do {
    VAR_3 = FUNC_1(VAR_2, "wb");
  } while((VAR_3 == ((void*)0)) && ((VAR_4 = VAR_1) == VAR_0));
  if(VAR_3 == ((void*)0)) {
    FUNC_2("Error creating lock file %s error: %d %s",
           VAR_2, VAR_4, FUNC_3(VAR_4));
    return;
  }

  do {
    VAR_5 = FUNC_0(VAR_3);
  } while(VAR_5 && ((VAR_4 = VAR_1) == VAR_0));
  if(VAR_5)
    FUNC_2("Error closing lock file %s error: %d %s",
           VAR_2, VAR_4, FUNC_3(VAR_4));
}
