
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1)
{
 int VAR_2;
 FUNC_0("dt3k: intr_flags:");
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if (VAR_1 & (1 << VAR_2)) {
   FUNC_0(" %s", VAR_0[VAR_2]);
  }
 }
 FUNC_0("\n");
}
