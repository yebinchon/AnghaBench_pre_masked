
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct card_dircntrl {int chksum2; int chksum1; int updated; } ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_4__ {int sector_size; scalar_t__ workarea; int card_erase_cb; int attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int,int *,int *) ;
 int VAR_4 ;
 void* FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (size_t,int,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_6,cardcallback VAR_7)
{
 card_block *VAR_8 = ((void*)0);
 void *VAR_9 = ((void*)0);
 struct card_dircntrl *VAR_10 = ((void*)0);
 if(VAR_6<VAR_2 || VAR_6>=VAR_3) return VAR_0;
 VAR_8 = &VAR_5[VAR_6];

 if(!VAR_8->attached) return VAR_1;

 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = VAR_9+8128;
 ++VAR_10->updated;
 FUNC_1((u16*)VAR_9,0x1ffc,&VAR_10->chksum1,&VAR_10->chksum2);
 FUNC_0(VAR_9,0x2000);
 VAR_8->card_erase_cb = VAR_7;

 return FUNC_3(VAR_6,(((u32)VAR_9-(u32)VAR_8->workarea)>>13)*VAR_8->sector_size,VAR_4);
}
