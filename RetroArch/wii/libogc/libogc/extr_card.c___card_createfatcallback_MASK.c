
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct card_direntry {int pad_00; int iconaddr; int iconspeed; int pad_01; int lastmodified; scalar_t__ iconfmt; scalar_t__ copytimes; int permission; int block; int company; int gamecode; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_6__ {size_t filenum; int iblock; scalar_t__ offset; } ;
typedef TYPE_1__ card_file ;
struct TYPE_7__ {int curr_fileblock; TYPE_1__* curr_file; int (* card_api_cb ) (size_t,size_t) ;} ;
typedef TYPE_2__ card_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct card_dat* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 size_t FUNC_2 (size_t,int (*) (size_t,size_t)) ;
 int* VAR_3 ;
 int* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(s32 VAR_6,s32 VAR_7)
{
 s32 VAR_8;
 cardcallback VAR_9 = ((void*)0);
 card_file *VAR_10 = ((void*)0);
 struct card_direntry *VAR_11 = ((void*)0);
 struct card_dat *VAR_12 = ((void*)0);
 card_block *VAR_13 = &VAR_5[VAR_6];
 VAR_9 = VAR_13->card_api_cb;
 VAR_13->card_api_cb = ((void*)0);

 VAR_12 = FUNC_0(VAR_13);

 VAR_10 = VAR_13->curr_file;
 VAR_11 = &VAR_12->entries[VAR_10->filenum];

 FUNC_4(VAR_11->gamecode,0,4);
 FUNC_4(VAR_11->company,0,2);
 if(VAR_4[0]!=0xff) FUNC_3(VAR_11->gamecode,VAR_4,4);
 if(VAR_4[0]!=0xff) FUNC_3(VAR_11->company,VAR_3,2);
 VAR_11->block = VAR_13->curr_fileblock;
 VAR_11->permission = VAR_0;
 VAR_11->pad_00 = 0xff;
 VAR_11->copytimes = 0;
 VAR_11->iconaddr = -1;
 VAR_11->iconfmt = 0;
 VAR_11->iconspeed = 0;
 VAR_11->pad_01 = 0xffff;
 VAR_11->iconspeed = (VAR_11->iconspeed&~VAR_2)|VAR_1;
 VAR_11->lastmodified = FUNC_5(((void*)0));

 VAR_10->offset = 0;
 VAR_10->iblock = VAR_13->curr_fileblock;

 if((VAR_8=FUNC_2(VAR_6,VAR_9))<0) {
  FUNC_1(VAR_13,VAR_8);
  if(VAR_9) VAR_9(VAR_6,VAR_8);
 }
}
