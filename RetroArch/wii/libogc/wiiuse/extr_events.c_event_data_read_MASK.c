
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uword ;
typedef int ubyte ;
struct wiimote_t {int cmdq; int event; struct cmd_blk_t* cmd_head; } ;
struct TYPE_2__ {scalar_t__ size; int addr; } ;
struct op_t {scalar_t__ wait; TYPE_1__ readdata; scalar_t__ buffer; } ;
struct cmd_blk_t {scalar_t__ state; scalar_t__* data; int node; int (* cb ) (struct wiimote_t*,scalar_t__,scalar_t__) ;struct cmd_blk_t* next; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__,int*,int) ;
 int FUNC_3 (struct wiimote_t*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct wiimote_t*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct wiimote_t*,int*) ;
 int FUNC_6 (struct wiimote_t*) ;

__attribute__((used)) static void FUNC_7(struct wiimote_t *VAR_4,ubyte *VAR_5)
{
 ubyte VAR_6;
 ubyte VAR_7;
 uword VAR_8;
 struct op_t *VAR_9;
 struct cmd_blk_t *VAR_10 = VAR_4->cmd_head;

 FUNC_5(VAR_4,VAR_5);

 if(!VAR_10) return;
 if(!(VAR_10->state==VAR_1 && VAR_10->data[0]==VAR_3)) return;



 VAR_6 = VAR_5[2]&0x0f;
 VAR_9 = (struct op_t*)VAR_10->data;
 if(VAR_6) {
  VAR_4->cmd_head = VAR_10->next;

  VAR_10->state = VAR_0;
  if(VAR_10->cb!=((void*)0)) VAR_10->cb(VAR_4,VAR_9->buffer,(VAR_9->readdata.size - VAR_9->wait));

  FUNC_1(&VAR_4->cmdq,&VAR_10->node);
  FUNC_6(VAR_4);
  return;
 }

 VAR_7 = ((VAR_5[2]&0xf0)>>4)+1;
 VAR_8 = FUNC_0(*(uword*)(VAR_5+3));



 VAR_9->readdata.addr = (VAR_9->readdata.addr&0xffff);
 VAR_9->wait -= VAR_7;
 if(VAR_9->wait>=VAR_9->readdata.size) VAR_9->wait = 0;

 FUNC_2((VAR_9->buffer+VAR_8-VAR_9->readdata.addr),(VAR_5+5),VAR_7);
 if(!VAR_9->wait) {
  VAR_4->cmd_head = VAR_10->next;

  VAR_4->event = VAR_2;
  VAR_10->state = VAR_0;
  if(VAR_10->cb!=((void*)0)) VAR_10->cb(VAR_4,VAR_9->buffer,VAR_9->readdata.size);

  FUNC_1(&VAR_4->cmdq,&VAR_10->node);
  FUNC_6(VAR_4);
 }
}
