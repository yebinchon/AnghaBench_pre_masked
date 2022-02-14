
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ubyte ;
struct wiimote_t {int cmdq; int event; struct cmd_blk_t* cmd_head; } ;
struct cmd_blk_t {scalar_t__ state; scalar_t__* data; int node; int (* cb ) (struct wiimote_t*,int *,int ) ;struct cmd_blk_t* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct wiimote_t*,int *,int ) ;
 int FUNC_2 (struct wiimote_t*,scalar_t__*) ;
 int FUNC_3 (struct wiimote_t*) ;

__attribute__((used)) static void FUNC_4(struct wiimote_t *VAR_5,ubyte *VAR_6)
{
 struct cmd_blk_t *VAR_7 = VAR_5->cmd_head;

 FUNC_2(VAR_5,VAR_6);

 if(!VAR_7 || VAR_7->state!=VAR_1 || VAR_7->data[0]==VAR_4 || VAR_7->data[0]==VAR_3 || VAR_7->data[0]!=VAR_6[2] || VAR_6[3]) {

  return;
 }



 VAR_5->cmd_head = VAR_7->next;

 VAR_5->event = VAR_2;
 VAR_7->state = VAR_0;
 if(VAR_7->cb) VAR_7->cb(VAR_5,((void*)0),0);

 FUNC_0(&VAR_5->cmdq,&VAR_7->node);
 FUNC_3(VAR_5);
}
