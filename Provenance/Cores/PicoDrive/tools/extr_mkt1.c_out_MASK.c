
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2)
{
 if (!VAR_2)
 {
  FUNC_0(VAR_0, "    or      $t%i, $t%i, $a2\n", VAR_1, VAR_1);
  FUNC_0(VAR_0, "    sb      $t%i, %i($a0)\n", VAR_1, VAR_1);
 }
 else
 {
  FUNC_0(VAR_0, "    or      $t%i, $t%i, $a2\n", VAR_1, VAR_1);
  FUNC_0(VAR_0, "    jr      $ra\n");
  FUNC_0(VAR_0, "    sb      $t%i, %i($a0)\n", VAR_1, VAR_1);
 }
}
