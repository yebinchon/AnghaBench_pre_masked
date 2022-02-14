
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,char*,char const*,...) ;
 int FUNC_1 (size_t*,size_t,size_t*,size_t*,int *,int ) ;
 int FUNC_2 (char const*,size_t*,size_t*) ;

__attribute__((used)) static size_t
FUNC_3(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;
 size_t VAR_4[4];
 size_t VAR_5 = 4;

 VAR_3 = sizeof(size_t);
 FUNC_0(FUNC_2(VAR_0, VAR_4, &VAR_5),
     0, "Unexpected mallctlnametomib(\"%s\", ...) failure", VAR_0);
 VAR_4[2] = VAR_1;
 VAR_3 = sizeof(size_t);
 FUNC_0(FUNC_1(VAR_4, VAR_5, &VAR_2, &VAR_3, ((void*)0), 0),
     0, "Unexpected mallctlbymib([\"%s\", %zu], ...) failure", VAR_0, VAR_1);

 return (VAR_2);
}
