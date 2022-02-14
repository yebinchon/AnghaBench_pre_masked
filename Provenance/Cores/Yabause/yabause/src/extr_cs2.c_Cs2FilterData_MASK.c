
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t numblocks; int size; TYPE_7__** block; int * blocknum; } ;
typedef TYPE_2__ partition_struct ;
struct TYPE_10__ {int mode; scalar_t__ fid; scalar_t__ chan; int smmask; int smval; int cimask; int cival; scalar_t__ FAD; scalar_t__ range; int condtrue; int condfalse; } ;
typedef TYPE_3__ filter_struct ;
struct TYPE_12__ {int size; scalar_t__ FAD; scalar_t__ cn; scalar_t__ fn; int sm; int ci; int data; } ;
struct TYPE_8__ {int* data; scalar_t__ fn; scalar_t__ cn; int sm; int ci; scalar_t__ FAD; int size; } ;
struct TYPE_11__ {int lastbuffer; TYPE_1__ workblock; TYPE_3__* filter; TYPE_2__* partition; } ;


 int FUNC_0 (char*,...) ;
 TYPE_7__* FUNC_1 (int *) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (int ,int*,int) ;

partition_struct * FUNC_3(filter_struct * VAR_1, int VAR_2)
{
  int VAR_3;
  partition_struct * VAR_4 = ((void*)0);

  for (;;)
  {

     VAR_3 = 1;


     if (VAR_0->workblock.data[0xF] == 0x02 && !VAR_2)
     {



        if (VAR_1->mode & 0x01)
        {

           if (VAR_0->workblock.fn != VAR_1->fid)
              VAR_3 = 0;
        }

        if (VAR_1->mode & 0x02)
        {

           if (VAR_0->workblock.cn != VAR_1->chan)
              VAR_3 = 0;
        }

        if (VAR_1->mode & 0x04)
        {

           if ((VAR_0->workblock.sm & VAR_1->smmask) != VAR_1->smval)
              VAR_3 = 0;
        }

        if (VAR_1->mode & 0x08)
        {

           FUNC_0("cs2\t: FilterData: Coding Information Check. Coding Information = %02X. Filter's Coding Information Mask = %02X, Coding Information Value = %02X\n", VAR_0->workblock.ci, VAR_1->cimask, VAR_1->cival);
           if ((VAR_0->workblock.ci & VAR_1->cimask) != VAR_1->cival)
              VAR_3 = 0;
        }

        if (VAR_1->mode & 0x10)
        {

           FUNC_0("cs2\t: FilterData: Reverse Subheader Conditions\n");
           VAR_3 ^= 1;
        }
     }

     if (VAR_1->mode & 0x40)
     {

        if (VAR_0->workblock.FAD < VAR_1->FAD ||
            VAR_0->workblock.FAD >= (VAR_1->FAD+VAR_1->range))
            VAR_3 = 0;
     }

     if (VAR_3 == 1)
     {
        VAR_0->lastbuffer = VAR_1->condtrue;
        VAR_4 = &VAR_0->partition[VAR_1->condtrue];
        break;
     }
     else
     {
        VAR_0->lastbuffer = VAR_1->condfalse;

        if (VAR_1->condfalse == 0xFF)
           return ((void*)0);

        VAR_1 = &VAR_0->filter[VAR_1->condfalse];
     }
  }


  VAR_4->block[VAR_4->numblocks] = FUNC_1(&VAR_4->blocknum[VAR_4->numblocks]);

  if (VAR_4->block[VAR_4->numblocks] == ((void*)0))
    return ((void*)0);


  VAR_4->block[VAR_4->numblocks]->size = VAR_0->workblock.size;
  VAR_4->block[VAR_4->numblocks]->FAD = VAR_0->workblock.FAD;
  VAR_4->block[VAR_4->numblocks]->cn = VAR_0->workblock.cn;
  VAR_4->block[VAR_4->numblocks]->fn = VAR_0->workblock.fn;
  VAR_4->block[VAR_4->numblocks]->sm = VAR_0->workblock.sm;
  VAR_4->block[VAR_4->numblocks]->ci = VAR_0->workblock.ci;


  switch(VAR_0->workblock.size)
  {
     case 2048:
                if (VAR_0->workblock.data[0xF] == 0x02)

                   FUNC_2(VAR_4->block[VAR_4->numblocks]->data,
                          VAR_0->workblock.data + 24, VAR_0->workblock.size);
                else

                   FUNC_2(VAR_4->block[VAR_4->numblocks]->data,
                             VAR_0->workblock.data + 16, VAR_0->workblock.size);
                break;
     case 2324:
                FUNC_2(VAR_4->block[VAR_4->numblocks]->data,
                       VAR_0->workblock.data + 24, VAR_0->workblock.size);
                break;
     case 2336:
                FUNC_2(VAR_4->block[VAR_4->numblocks]->data,
                VAR_0->workblock.data + 16, VAR_0->workblock.size);
                break;
     case 2340:
                FUNC_2(VAR_4->block[VAR_4->numblocks]->data,
                VAR_0->workblock.data + 12, VAR_0->workblock.size);
                break;
     case 2352:
                FUNC_2(VAR_4->block[VAR_4->numblocks]->data,
                       VAR_0->workblock.data, VAR_0->workblock.size);
                break;
     default: break;
  }


  if (VAR_4->size == -1) VAR_4->size = 0;
  VAR_4->size += VAR_4->block[VAR_4->numblocks]->size;
  VAR_4->numblocks++;

  return VAR_4;
}
