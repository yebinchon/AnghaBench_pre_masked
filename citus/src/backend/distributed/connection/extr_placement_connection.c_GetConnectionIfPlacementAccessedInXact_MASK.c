
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiConnection ;
typedef int List ;


 char* FUNC_0 () ;
 int * FUNC_1 (int,int *,char const*) ;
 int FUNC_2 (char*) ;

MultiConnection *
FUNC_3(int VAR_0, List *VAR_1,
            const char *VAR_2)
{
 MultiConnection *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = VAR_4 = FUNC_0();
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1,
            VAR_2);

 if (VAR_4 != ((void*)0))
 {
  FUNC_2(VAR_4);
 }

 return VAR_3;
}
