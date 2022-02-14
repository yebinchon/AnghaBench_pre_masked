
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(uint64_t VAR_1[2][2])
{
 VAR_0;
 FUNC_0(VAR_1[0][0], FUNC_1(0), "instructions are larger than 0");
 VAR_0;
 FUNC_0(VAR_1[0][1], FUNC_1(0), "cycles are larger than 0");

 FUNC_0(VAR_1[1][0], VAR_1[0][0], "instructions increase monotonically");
 FUNC_0(VAR_1[1][1], VAR_1[0][1], "cycles increase monotonically");
}
