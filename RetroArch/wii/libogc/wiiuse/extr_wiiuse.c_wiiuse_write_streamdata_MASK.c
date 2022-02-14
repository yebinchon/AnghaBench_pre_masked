
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int cmdq; } ;
struct cmd_blk_t {int len; int* data; int cb; } ;
typedef int cmd_blk_cb ;


 int FUNC_0 (struct wiimote_t*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct wiimote_t*,struct cmd_blk_t*) ;
 int FUNC_3 (int*,int*,int) ;

int FUNC_4(struct wiimote_t *VAR_1,ubyte *VAR_2,ubyte VAR_3,cmd_blk_cb VAR_4)
{
 struct cmd_blk_t *VAR_5;

 if(!VAR_1 || !FUNC_0(VAR_1)) return 0;
 if(!VAR_2 || !VAR_3 || VAR_3>20) return 0;

 VAR_5 = (struct cmd_blk_t*)FUNC_1(&VAR_1->cmdq);
 if(!VAR_5) return 0;

 VAR_5->cb = VAR_4;
 VAR_5->len = 22;
 VAR_5->data[0] = VAR_0;
 VAR_5->data[1] = (VAR_3<<3);
 FUNC_3(VAR_5->data+2,VAR_2,VAR_3);
 FUNC_2(VAR_1,VAR_5);

 return 1;
}
