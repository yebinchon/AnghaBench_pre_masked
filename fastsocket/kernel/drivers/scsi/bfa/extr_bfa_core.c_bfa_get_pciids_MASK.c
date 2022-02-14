
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_pciid_s {int member_1; int const member_0; } ;
typedef int __pciids ;
void
FUNC_0(struct bfa_pciid_s **VAR_0, int *VAR_1)
{
 static struct bfa_pciid_s VAR_2[] = {
  {128, 129},
  {128, 130},
  {128, 132},
  {128, 131},
 };

 *VAR_1 = sizeof(VAR_2) / sizeof(VAR_2[0]);
 *VAR_0 = VAR_2;
}
