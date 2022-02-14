
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_5__ {size_t CR2; int CR3; size_t CR4; int HIRQ; } ;
struct TYPE_8__ {int blockfreespace; TYPE_1__ reg; int status; scalar_t__ isonesectorstored; TYPE_2__* partition; } ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {scalar_t__ numblocks; int* blocknum; TYPE_3__** block; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t,size_t*,size_t*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 size_t VAR_4 ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
   u32 VAR_5;
   u32 VAR_6;
   u32 VAR_7;
   u32 VAR_8;

   VAR_5 = VAR_3->reg.CR2;
   VAR_6 = VAR_3->reg.CR3 >> 8;
   VAR_7 = VAR_3->reg.CR4;

   if (VAR_6 >= VAR_4)
   {
      FUNC_4(VAR_2);
      VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
      return;
   }

   if (VAR_3->partition[VAR_6].numblocks == 0)
   {
      FUNC_0("No sectors available\n");

      FUNC_4(VAR_2);
      VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
      return;
   }

   FUNC_1(VAR_6, &VAR_5, &VAR_7);

   for (VAR_8 = VAR_5; VAR_8 < (VAR_5+VAR_7); VAR_8++)
   {
      VAR_3->partition[VAR_6].size -= VAR_3->partition[VAR_6].block[VAR_8]->size;
      FUNC_2(VAR_3->partition[VAR_6].block[VAR_8]);
      VAR_3->partition[VAR_6].block[VAR_8] = ((void*)0);
      VAR_3->partition[VAR_6].blocknum[VAR_8] = 0xFF;
   }


   FUNC_3(&VAR_3->partition[VAR_6]);

   VAR_3->partition[VAR_6].numblocks -= (u8)VAR_7;

   if (VAR_3->blockfreespace == 200)
      VAR_3->isonesectorstored = 0;

   FUNC_4(VAR_3->status);
   VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
}
