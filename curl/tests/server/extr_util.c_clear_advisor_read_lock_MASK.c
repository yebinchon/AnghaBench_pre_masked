
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_2)
{
  int VAR_3 = 0;
  int VAR_4;







  do {
    VAR_4 = FUNC_2(VAR_2);
  } while(VAR_4 && ((VAR_3 = VAR_1) == VAR_0));
  if(VAR_4)
    FUNC_0("Error removing lock file %s error: %d %s",
           VAR_2, VAR_3, FUNC_1(VAR_3));
}
