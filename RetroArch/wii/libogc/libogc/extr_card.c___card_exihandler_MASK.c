
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
typedef int (* cardcallback ) (int,int) ;
struct TYPE_3__ {scalar_t__ cmd_retries; int (* card_exi_cb ) (int,int) ;scalar_t__ attached; int timeout_svc; } ;
typedef TYPE_1__ card_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_7,s32 VAR_8)
{
 u8 VAR_9;
 s32 VAR_10 = VAR_2;
 card_block *VAR_11 = ((void*)0);
 cardcallback VAR_12;
 if(VAR_7<VAR_3 || VAR_7>=VAR_4) return 1;
 VAR_11 = &VAR_6[VAR_7];

 FUNC_2(VAR_11->timeout_svc);
 if(VAR_11->attached) {
  if(FUNC_0(VAR_7,VAR_5,((void*)0))==1) {
   if((VAR_10=FUNC_4(VAR_7,&VAR_9))>=0
    && (VAR_10=FUNC_3(VAR_7))>=0) {
    if(VAR_9&0x18) VAR_10 = VAR_1;
    else VAR_10 = VAR_2;

    if(VAR_10==VAR_1) {
     if((--VAR_11->cmd_retries)>0) {
      VAR_10 = FUNC_5(VAR_7);
      if(VAR_10<0) goto exit;
      return 1;
     }
    }
   }
   FUNC_1(VAR_7);
  } else VAR_10 = VAR_0;
exit:
  VAR_12 = VAR_11->card_exi_cb;
  if(VAR_12) {
   VAR_11->card_exi_cb = ((void*)0);
   VAR_12(VAR_7,VAR_10);
  }
 }
 return 1;
}
