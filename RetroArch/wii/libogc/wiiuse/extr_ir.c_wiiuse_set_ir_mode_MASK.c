
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int dummy; } ;


 scalar_t__ FUNC_0 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct wiimote_t*,int ,int*,int,int *) ;

void FUNC_2(struct wiimote_t *VAR_5)
{
 ubyte VAR_6 = 0x00;

 if(!VAR_5) return;
 if(!FUNC_0(VAR_5,VAR_1)) return;

 if(FUNC_0(VAR_5,VAR_0)) VAR_6 = VAR_2;
 else VAR_6 = VAR_3;
 FUNC_1(VAR_5,VAR_4, &VAR_6, 1, ((void*)0));
}
