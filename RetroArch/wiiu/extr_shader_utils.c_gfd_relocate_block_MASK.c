
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ dataSize; } ;
struct TYPE_7__ {scalar_t__ data; TYPE_1__ header; } ;
struct TYPE_6__ {scalar_t__ magic; int patchOffset; int patchCount; } ;
typedef TYPE_2__ GFDRelocationHeader ;
typedef TYPE_3__ GFDBlock ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(GFDBlock* VAR_5)
{

   GFDRelocationHeader* VAR_6 = (GFDRelocationHeader*)(VAR_5->data + VAR_5->header.dataSize) - 1;

   if (VAR_6->magic != VAR_0)
   {
      FUNC_0("wrong relocations magic number.\n");
      return 0;
   }

   if((VAR_6->patchOffset & VAR_3) != VAR_1)
   {
      FUNC_0("wrong data relocations mask.\n");
      return 0;
   }

   u32* VAR_7 = (u32*)(VAR_5->data + (VAR_6->patchOffset & VAR_4));

   for(int VAR_8=0; VAR_8 < VAR_6->patchCount; VAR_8++)
   {
      if(VAR_7[VAR_8])
      {
         if((VAR_7[VAR_8] & VAR_3) != VAR_1)
         {
            FUNC_0("wrong patch relocations mask.\n");
            return 0;
         }

         u32* VAR_9 = (u32*)(VAR_5->data + (VAR_7[VAR_8] & VAR_4));
         if((((*VAR_9) & VAR_3) != VAR_1) &&
            (((*VAR_9) & VAR_3) != VAR_2))
         {
            FUNC_0("wrong relocations mask.\n");
            return 0;
         }
         *VAR_9 = (u32)VAR_5->data + ((*VAR_9) & VAR_4);
      }
   }

   return 1;
}
