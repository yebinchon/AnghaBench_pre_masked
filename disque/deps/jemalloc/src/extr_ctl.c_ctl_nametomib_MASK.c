
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char const*,int *,size_t*,size_t*) ;

int
FUNC_2(const char *VAR_2, size_t *VAR_3, size_t *VAR_4)
{
 int VAR_5;

 if (!VAR_1 && FUNC_0()) {
  VAR_5 = VAR_0;
  goto label_return;
 }

 VAR_5 = FUNC_1(VAR_2, ((void*)0), VAR_3, VAR_4);
label_return:
 return(VAR_5);
}
