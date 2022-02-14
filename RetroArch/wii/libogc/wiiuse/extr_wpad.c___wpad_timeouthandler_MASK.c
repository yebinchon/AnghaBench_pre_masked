
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int syswd_t ;
struct wiimote_t {int dummy; } ;
struct _wpad_cb {scalar_t__ idle_time; struct wiimote_t* wm; } ;
typedef size_t s32 ;


 scalar_t__ FUNC_0 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct _wpad_cb* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct wiimote_t*) ;

__attribute__((used)) static void FUNC_2(syswd_t VAR_6,void *VAR_7)
{
 s32 VAR_8;
 struct wiimote_t *VAR_9 = ((void*)0);
 struct _wpad_cb *VAR_10 = ((void*)0);

 if(!VAR_3) return;

   ++VAR_5;
 for(VAR_8=0;VAR_8<VAR_1;VAR_8++) {
  VAR_10 = &VAR_4[VAR_8];
  VAR_9 = VAR_10->wm;
  if(VAR_9 && FUNC_0(VAR_9,VAR_0)) {
   VAR_10->idle_time++;
   if(VAR_10->idle_time>=VAR_2) {
    VAR_10->idle_time = 0;
    FUNC_1(VAR_9);
   }
  }
 }
   --VAR_5;
}
