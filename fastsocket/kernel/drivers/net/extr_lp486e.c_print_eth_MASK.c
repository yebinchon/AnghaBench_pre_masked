
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_0)
{
 int VAR_1;

 FUNC_0 ("Dest  ");
 for (VAR_1 = 0; VAR_1 < 6; VAR_1++)
  FUNC_0(" %2.2X", (unsigned char) VAR_0[VAR_1]);
 FUNC_0 ("\n");

 FUNC_0 ("Source");
 for (VAR_1 = 0; VAR_1 < 6; VAR_1++)
  FUNC_0(" %2.2X", (unsigned char) VAR_0[VAR_1+6]);
 FUNC_0 ("\n");

 FUNC_0 ("type %2.2X%2.2X\n",
  (unsigned char) VAR_0[12], (unsigned char) VAR_0[13]);
}
