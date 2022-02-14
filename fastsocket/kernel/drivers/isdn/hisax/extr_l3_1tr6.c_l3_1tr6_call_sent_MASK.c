
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_4__ {int bchannel; } ;
struct l3_process {int state; TYPE_3__* st; int timer; TYPE_1__ para; } ;
struct TYPE_5__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_6__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int* FUNC_3 (int*,int ,int ,int ) ;
 int FUNC_4 (struct l3_process*,char*,struct sk_buff*) ;
 int FUNC_5 (struct l3_process*,int) ;
 int FUNC_6 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_7(struct l3_process *VAR_5, u_char VAR_6, void *VAR_7)
{
 u_char *VAR_8;
 struct sk_buff *VAR_9 = VAR_7;

 FUNC_1(&VAR_5->timer);
 VAR_8 = VAR_9->data;
 if ((VAR_8 = FUNC_3(VAR_8, VAR_9->len, VAR_4, 0))) {
  if (VAR_8[1] != 1) {
   FUNC_4(VAR_5, "call sent wrong chanID len", VAR_9);
   return;
  }
  if ((VAR_8[2] & 0xf4) != 0x80) {
   FUNC_4(VAR_5, "call sent wrong WE0_chanID", VAR_9);
   return;
  }
  if ((VAR_5->state == 2) && (VAR_5->para.bchannel != (VAR_8[2] & 0x3))) {
   FUNC_4(VAR_5, "call sent wrong chanID value", VAR_9);
   return;
  }
  VAR_5->para.bchannel = VAR_8[2] & 0x3;
 } else {
  FUNC_4(VAR_5, "missing call sent WE0_chanID", VAR_9);
  return;
 }
 FUNC_2(VAR_9);
 FUNC_0(&VAR_5->timer, VAR_3, VAR_1);
 FUNC_5(VAR_5, 3);
 VAR_5->st->l3.l3l4(VAR_5->st, VAR_0 | VAR_2, VAR_5);
}
