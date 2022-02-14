
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, size_t VAR_2)
{
 char VAR_3[10 + 1] = { 0 };
 int VAR_4 = -VAR_0;

 if (VAR_2 == 0)
  goto out;
 VAR_2 = FUNC_1(VAR_2, (size_t)10);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 VAR_4 = FUNC_2(VAR_3, ((void*)0), 10);
out:
 return VAR_4;
}
