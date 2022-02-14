
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct INFTLrecord {int nb_blocks; int* VUtable; int* PUtable; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(struct INFTLrecord *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 FUNC_0("-------------------------------------------"
  "----------------------------------\n");

 FUNC_0("INFTL Virtual Unit Chains:\n");
 for (VAR_2 = 0; VAR_2 < VAR_1->nb_blocks; VAR_2++) {
  VAR_3 = VAR_1->VUtable[VAR_2];
  if (VAR_3 > VAR_1->nb_blocks)
   continue;
  FUNC_0("  LOGICAL %d --> %d ", VAR_2, VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_1->nb_blocks; VAR_4++) {
   if (VAR_1->PUtable[VAR_3] == VAR_0)
    break;
   VAR_3 = VAR_1->PUtable[VAR_3];
   FUNC_0("%d ", VAR_3);
  }
  FUNC_0("\n");
 }

 FUNC_0("-------------------------------------------"
  "----------------------------------\n");
}
