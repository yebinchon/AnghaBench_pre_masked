
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 char* VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, "move.w  %s, %s", VAR_2, FUNC_0(((VAR_0>>9) & 7) | ((VAR_0>>3) & 0x38)));
}
