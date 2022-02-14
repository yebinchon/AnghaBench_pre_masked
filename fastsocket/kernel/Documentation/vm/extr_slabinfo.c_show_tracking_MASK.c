
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct slabinfo*,char*) ;

__attribute__((used)) static void FUNC_2(struct slabinfo *VAR_1)
{
 FUNC_0("\n%s: Kernel object allocation\n", VAR_1->name);
 FUNC_0("-----------------------------------------------------------------------\n");
 if (FUNC_1(VAR_1, "alloc_calls"))
  FUNC_0(VAR_0);
 else
  FUNC_0("No Data\n");

 FUNC_0("\n%s: Kernel object freeing\n", VAR_1->name);
 FUNC_0("------------------------------------------------------------------------\n");
 if (FUNC_1(VAR_1, "free_calls"))
  FUNC_0(VAR_0);
 else
  FUNC_0("No Data\n");

}
