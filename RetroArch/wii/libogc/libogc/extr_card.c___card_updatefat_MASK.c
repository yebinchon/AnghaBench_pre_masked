
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct card_bat {int chksum2; int chksum1; int updated; } ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_3__ {int sector_size; scalar_t__ workarea; int card_erase_cb; int attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct card_bat*,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int,int *,int *) ;
 int VAR_4 ;
 size_t FUNC_2 (size_t,int,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_3(s32 VAR_6,struct card_bat *VAR_7,cardcallback VAR_8)
{
 card_block *VAR_9 = ((void*)0);
 if(VAR_6<VAR_2 || VAR_6>=VAR_3) return VAR_0;
 VAR_9 = &VAR_5[VAR_6];

 if(!VAR_9->attached) return VAR_1;

 ++VAR_7->updated;
 FUNC_1((u16*)(((u32)VAR_7)+4),0x1ffc,&VAR_7->chksum1,&VAR_7->chksum2);
 FUNC_0(VAR_7,8192);
 VAR_9->card_erase_cb = VAR_8;

 return FUNC_2(VAR_6,(((u32)VAR_7-(u32)VAR_9->workarea)>>13)*VAR_9->sector_size,VAR_4);
}
