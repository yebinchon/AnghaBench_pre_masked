
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int CR1; int CR2; int CR4; int HIRQ; int CR3; } ;
struct TYPE_4__ {int* data; } ;
struct TYPE_6__ {int status; int FAD; int* TOC; int infotranstype; int* transscoderw; TYPE_2__ reg; int transfercount; TYPE_1__ workblock; void** transscodeq; int index; int track; void* ctrladdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int,int *,int *,int *) ;
 void* FUNC_1 (int ) ;

void FUNC_2(void) {
   u32 VAR_3;
   u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;




  switch(VAR_2->reg.CR1 & 0xFF) {
     case 0:

             VAR_2->reg.CR1 = (VAR_2->status << 8) | 0;
             VAR_2->reg.CR2 = 5;
             VAR_2->reg.CR3 = 0;
             VAR_2->reg.CR4 = 0;

             VAR_3 = VAR_2->FAD-(VAR_2->TOC[VAR_2->track-1] & 0xFFFFFF);
             FUNC_0(VAR_3, &VAR_4, &VAR_5, &VAR_6);
             FUNC_0(VAR_2->FAD, &VAR_7, &VAR_8, &VAR_9);

             VAR_2->transscodeq[0] = VAR_2->ctrladdr;
             VAR_2->transscodeq[1] = FUNC_1(VAR_2->track);
             VAR_2->transscodeq[2] = FUNC_1(VAR_2->index);
             VAR_2->transscodeq[3] = FUNC_1(VAR_4);
             VAR_2->transscodeq[4] = FUNC_1(VAR_5);
             VAR_2->transscodeq[5] = FUNC_1(VAR_6);
             VAR_2->transscodeq[6] = 0;
             VAR_2->transscodeq[7] = FUNC_1(VAR_7);
             VAR_2->transscodeq[8] = FUNC_1(VAR_8);
             VAR_2->transscodeq[9] = FUNC_1(VAR_9);

             VAR_2->transfercount = 0;
             VAR_2->infotranstype = 3;
             break;
     case 1:
     {

             static int VAR_10=0;
             static u16 VAR_11=0;
             int VAR_12;

             VAR_2->reg.CR1 = (VAR_2->status << 8) | 0;
             VAR_2->reg.CR2 = 12;
             VAR_2->reg.CR3 = 0;
             if (VAR_2->FAD != VAR_10)
             {
                VAR_10 = VAR_2->FAD;
                VAR_11 = 0;
             }
             else
                VAR_11++;
             VAR_2->reg.CR4 = VAR_11;

             for (VAR_12 = 0; VAR_12 < 24; VAR_12++)
                VAR_2->transscoderw[VAR_12] = VAR_2->workblock.data[2352+VAR_12+(24*VAR_11)] & 0x3F;

             VAR_2->transfercount = 0;
             VAR_2->infotranstype = 4;
             break;
     }
     default: break;
  }

  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
