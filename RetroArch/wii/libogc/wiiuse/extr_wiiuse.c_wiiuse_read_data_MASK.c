
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uword ;
typedef int uint ;
typedef int ubyte ;
struct wiimote_t {int cmdq; } ;
struct TYPE_2__ {int size; int addr; } ;
struct op_t {TYPE_1__ readdata; scalar_t__ wait; int * buffer; int cmd; } ;
struct cmd_blk_t {int len; scalar_t__ data; int cb; } ;
typedef int cmd_blk_cb ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wiimote_t*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct wiimote_t*,struct cmd_blk_t*) ;

int FUNC_5(struct wiimote_t *VAR_1,ubyte *VAR_2,uint VAR_3,uword VAR_4,cmd_blk_cb VAR_5)
{
 struct op_t *VAR_6;
 struct cmd_blk_t *VAR_7;

 if(!VAR_1 || !FUNC_2(VAR_1)) return 0;
 if(!VAR_2 || !VAR_4) return 0;

 VAR_7 = (struct cmd_blk_t*)FUNC_3(&VAR_1->cmdq);
 if(!VAR_7) return 0;

 VAR_7->cb = VAR_5;
 VAR_7->len = 7;

 VAR_6 = (struct op_t*)VAR_7->data;
 VAR_6->cmd = VAR_0;
 VAR_6->buffer = VAR_2;
 VAR_6->wait = VAR_4;
 VAR_6->readdata.addr = FUNC_0(VAR_3);
 VAR_6->readdata.size = FUNC_1(VAR_4);
 FUNC_4(VAR_1,VAR_7);

 return 1;
}
