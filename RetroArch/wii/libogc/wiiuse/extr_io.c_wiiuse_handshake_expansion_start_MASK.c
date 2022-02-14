
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_t {scalar_t__ expansion_state; } ;


 int FUNC_0 (struct wiimote_t*,int ) ;
 scalar_t__ FUNC_1 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct wiimote_t*,int *,int ) ;

void FUNC_3(struct wiimote_t *VAR_3)
{
 if(FUNC_1(VAR_3,VAR_0) || FUNC_1(VAR_3,VAR_1) || FUNC_1(VAR_3,VAR_2))
  return;

 VAR_3->expansion_state = 0;
 FUNC_0(VAR_3, VAR_2);
 FUNC_2(VAR_3, ((void*)0), 0);
}
