
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PARTITION ;
typedef int DIR_ENTRY ;


 int FUNC_0 (int *,int *,char const*,int *) ;
 int * FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;

bool FUNC_3(const char *VAR_0, DIR_ENTRY *VAR_1) {
 PARTITION *VAR_2 = FUNC_1(VAR_0);


 if( !VAR_2 )
  return 0;


 if (FUNC_2 (VAR_0, ':') != ((void*)0))
  VAR_0 = FUNC_2 (VAR_0, ':') + 1;
 if (FUNC_2 (VAR_0, ':') != ((void*)0))
  return 0;


 return FUNC_0 (VAR_2, VAR_1, VAR_0, ((void*)0));

}
