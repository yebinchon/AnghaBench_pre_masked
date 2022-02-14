
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct card_direntry {int* gamecode; int* filename; int* company; scalar_t__ length; } ;
struct card_dat {struct card_direntry* entries; } ;
struct card_bat {scalar_t__ freeblocks; } ;
typedef int s32 ;
typedef int * cardcallback ;
struct TYPE_8__ {int chn; int filenum; } ;
typedef TYPE_1__ card_file ;
struct TYPE_9__ {scalar_t__ sector_size; TYPE_1__* curr_file; int * card_api_cb; } ;
typedef TYPE_2__ card_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,scalar_t__,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 struct card_bat* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,TYPE_2__**) ;
 struct card_dat* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int* VAR_9 ;
 int* VAR_10 ;
 scalar_t__ FUNC_5 (int*,...) ;
 int FUNC_6 (int*,char const*,scalar_t__) ;
 int FUNC_7 (int*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (char const*) ;

s32 FUNC_9(s32 VAR_11,const char *VAR_12,u32 VAR_13,card_file *VAR_14,cardcallback VAR_15)
{
 u32 VAR_16,VAR_17;
 s32 VAR_18,VAR_19;
 cardcallback VAR_20 = ((void*)0);
 card_block *VAR_21 = ((void*)0);
 struct card_bat *VAR_22 = ((void*)0);
 struct card_dat *VAR_23 = ((void*)0);
 struct card_direntry *VAR_24 = ((void*)0);
 VAR_17 = FUNC_8(VAR_12);
 if(VAR_17>VAR_5) return VAR_3;

 if((VAR_18=FUNC_2(VAR_11,&VAR_21))<0) return VAR_18;
 if(VAR_13<=0 || VAR_13%VAR_21->sector_size) return VAR_1;

 VAR_23 = FUNC_3(VAR_21);

 VAR_19 = -1;
 VAR_24 = VAR_23->entries;
 for(VAR_16=0;VAR_16<VAR_6;VAR_16++) {
  if(VAR_24[VAR_16].gamecode[0]==0xff) {
   if(VAR_19==-1) VAR_19 = VAR_16;
  } else if(FUNC_5(VAR_24[VAR_16].filename,VAR_12,VAR_17)==0) {
   if((VAR_10[0]==0xff || VAR_9[0]==0xff)
    || ((VAR_10[0]!=0xff && FUNC_5(VAR_24[VAR_16].gamecode,VAR_10,4)==0)
    && (VAR_9[0]!=0xff && FUNC_5(VAR_24[VAR_16].company,VAR_9,2)==0))) {
    FUNC_4(VAR_21,VAR_0);
    return VAR_0;
   }
  }
 }
 if(VAR_19==-1) {
  FUNC_4(VAR_21,VAR_4);
  return VAR_4;
 }

 VAR_22 = FUNC_1(VAR_21);
 if((VAR_22->freeblocks*VAR_21->sector_size)<VAR_13) {
  FUNC_4(VAR_21,VAR_2);
  return VAR_2;
 }

 VAR_20 = VAR_15;
 if(!VAR_20) VAR_20 = VAR_8;
 VAR_21->card_api_cb = VAR_20;

 VAR_24[VAR_19].length = VAR_13/VAR_21->sector_size;
 FUNC_7(VAR_24[VAR_19].filename,0,VAR_5);
 FUNC_6(VAR_24[VAR_19].filename,VAR_12,VAR_17+1);

 VAR_21->curr_file = VAR_14;
 VAR_14->chn = VAR_11;
 VAR_14->filenum = VAR_19;
 if((VAR_18=FUNC_0(VAR_11,(VAR_13/VAR_21->sector_size),VAR_7))<0) {
  FUNC_4(VAR_21,VAR_18);
  return VAR_18;
 }

 return 0;
}
