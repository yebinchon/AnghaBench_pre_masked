
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef void* cardcallback ;
struct TYPE_4__ {int * card_unlock_cb; void* card_exi_cb; void* card_tx_cb; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (size_t,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*) ;
 int * VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_10,cardcallback VAR_11,cardcallback VAR_12)
{
 u32 VAR_13;
 card_block *VAR_14 = ((void*)0);
 if(VAR_10<VAR_3 || VAR_10>=VAR_4) return VAR_1;
 VAR_14 = &VAR_9[VAR_10];

 FUNC_3(VAR_13);
 if(VAR_11) VAR_14->card_tx_cb = VAR_11;
 if(VAR_12) VAR_14->card_exi_cb = VAR_12;

 VAR_14->card_unlock_cb = VAR_8;
 if(FUNC_0(VAR_10,VAR_5,VAR_7)==0) {
  FUNC_4(VAR_13);
  return VAR_0;
 }
 VAR_14->card_unlock_cb = ((void*)0);

 if(FUNC_1(VAR_10,VAR_5,VAR_6)==0) {
  FUNC_2(VAR_10);
  FUNC_4(VAR_13);
  return VAR_1;
 }

 FUNC_5(VAR_14);
 FUNC_4(VAR_13);

 return VAR_2;
}
