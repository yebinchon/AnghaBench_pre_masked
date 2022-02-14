
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_4__ {int format_step; int sector_size; int (* card_api_cb ) (size_t,size_t) ;scalar_t__ workarea; scalar_t__ curr_fat; scalar_t__ curr_dir; } ;
typedef TYPE_1__ card_block ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 size_t FUNC_1 (size_t,int,void (*) (size_t,size_t)) ;
 size_t FUNC_2 (size_t,int,int,scalar_t__,void (*) (size_t,size_t)) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(s32 VAR_6,s32 VAR_7)
{
 s32 VAR_8;
 cardcallback VAR_9 = ((void*)0);
 card_block *VAR_10 = &VAR_5[VAR_6];

 VAR_8 = VAR_7;
 if(VAR_8>=0) {
  if((++VAR_10->format_step)<VAR_0) {
   if((VAR_8=FUNC_1(VAR_6,(VAR_10->format_step*VAR_10->sector_size),FUNC_4))>=0) return;
   goto exit;
  }
  if(VAR_10->format_step<10) {
   if((VAR_8=FUNC_2(VAR_6,((VAR_10->format_step-VAR_0)*VAR_10->sector_size),8192,VAR_10->workarea+((VAR_10->format_step-VAR_0)<<13),FUNC_4))>=0) return;
   goto exit;
  }

  VAR_10->curr_dir = VAR_10->workarea+VAR_3;
  FUNC_3(VAR_10->curr_dir,VAR_10->workarea+VAR_4,8192);

  VAR_10->curr_fat = VAR_10->workarea+VAR_1;
  FUNC_3(VAR_10->curr_fat,VAR_10->workarea+VAR_2,8192);
 }
exit:
 VAR_9 = VAR_10->card_api_cb;
 VAR_10->card_api_cb = ((void*)0);
 FUNC_0(VAR_10,VAR_8);
 if(VAR_9) VAR_9(VAR_6,VAR_8);
}
