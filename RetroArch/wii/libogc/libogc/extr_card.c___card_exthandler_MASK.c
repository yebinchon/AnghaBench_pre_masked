
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,int ) ;
struct TYPE_3__ {int (* card_ext_cb ) (size_t,int ) ;int (* card_exi_cb ) (size_t,int ) ;int timeout_svc; scalar_t__ attached; scalar_t__ card_tx_cb; } ;
typedef TYPE_1__ card_block ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static s32 FUNC_3(s32 VAR_4,s32 VAR_5)
{
 cardcallback VAR_6;
 card_block *VAR_7 = ((void*)0);
 if(VAR_4<VAR_1 || VAR_4>=VAR_2) return 0;
 VAR_7 = &VAR_3[VAR_4];

 if(VAR_7->attached) {
  if(VAR_7->card_tx_cb) {
   FUNC_2("error: card->card_tx_cb!=NULL\n");
  }
  VAR_7->attached = 0;
  FUNC_0(VAR_4,((void*)0));
  FUNC_1(VAR_7->timeout_svc);

  VAR_6 = VAR_7->card_exi_cb;
  if(VAR_6) {
   VAR_7->card_exi_cb = ((void*)0);
   VAR_6(VAR_4,VAR_0);
  }

  VAR_6 = VAR_7->card_ext_cb;
  if(VAR_6) {
   VAR_7->card_ext_cb = ((void*)0);
   VAR_6(VAR_4,VAR_0);
  }

 }
 return 1;
}
