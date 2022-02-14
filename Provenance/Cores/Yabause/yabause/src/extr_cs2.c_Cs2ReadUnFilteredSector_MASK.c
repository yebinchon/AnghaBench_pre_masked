
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {size_t numblocks; int size; TYPE_7__** block; int * blocknum; } ;
typedef TYPE_3__ partition_struct ;
struct TYPE_12__ {int fn; int cn; int sm; int ci; scalar_t__ size; int data; } ;
struct TYPE_9__ {int* data; int size; int FAD; } ;
struct TYPE_11__ {int getsectsize; TYPE_2__ workblock; TYPE_1__* cdi; int isbufferfull; int outconcddev; } ;
struct TYPE_8__ {int (* ReadSectorFAD ) (int ,int*) ;} ;


 TYPE_7__* FUNC_0 (int *) ;
 TYPE_6__* VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*) ;

partition_struct * FUNC_5(u32 VAR_1) {
  partition_struct * VAR_2;
  char VAR_3[12] = { 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                          0xFF, 0xFF, 0xFF, 0x00};

  if ((VAR_2 = FUNC_1(VAR_0->outconcddev)) != ((void*)0) && !VAR_0->isbufferfull)
  {

     VAR_2->block[VAR_2->numblocks] = FUNC_0(&VAR_2->blocknum[VAR_2->numblocks]);

     if (VAR_2->block[VAR_2->numblocks] == ((void*)0))
        return ((void*)0);


     if (!VAR_0->cdi->ReadSectorFAD(VAR_1, VAR_0->workblock.data))
        return ((void*)0);


     switch(VAR_0->getsectsize)
     {
        case 2048:
                   if (VAR_0->workblock.data[0xF] == 0x02)
                   {

                      if (!(VAR_0->workblock.data[0x12] & 0x20))
                      {

                         FUNC_3(VAR_2->block[VAR_2->numblocks]->data,
                                VAR_0->workblock.data + 24, 2048);
                         VAR_0->workblock.size = VAR_0->getsectsize;
                      }
                      else
                      {

                         FUNC_3(VAR_2->block[VAR_2->numblocks]->data,
                                VAR_0->workblock.data + 24, 2324);
                         VAR_0->workblock.size = 2324;
                      }
                   }
                   else
                   {
                      FUNC_3(VAR_2->block[VAR_2->numblocks]->data,
                             VAR_0->workblock.data + 16, 2048);
                      VAR_0->workblock.size = VAR_0->getsectsize;
                   }
                   break;
        case 2336:
                   FUNC_3(VAR_2->block[VAR_2->numblocks]->data,
                   VAR_0->workblock.data + 16, 2336);
                   VAR_0->workblock.size = VAR_0->getsectsize;
                   break;
        case 2340:
                   FUNC_3(VAR_2->block[VAR_2->numblocks]->data,
                   VAR_0->workblock.data + 12, 2340);
                   VAR_0->workblock.size = VAR_0->getsectsize;
                   break;
        case 2352:
                   VAR_0->workblock.size = VAR_0->getsectsize;
                   break;
        default: break;
     }


     if (FUNC_2(VAR_3, VAR_0->workblock.data, 12) == 0 &&
         VAR_0->workblock.data[0xF] == 0x02)
     {
        VAR_2->block[VAR_2->numblocks]->fn = VAR_0->workblock.data[0x10];
        VAR_2->block[VAR_2->numblocks]->cn = VAR_0->workblock.data[0x11];
        VAR_2->block[VAR_2->numblocks]->sm = VAR_0->workblock.data[0x12];
        VAR_2->block[VAR_2->numblocks]->ci = VAR_0->workblock.data[0x13];
     }

     VAR_0->workblock.FAD = VAR_1;


     if (VAR_2->size == -1) VAR_2->size = 0;
     VAR_2->size += VAR_2->block[VAR_2->numblocks]->size;
     VAR_2->numblocks++;

     return VAR_2;
  }

  return ((void*)0);
}
