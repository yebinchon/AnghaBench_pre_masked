
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,char*,char const*) ;
 int FUNC_1 (char const*,unsigned int*,size_t*,int *,int ) ;

__attribute__((used)) static unsigned
FUNC_2(const char *VAR_0)
{
 unsigned VAR_1;
 size_t VAR_2;

 VAR_2 = sizeof(unsigned);
 FUNC_0(FUNC_1(VAR_0, &VAR_1, &VAR_2, ((void*)0), 0), 0,
     "Unexpected mallctl(\"%s\", ...) failure", VAR_0);

 return (VAR_1);
}
