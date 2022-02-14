
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int** flash_id; int* flashID_chksum; } ;
typedef TYPE_1__ syssramex ;
typedef size_t s32 ;
struct TYPE_6__ {int mount_step; int cid; int card_size; int sector_size; int blocks; scalar_t__ workarea; scalar_t__ key; int latency; } ;
typedef TYPE_2__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (size_t,int ,int*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int,int) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int) ;
 size_t FUNC_8 (size_t) ;
 int FUNC_9 (size_t,size_t) ;
 size_t FUNC_10 (size_t,int) ;
 int VAR_8 ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 size_t FUNC_12 (size_t,int,int,scalar_t__,int ) ;
 size_t FUNC_13 (size_t,int*) ;
 size_t FUNC_14 (size_t,scalar_t__) ;
 int * VAR_10 ;
 int* VAR_11 ;
 TYPE_2__* VAR_12 ;

__attribute__((used)) static s32 FUNC_15(s32 VAR_13)
{
 u8 VAR_14,VAR_15;
 s32 VAR_16 = VAR_2;
 u32 VAR_17;
 u32 VAR_18,VAR_19,VAR_20;
 card_block *VAR_21;
 syssramex *VAR_22;

 if(VAR_13<VAR_5 || VAR_13>=VAR_6) return VAR_1;
 VAR_21 = &VAR_12[VAR_13];
 if(VAR_21->mount_step==0) {
  VAR_16 = 0;
  VAR_18 = 0;
  if(FUNC_1(VAR_13,VAR_7,&VAR_18)==0) VAR_16 = VAR_1;
  else if(!FUNC_11(VAR_18)) VAR_16 = VAR_3;

  if(VAR_16<0) goto exit;
  VAR_21->cid = VAR_18;
  VAR_21->card_size = (VAR_18&0xfc);
  if(VAR_21->card_size) {
   VAR_19 = FUNC_5(VAR_18,23)&0x1c;
   VAR_21->sector_size = VAR_11[VAR_19>>2];
   VAR_21->blocks = ((VAR_21->card_size<<20)>>3)/VAR_21->sector_size;

   if(VAR_21->blocks>0x0008) {
    VAR_19 = FUNC_5(VAR_18,26)&0x1c;
    VAR_21->latency = VAR_10[VAR_19>>2];

    if((VAR_16=FUNC_8(VAR_13))<0) goto exit;
    if((VAR_16=FUNC_13(VAR_13,&VAR_14))<0) goto exit;

    if(FUNC_2(VAR_13)==0) {
     VAR_16 = VAR_1;
     goto exit;
    }
    if(!(VAR_14&VAR_4)) {
     if((VAR_16=FUNC_14(VAR_13,VAR_21->key))<0) goto exit;

     VAR_20 = 0;
     VAR_17 = 0;
     VAR_22 = FUNC_6();
     while(VAR_20<12) {
      VAR_15 = ((u8*)VAR_21->key)[VAR_20];
      VAR_22->flash_id[VAR_13][VAR_20] = VAR_15;
      VAR_17 += VAR_15;
      VAR_20++;
     }
     VAR_17 = (VAR_17^-1)&0xff;
     VAR_22->flashID_chksum[VAR_13] = (VAR_17<<8)|VAR_17;
     FUNC_7(1);
     return VAR_16;
    }
    VAR_21->mount_step = 1;

    VAR_20 = 0;
    VAR_17 = 0;
    VAR_22 = FUNC_6();
    while(VAR_20<12) {
     VAR_17 += VAR_22->flash_id[VAR_13][VAR_20];
     VAR_20++;
    }
    VAR_20 = VAR_22->flashID_chksum[VAR_13];
    FUNC_7(0);

    VAR_17 = (VAR_17^-1)&0xff;
    VAR_17 |= (VAR_17<<8);
    if(VAR_20!=VAR_17) {
     VAR_16 = VAR_0;
     goto exit;
    }
   }
  }
 }
 if(VAR_21->mount_step==1) {
  VAR_21->mount_step = 2;
  if((VAR_16=FUNC_10(VAR_13,1))<0) goto exit;
  FUNC_3(VAR_13,VAR_8);
  FUNC_4(VAR_13);

  FUNC_0(VAR_21->workarea,0xA000);
 }

 if((VAR_16=FUNC_12(VAR_13,(VAR_21->sector_size*(VAR_21->mount_step-2)),VAR_21->sector_size,VAR_21->workarea+((VAR_21->mount_step-2)<<13),VAR_9))<0) goto exit;
 return VAR_16;

exit:
 FUNC_4(VAR_13);
 FUNC_9(VAR_13,VAR_16);

 return VAR_16;
}
