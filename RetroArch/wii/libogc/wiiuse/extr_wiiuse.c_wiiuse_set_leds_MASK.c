
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int leds; } ;
typedef int cmd_blk_cb ;


 int FUNC_0 (struct wiimote_t*) ;
 int VAR_0 ;
 int FUNC_1 (struct wiimote_t*,int ,int*,int,int ) ;

void FUNC_2(struct wiimote_t *VAR_1,int VAR_2,cmd_blk_cb VAR_3)
{
 ubyte VAR_4;

 if(!VAR_1 || !FUNC_0(VAR_1)) return;

 VAR_1->leds = (VAR_2&0xf0);

 VAR_4 = VAR_1->leds;
 FUNC_1(VAR_1,VAR_0,&VAR_4,1,VAR_3);
}
