
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int ubyte ;
struct wiimote_t {int cmdq; } ;
struct TYPE_2__ {int size; int data; int addr; } ;
struct op_t {TYPE_1__ writedata; scalar_t__ wait; int * buffer; int cmd; } ;
struct cmd_blk_t {int len; scalar_t__ data; int cb; } ;
typedef int cmd_blk_cb ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wiimote_t*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct wiimote_t*,struct cmd_blk_t*) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (int,int ,int) ;

int FUNC_6(struct wiimote_t *VAR_1,uint VAR_2,ubyte *VAR_3,ubyte VAR_4,cmd_blk_cb VAR_5)
{
 struct op_t *VAR_6;
 struct cmd_blk_t *VAR_7;

 if(!VAR_1 || !FUNC_1(VAR_1)) return 0;
 if(!VAR_3 || !VAR_4) return 0;

 VAR_7 = (struct cmd_blk_t*)FUNC_2(&VAR_1->cmdq);
 if(!VAR_7) return 0;

 VAR_7->cb = VAR_5;
 VAR_7->len = 22;

 VAR_6 = (struct op_t*)VAR_7->data;
 VAR_6->cmd = VAR_0;
 VAR_6->buffer = ((void*)0);
 VAR_6->wait = 0;
 VAR_6->writedata.addr = FUNC_0(VAR_2);
 VAR_6->writedata.size = (VAR_4&0x0f);
 FUNC_4(VAR_6->writedata.data,VAR_3,VAR_4);
 FUNC_5(VAR_6->writedata.data+VAR_4,0,(16 - VAR_4));
 FUNC_3(VAR_1,VAR_7);

 return 1;
}
