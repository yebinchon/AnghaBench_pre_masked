
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
typedef scalar_t__ u16 ;
struct TYPE_9__ {size_t numblocks; scalar_t__ size; TYPE_7__** block; int * blocknum; } ;
typedef TYPE_2__ partition_struct ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_8__ {int CR1; int CR2; scalar_t__ CR4; int HIRQ; } ;
struct TYPE_11__ {int mpgauth; int getsectsize; int isonesectorstored; TYPE_1__ reg; int status; int isbufferfull; scalar_t__ outconmpegrom; scalar_t__ mpegpath; scalar_t__ outconmpegromnum; scalar_t__ filter; } ;
struct TYPE_10__ {int member_1; int member_0; } ;
typedef TYPE_3__ IOCheck_struct ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int *) ;
 TYPE_6__* VAR_3 ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_3__*,void*,int,int,int *) ;

void FUNC_7(void) {
  u16 VAR_5;
  FILE * VAR_6;
  partition_struct * VAR_7;


  VAR_3->mpgauth |= 0x300;

  VAR_3->outconmpegrom = VAR_3->filter + 0;
  VAR_3->outconmpegromnum = 0;

  if (VAR_3->mpegpath && (VAR_6 = FUNC_4(VAR_3->mpegpath, "rb")) != ((void*)0))
  {
     u32 VAR_8 = ((VAR_3->reg.CR1 & 0xFF) << 8) | VAR_3->reg.CR2;
     u16 VAR_9 = VAR_3->reg.CR4;

     FUNC_5(VAR_6, VAR_8 * VAR_3->getsectsize, VAR_4);
     if ((VAR_7 = FUNC_1(VAR_3->outconmpegrom)) != ((void*)0) && !VAR_3->isbufferfull)
     {
        IOCheck_struct VAR_10 = { 0, 0 };
        VAR_7->size = 0;

        for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++)
        {
           VAR_7->block[VAR_7->numblocks] = FUNC_0(&VAR_7->blocknum[VAR_7->numblocks]);

           if (VAR_7->block[VAR_7->numblocks] != ((void*)0)) {

              FUNC_6(&VAR_10, (void *)VAR_7->block[VAR_7->numblocks]->data, 1, VAR_3->getsectsize, VAR_6);

              VAR_7->numblocks++;
              VAR_7->size += VAR_3->getsectsize;
           }
        }

        VAR_3->isonesectorstored = 1;
        VAR_3->reg.HIRQ |= VAR_1;
     }

     FUNC_3(VAR_6);
  }

  FUNC_2(VAR_3->status);
  VAR_3->reg.HIRQ |= VAR_0 | VAR_2;
}
