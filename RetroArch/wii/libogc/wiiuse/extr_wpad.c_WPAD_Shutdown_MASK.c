
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _wpad_cb {int sound_alarm; } ;
typedef size_t s32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct _wpad_cb*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct _wpad_cb* VAR_5 ;
 int FUNC_6 (int) ;

void FUNC_7()
{
 s32 VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 0;
 struct _wpad_cb *VAR_9 = ((void*)0);

 FUNC_2(VAR_7);

 VAR_4 = VAR_1;
 FUNC_1(VAR_2);
 for(VAR_6=0;VAR_6<VAR_0;VAR_6++) {
  VAR_9 = &VAR_5[VAR_6];



  FUNC_5(VAR_9);
 }

 FUNC_4(0);
 FUNC_3(VAR_7);

 while(VAR_3) {
  FUNC_6(50);
  if(++VAR_8 > 3000) break;
 }

 FUNC_0();
}
