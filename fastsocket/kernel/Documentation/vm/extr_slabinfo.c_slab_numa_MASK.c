
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; int * numa_partial; int * numa; int slabs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct slabinfo *VAR_3, int VAR_4)
{
 int VAR_5;

 if (FUNC_2(VAR_3->name, "*") == 0)
  return;

 if (!VAR_0) {
  FUNC_0("\n%s: No NUMA information available.\n", VAR_3->name);
  return;
 }

 if (VAR_2 && !VAR_3->slabs)
  return;

 if (!VAR_1) {
  FUNC_0("\n%-21s:", VAR_4 ? "NUMA nodes" : "Slab");
  for(VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
   FUNC_0(" %4d", VAR_5);
  FUNC_0("\n----------------------");
  for(VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
   FUNC_0("-----");
  FUNC_0("\n");
 }
 FUNC_0("%-21s ", VAR_4 ? "All slabs" : VAR_3->name);
 for(VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
  char VAR_6[20];

  FUNC_1(VAR_6, VAR_3->numa[VAR_5]);
  FUNC_0(" %4s", VAR_6);
 }
 FUNC_0("\n");
 if (VAR_4) {
  FUNC_0("%-21s ", "Partial slabs");
  for(VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
   char VAR_7[20];

   FUNC_1(VAR_7, VAR_3->numa_partial[VAR_5]);
   FUNC_0(" %4s", VAR_7);
  }
  FUNC_0("\n");
 }
 VAR_1++;
}
