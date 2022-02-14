
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct card_direntry {int* gamecode; int* filename; int* company; int length; } ;
struct card_dat {struct card_direntry* entries; } ;
struct card_bat {int freeblocks; } ;
typedef int s32 ;
typedef int * cardcallback ;
struct TYPE_10__ {int chn; int filenum; } ;
typedef TYPE_1__ card_file ;
struct TYPE_11__ {int* filename; int filelen; } ;
typedef TYPE_2__ card_dir ;
struct TYPE_12__ {int sector_size; TYPE_1__* curr_file; int * card_api_cb; } ;
typedef TYPE_3__ card_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 struct card_bat* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,TYPE_3__**) ;
 struct card_dat* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int*,scalar_t__) ;
 int FUNC_7 (int*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (char const*) ;

s32 FUNC_9(s32 VAR_9,card_dir *VAR_10,card_file *VAR_11,cardcallback VAR_12)
{
 u32 VAR_13,VAR_14;
 s32 VAR_15,VAR_16;
 cardcallback VAR_17 = ((void*)0);
 card_block *VAR_18 = ((void*)0);
 struct card_bat *VAR_19 = ((void*)0);
 struct card_dat *VAR_20 = ((void*)0);
 struct card_direntry *VAR_21 = ((void*)0);
 VAR_14 = FUNC_8((const char*)VAR_10->filename);
 if(VAR_14>VAR_5) return VAR_3;

 if((VAR_15=FUNC_2(VAR_9,&VAR_18))<0) return VAR_15;
 if(VAR_10->filelen<=0 || VAR_10->filelen%VAR_18->sector_size) return VAR_1;

 VAR_20 = FUNC_3(VAR_18);

 VAR_16 = -1;
 VAR_21 = VAR_20->entries;
 for(VAR_13=0;VAR_13<VAR_6;VAR_13++) {
  if(VAR_21[VAR_13].gamecode[0]==0xff) {
   if(VAR_16==-1) VAR_16 = VAR_13;
  } else if(FUNC_5(VAR_21[VAR_13].filename,VAR_10->filename,VAR_14)==0) {
   if((VAR_21->gamecode[0]==0xff || VAR_21->company[0]==0xff)
    || ((VAR_21->gamecode[0]!=0xff && FUNC_5(VAR_21[VAR_13].gamecode,VAR_21->gamecode,4)==0)
    && (VAR_21->company[0]!=0xff && FUNC_5(VAR_21[VAR_13].company,VAR_21->company,2)==0))) {
    FUNC_4(VAR_18,VAR_0);
    return VAR_0;
   }
  }
 }
 if(VAR_16==-1) {
  FUNC_4(VAR_18,VAR_4);
  return VAR_4;
 }

 VAR_19 = FUNC_1(VAR_18);
 if((VAR_19->freeblocks*VAR_18->sector_size)<VAR_10->filelen) {
  FUNC_4(VAR_18,VAR_2);
  return VAR_2;
 }

 VAR_17 = VAR_12;
 if(!VAR_17) VAR_17 = VAR_8;
 VAR_18->card_api_cb = VAR_17;

 VAR_21[VAR_16].length = VAR_10->filelen/VAR_18->sector_size;
 FUNC_7(VAR_21[VAR_16].filename,0,VAR_5);
 FUNC_6(VAR_21[VAR_16].filename,VAR_10->filename,VAR_14+1);

 VAR_18->curr_file = VAR_11;
 VAR_11->chn = VAR_9;
 VAR_11->filenum = VAR_16;
 if((VAR_15=FUNC_0(VAR_9,(VAR_10->filelen/VAR_18->sector_size),VAR_7))<0) {
  FUNC_4(VAR_18,VAR_15);
  return VAR_15;
 }

 return 0;
}
