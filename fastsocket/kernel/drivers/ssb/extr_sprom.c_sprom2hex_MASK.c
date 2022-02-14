
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ FUNC_0 (char*,size_t,char*,...) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(const u16 *VAR_0, char *VAR_1, size_t VAR_2,
       size_t VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_5 += FUNC_0(VAR_1 + VAR_5, VAR_2 - VAR_5 - 1,
    "%04X", FUNC_1(VAR_0[VAR_4]) & 0xFFFF);
 VAR_5 += FUNC_0(VAR_1 + VAR_5, VAR_2 - VAR_5 - 1, "\n");

 return VAR_5 + 1;
}
