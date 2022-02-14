
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_t {int dummy; } ;
struct _wpad_cb {struct wiimote_t* wm; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct wiimote_t*) ;

__attribute__((used)) static s32 FUNC_2(struct _wpad_cb *VAR_1)
{
 struct wiimote_t *VAR_2;

 if(VAR_1==((void*)0)) return 0;

 VAR_2 = VAR_1->wm;
 if(VAR_2 && FUNC_0(VAR_2,VAR_0)) {
  FUNC_1(VAR_2);
 }

 return 0;
}
