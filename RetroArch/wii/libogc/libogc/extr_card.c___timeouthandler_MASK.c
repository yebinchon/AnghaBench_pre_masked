
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ syswd_t ;
typedef int s32 ;
typedef int (* cardcallback ) (size_t,int ) ;
struct TYPE_3__ {scalar_t__ timeout_svc; int (* card_exi_cb ) (size_t,int ) ;scalar_t__ attached; } ;
typedef TYPE_1__ card_block ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t,int *) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1(syswd_t VAR_5,void *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8 = VAR_1;
 cardcallback VAR_9;
 card_block *VAR_10 = ((void*)0);
 VAR_7 = 0;
 while(VAR_7<VAR_3) {
  VAR_10 = &VAR_4[VAR_7];
  if(VAR_10->timeout_svc==VAR_5) break;
  VAR_7++;
 }
 if(VAR_7<VAR_2 || VAR_7>=VAR_3) return;

 if(VAR_10->attached) {
  FUNC_0(VAR_7,((void*)0));
  VAR_9 = VAR_10->card_exi_cb;
  if(VAR_9) {
   VAR_10->card_exi_cb = ((void*)0);
   VAR_8 = VAR_0;
   VAR_9(VAR_7,VAR_8);
  }
 }
}
