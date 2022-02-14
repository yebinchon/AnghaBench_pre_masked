
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_info {unsigned int* RIOBindTab; } ;
struct Host {unsigned int UniqueNum; } ;


 int VAR_0 ;

int FUNC_0(struct rio_info *VAR_1, struct Host *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = VAR_2->UniqueNum;





 for (VAR_4 = 0; (VAR_4 < VAR_0) && (VAR_1->RIOBindTab[VAR_4] != 0); VAR_4++) {
  if ((VAR_1->RIOBindTab[VAR_4] == VAR_5) || (VAR_1->RIOBindTab[VAR_4] == VAR_3))
   return 0;
 }
 return 1;
}
