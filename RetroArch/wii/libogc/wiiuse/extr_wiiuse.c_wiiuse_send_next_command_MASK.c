
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_t {struct cmd_blk_t* cmd_head; } ;
struct cmd_blk_t {scalar_t__ state; int* data; int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wiimote_t*) ;
 scalar_t__ FUNC_1 (struct wiimote_t*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct wiimote_t*,int*,int ) ;

void FUNC_3(struct wiimote_t *VAR_3)
{
 struct cmd_blk_t *VAR_4 = VAR_3->cmd_head;

 if(!VAR_3 || !FUNC_0(VAR_3)) return;

 if(!VAR_4) return;
 if(VAR_4->state!=VAR_0) return;

 VAR_4->state = VAR_1;





 FUNC_2(VAR_3,VAR_4->data,VAR_4->len);
}
