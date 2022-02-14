
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_9__ {int CR1; int CR3; int HIRQ; } ;
struct TYPE_10__ {int blockfreespace; int datatranstype; size_t datatranspartitionnum; TYPE_4__ reg; int status; scalar_t__ isonesectorstored; TYPE_3__* block; TYPE_2__* partition; scalar_t__ isbufferfull; TYPE_1__* filter; } ;
struct TYPE_8__ {int size; int data; } ;
struct TYPE_7__ {size_t numblocks; int* blocknum; int size; int ** block; } ;
struct TYPE_6__ {int condfalse; int range; scalar_t__ cival; scalar_t__ smval; scalar_t__ fid; scalar_t__ cimask; scalar_t__ smmask; scalar_t__ chan; scalar_t__ mode; scalar_t__ FAD; scalar_t__ condtrue; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (int *) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(void) {

  u32 VAR_5, VAR_6;

  if ((VAR_2->reg.CR1 & 0xFF) == 0)
  {

     u32 VAR_7 = VAR_2->reg.CR3 >> 8;


     if (VAR_7 < VAR_4)
     {

        for (VAR_5 = 0; VAR_5 < VAR_2->partition[VAR_7].numblocks; VAR_5++)
        {
           FUNC_0(VAR_2->partition[VAR_7].block[VAR_5]);
           VAR_2->partition[VAR_7].block[VAR_5] = ((void*)0);
           VAR_2->partition[VAR_7].blocknum[VAR_5] = 0xFF;
        }

        VAR_2->partition[VAR_7].size = -1;
        VAR_2->partition[VAR_7].numblocks = 0;
     }

     if (VAR_2->blockfreespace > 0) VAR_2->isbufferfull = 0;
     if (VAR_2->blockfreespace == 200)
     {
        VAR_2->isonesectorstored = 0;
        VAR_2->datatranstype = -1;
     }
     else if (VAR_2->datatranspartitionnum == VAR_7)
        VAR_2->datatranstype = -1;

     FUNC_1(VAR_2->status);
     VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
     return;
  }


  if (VAR_2->reg.CR1 & 0x80)
  {

     for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_2->filter[VAR_5].condfalse = 0xFF;
  }

  if (VAR_2->reg.CR1 & 0x40)
  {

     for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_2->filter[VAR_5].condtrue = (u8)VAR_5;
  }

  if (VAR_2->reg.CR1 & 0x10)
  {

     for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
     {
        VAR_2->filter[VAR_5].FAD = 0;
        VAR_2->filter[VAR_5].range = 0xFFFFFFFF;
        VAR_2->filter[VAR_5].mode = 0;
        VAR_2->filter[VAR_5].chan = 0;
        VAR_2->filter[VAR_5].smmask = 0;
        VAR_2->filter[VAR_5].cimask = 0;
        VAR_2->filter[VAR_5].fid = 0;
        VAR_2->filter[VAR_5].smval = 0;
        VAR_2->filter[VAR_5].cival = 0;
     }
  }

  if (VAR_2->reg.CR1 & 0x8)
  {

  }

  if (VAR_2->reg.CR1 & 0x4)
  {

     VAR_2->isbufferfull = 0;


     for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
     {
        VAR_2->partition[VAR_5].size = -1;
        VAR_2->partition[VAR_5].numblocks = 0;

        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        {
           VAR_2->partition[VAR_5].block[VAR_6] = ((void*)0);
           VAR_2->partition[VAR_5].blocknum[VAR_6] = 0xFF;
        }
     }


     for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
     {
        VAR_2->block[VAR_5].size = -1;
        FUNC_2(VAR_2->block[VAR_5].data, 0, 2352);
     }

     VAR_2->isonesectorstored = 0;
     VAR_2->datatranstype = -1;
  }

  FUNC_1(VAR_2->status);
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
