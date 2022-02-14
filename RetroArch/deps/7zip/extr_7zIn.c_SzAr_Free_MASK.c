
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t NumFolders; int * Files; int * Folders; int * PackCRCs; int * PackCRCsDefined; int * PackSizes; } ;
typedef int ISzAlloc ;
typedef TYPE_1__ CSzAr ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(CSzAr *VAR_0, ISzAlloc *VAR_1)
{
   uint32_t VAR_2;
   if (VAR_0->Folders)
      for (VAR_2 = 0; VAR_2 < VAR_0->NumFolders; VAR_2++)
         FUNC_2(&VAR_0->Folders[VAR_2], VAR_1);

   FUNC_0(VAR_1, VAR_0->PackSizes);
   FUNC_0(VAR_1, VAR_0->PackCRCsDefined);
   FUNC_0(VAR_1, VAR_0->PackCRCs);
   FUNC_0(VAR_1, VAR_0->Folders);
   FUNC_0(VAR_1, VAR_0->Files);
   FUNC_1(VAR_0);
}
