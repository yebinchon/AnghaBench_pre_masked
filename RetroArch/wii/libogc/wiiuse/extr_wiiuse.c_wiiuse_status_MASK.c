
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int dummy; } ;
typedef int cmd_blk_cb ;


 int FUNC_0 (struct wiimote_t*) ;
 int VAR_0 ;
 int FUNC_1 (struct wiimote_t*,int ,int*,int,int ) ;

void FUNC_2(struct wiimote_t *VAR_1,cmd_blk_cb VAR_2)
{
 ubyte VAR_3;

 if(!VAR_1 || !FUNC_0(VAR_1)) return;

 VAR_3 = 0x00;
 FUNC_1(VAR_1,VAR_0,&VAR_3,1,VAR_2);
}
