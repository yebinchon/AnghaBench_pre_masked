
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef void* cardcallback ;
struct TYPE_3__ {scalar_t__ result; int attached; int * card_unlock_cb; int * curr_fat; int * curr_dir; int timeout_svc; scalar_t__ mount_step; int * card_exi_cb; void* card_api_cb; void* card_ext_cb; void* workarea; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (size_t,int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t,int ,int ) ;
 int FUNC_3 (size_t,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* VAR_9 ;
 int FUNC_7 (size_t) ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;

s32 FUNC_8(s32 VAR_14,void *VAR_15,cardcallback VAR_16,cardcallback VAR_17)
{
 s32 VAR_18 = VAR_3;
 u32 VAR_19;
 cardcallback VAR_20 = ((void*)0);
 card_block *VAR_21 = ((void*)0);
 if(!VAR_15) return VAR_2;
 if(VAR_14<VAR_5 || VAR_14>=VAR_6) return VAR_1;
 VAR_21 = &VAR_13[VAR_14];

 FUNC_5(VAR_19);
 if(VAR_21->result==VAR_0) {
  FUNC_6(VAR_19);
  return VAR_0;
 }
 if(VAR_21->attached || !(FUNC_1(VAR_14)&VAR_8)) {
  VAR_21->result = VAR_0;
  VAR_21->workarea = VAR_15;
  VAR_21->card_ext_cb = VAR_16;

  VAR_20 = VAR_17;
  if(!VAR_20) VAR_20 = VAR_9;
  VAR_21->card_api_cb = VAR_20;
  VAR_21->card_exi_cb = ((void*)0);

  if(!VAR_21->attached) {
   if(FUNC_0(VAR_14,VAR_10)==0) {
    VAR_21->result = VAR_2;
    FUNC_6(VAR_19);
    return VAR_2;
   }
  }
  VAR_21->mount_step = 0;
  VAR_21->attached = 1;
  FUNC_3(VAR_14,((void*)0));
  FUNC_4(VAR_21->timeout_svc);
  VAR_21->curr_dir = ((void*)0);
  VAR_21->curr_fat = ((void*)0);
  FUNC_6(VAR_19);

  VAR_21->card_unlock_cb = VAR_11;
  if(FUNC_2(VAR_14,VAR_7,VAR_12)==0) return 0;

  VAR_21->card_unlock_cb = ((void*)0);
  FUNC_7(VAR_14);
  return 1;
 }

 VAR_18 = VAR_4;
 FUNC_6(VAR_19);
 return VAR_18;
}
