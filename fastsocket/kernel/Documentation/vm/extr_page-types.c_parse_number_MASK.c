
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 unsigned long long FUNC_1 (char const*,int *,int ) ;

__attribute__((used)) static unsigned long long FUNC_2(const char *VAR_0)
{
 unsigned long long VAR_1;

 VAR_1 = FUNC_1(VAR_0, ((void*)0), 0);

 if (VAR_1 == 0 && VAR_0[0] != '0')
  FUNC_0("invalid name or number: %s\n", VAR_0);

 return VAR_1;
}
