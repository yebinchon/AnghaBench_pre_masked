
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_9__ {int bchannel; } ;
struct l3_process {TYPE_4__* st; int callref; struct l3_process* next; TYPE_2__ para; int timer; } ;
struct TYPE_10__ {int (* l4l3 ) (TYPE_4__*,int,struct l3_process*) ;} ;
struct TYPE_8__ {struct l3_process* proc; scalar_t__ debug; } ;
struct TYPE_11__ {TYPE_3__ lli; TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_5 ;
 int* FUNC_2 (int*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 int FUNC_5 (TYPE_4__*,int,struct sk_buff*) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (struct l3_process*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (TYPE_4__*,int,struct l3_process*) ;
 int FUNC_10 (TYPE_4__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_6, u_char VAR_7, void *VAR_8)
{
 u_char VAR_9[32];
 u_char *VAR_10;
 u_char VAR_11, VAR_12 = 0, VAR_13 = 0;
 int VAR_14;
 struct sk_buff *VAR_15 = VAR_8;
 struct l3_process *VAR_16;

 FUNC_7(VAR_6, 2);
 FUNC_0(&VAR_6->timer);
 VAR_10 = VAR_15->data;
 if ((VAR_10 = FUNC_2(VAR_10, VAR_15->len, VAR_3, 0))) {
  VAR_11 = VAR_10[2];
  FUNC_4(VAR_6->st, "Restart %x", VAR_11);
 } else {
  FUNC_4(VAR_6->st, "Restart without restart IE");
  VAR_11 = 0x86;
 }
 VAR_10 = VAR_15->data;
 if ((VAR_10 = FUNC_2(VAR_10, VAR_15->len, VAR_2, 0))) {
  VAR_13 = VAR_10[2] & 3;
  VAR_12 = VAR_10[2];
  if (VAR_6->st->l3.debug)
   FUNC_4(VAR_6->st, "Restart for channel %d", VAR_13);
 }
 FUNC_7(VAR_6, 2);
 VAR_16 = VAR_6->st->l3.proc;
 while (VAR_16) {
  if ((VAR_11 & 7) == 7)
   VAR_16->st->lli.l4l3(VAR_16->st, VAR_0 | VAR_5, VAR_16);
  else if (VAR_16->para.bchannel == VAR_13)
   VAR_16->st->lli.l4l3(VAR_16->st, VAR_0 | VAR_5, VAR_16);
  VAR_16 = VAR_16->next;
 }
 VAR_10 = VAR_9;
 FUNC_1(VAR_10, VAR_6->callref, VAR_4);
 if (VAR_13) {
  *VAR_10++ = VAR_2;
  *VAR_10++ = 1;
  *VAR_10++ = VAR_12 | 0x80;
 }
 *VAR_10++ = 0x79;
 *VAR_10++ = 1;
 *VAR_10++ = VAR_11;
 VAR_14 = VAR_10 - VAR_9;
 if (!(VAR_15 = FUNC_3(VAR_14)))
  return;
 FUNC_6(FUNC_8(VAR_15, VAR_14), VAR_9, VAR_14);
 FUNC_7(VAR_6, 0);
 FUNC_5(VAR_6->st, VAR_1 | VAR_5, VAR_15);
}
