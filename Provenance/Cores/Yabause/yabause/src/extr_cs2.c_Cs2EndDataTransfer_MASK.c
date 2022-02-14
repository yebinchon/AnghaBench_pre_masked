
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
typedef size_t s32 ;
struct TYPE_4__ {int CR1; int CR2; int HIRQ; scalar_t__ CR4; scalar_t__ CR3; } ;
struct TYPE_6__ {int cdwnum; int status; int datatranstype; size_t datatranssectpos; size_t datasectstotrans; int blockfreespace; TYPE_1__ reg; int isonesectorstored; TYPE_2__* datatranspartition; } ;
struct TYPE_5__ {int size; int* blocknum; size_t numblocks; int ** block; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(void) {
  s32 VAR_3;
  if (VAR_2->cdwnum)
  {
     VAR_2->reg.CR1 = (u16)((VAR_2->status << 8) | ((VAR_2->cdwnum >> 17) & 0xFF));
     VAR_2->reg.CR2 = (u16)(VAR_2->cdwnum >> 1);
     VAR_2->reg.CR3 = 0;
     VAR_2->reg.CR4 = 0;
  }
  else
  {
     VAR_2->reg.CR1 = (VAR_2->status << 8) | 0xFF;
     VAR_2->reg.CR2 = 0xFFFF;
     VAR_2->reg.CR3 = 0;
     VAR_2->reg.CR4 = 0;
  }




  switch (VAR_2->datatranstype)
  {
     case 0:

        VAR_2->reg.HIRQ |= VAR_1;
        break;
     case 2:
     {



        if (VAR_2->datatranspartition->size <= 0) break;

        VAR_2->datatranstype = -1;


        for (VAR_3 = VAR_2->datatranssectpos; VAR_3 < (VAR_2->datatranssectpos + VAR_2->datasectstotrans); VAR_3++)
        {
           FUNC_0(VAR_2->datatranspartition->block[VAR_3]);
           VAR_2->datatranspartition->block[VAR_3] = ((void*)0);
           VAR_2->datatranspartition->blocknum[VAR_3] = 0xFF;
        }


        FUNC_1(VAR_2->datatranspartition);

        VAR_2->datatranspartition->size -= VAR_2->cdwnum;
        VAR_2->datatranspartition->numblocks -= VAR_2->datasectstotrans;

        if (VAR_2->blockfreespace == 200) VAR_2->isonesectorstored = 0;

        VAR_2->reg.HIRQ |= VAR_1;
        break;
     }
     default: break;
  }

  VAR_2->cdwnum = 0;

  VAR_2->reg.HIRQ |= VAR_0;
}
