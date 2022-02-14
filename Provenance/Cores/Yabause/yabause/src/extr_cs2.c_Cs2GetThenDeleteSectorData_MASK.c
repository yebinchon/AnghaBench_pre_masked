
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef void* u16 ;
struct TYPE_5__ {size_t CR2; int CR3; size_t CR4; int HIRQ; } ;
struct TYPE_6__ {int datatranstype; TYPE_2__ reg; int status; void* datasectstotrans; void* datatranssectpos; scalar_t__ datanumsecttrans; scalar_t__ datatransoffset; TYPE_1__* partition; TYPE_1__* datatranspartition; scalar_t__ cdwnum; } ;
struct TYPE_4__ {scalar_t__ numblocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t,size_t*,size_t*) ;
 TYPE_3__* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
   u32 VAR_6;
   u32 VAR_7;
   u32 VAR_8;

   VAR_6 = VAR_4->reg.CR2;
   VAR_7 = VAR_4->reg.CR3 >> 8;
   VAR_8 = VAR_4->reg.CR4;

   if (VAR_7 >= VAR_5)
   {
      FUNC_2(VAR_3);
      VAR_4->reg.HIRQ |= VAR_0 | VAR_2;
      return;
   }

   if (VAR_4->partition[VAR_7].numblocks == 0)
   {
      FUNC_0("No sectors available\n");

      FUNC_2(VAR_3);
      VAR_4->reg.HIRQ |= VAR_0 | VAR_2;
      return;
   }

   FUNC_1(VAR_7, &VAR_6, &VAR_8);


   VAR_4->cdwnum = 0;
   VAR_4->datatranstype = 2;
   VAR_4->datatranspartition = VAR_4->partition + VAR_7;
   VAR_4->datatransoffset = 0;
   VAR_4->datanumsecttrans = 0;
   VAR_4->datatranssectpos = (u16)VAR_6;
   VAR_4->datasectstotrans = (u16)VAR_8;

   FUNC_2(VAR_4->status);
   VAR_4->reg.HIRQ |= VAR_0 | VAR_1 | VAR_2;

   return;
}
