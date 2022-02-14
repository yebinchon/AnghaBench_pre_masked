
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ubyte ;
struct wiimote_t {int cmdq; } ;
struct cmd_blk_t {int len; int* data; int cb; } ;
typedef int cmd_blk_cb ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct wiimote_t*,struct cmd_blk_t*) ;
 int FUNC_2 (int*,scalar_t__*,int) ;

int FUNC_3(struct wiimote_t *VAR_2,ubyte VAR_3,ubyte *VAR_4,int VAR_5,cmd_blk_cb VAR_6)
{
 struct cmd_blk_t *VAR_7;

 VAR_7 = (struct cmd_blk_t*)FUNC_0(&VAR_2->cmdq);
 if(!VAR_7) return 0;

 VAR_7->cb = VAR_6;
 VAR_7->len = (1+VAR_5);

 VAR_7->data[0] = VAR_3;
 FUNC_2(VAR_7->data+1,VAR_4,VAR_5);
 if(VAR_3!=VAR_1 && VAR_3!=VAR_0)
  VAR_7->data[1] |= 0x02;


 FUNC_1(VAR_2,VAR_7);

 return 1;
}
