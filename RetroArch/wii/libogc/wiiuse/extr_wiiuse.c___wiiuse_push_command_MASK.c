
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct wiimote_t {struct cmd_blk_t* cmd_tail; struct cmd_blk_t* cmd_head; } ;
struct cmd_blk_t {struct cmd_blk_t* next; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wiimote_t*) ;

__attribute__((used)) static inline void FUNC_3(struct wiimote_t *VAR_1,struct cmd_blk_t *VAR_2)
{
 uint VAR_3;

 if(!VAR_1 || !VAR_2) return;

 VAR_2->next = ((void*)0);
 VAR_2->state = VAR_0;

 FUNC_0(VAR_3);
 if(VAR_1->cmd_head==((void*)0)) {
  VAR_1->cmd_head = VAR_1->cmd_tail = VAR_2;
  FUNC_2(VAR_1);
 } else {
  VAR_1->cmd_tail->next = VAR_2;
  VAR_1->cmd_tail = VAR_2;
 }
 FUNC_1(VAR_3);
}
