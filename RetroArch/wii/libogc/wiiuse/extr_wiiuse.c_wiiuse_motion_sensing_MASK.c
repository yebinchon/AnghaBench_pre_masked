
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_t {int dummy; } ;


 int FUNC_0 (struct wiimote_t*,int ) ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 scalar_t__ FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct wiimote_t*,int *) ;

void FUNC_4(struct wiimote_t* VAR_2, int VAR_3)
{
 if (VAR_3) {
  if(FUNC_2(VAR_2,VAR_0)) return;
  FUNC_1(VAR_2, VAR_0);
 } else {
  if(!FUNC_2(VAR_2,VAR_0)) return;
  FUNC_0(VAR_2, VAR_0);
 }

 if(!FUNC_2(VAR_2,VAR_1)) return;

 FUNC_3(VAR_2,((void*)0));
}
