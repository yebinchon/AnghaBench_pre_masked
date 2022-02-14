
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int moderate; int cause; int bchannel; } ;
struct l3_process {int debug; int state; TYPE_3__* st; int timer; TYPE_1__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct l3_process*,struct sk_buff*,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (struct l3_process*,struct sk_buff*) ;
 int FUNC_4 (struct l3_process*,int ,int *) ;
 int FUNC_5 (struct l3_process*,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_5, u_char VAR_6, void *VAR_7)
{
 struct sk_buff *VAR_8 = VAR_7;
 int VAR_9, VAR_10;

 if ((VAR_9 = FUNC_3(VAR_5, VAR_8)) > 0) {
  if ((0 == VAR_9) || ((3 == VAR_9) && (0x10 == VAR_5->para.moderate))) {
   if (VAR_5->debug & VAR_3)
    FUNC_2(VAR_5->st, "resume ack with wrong chid %x", VAR_9);
   VAR_5->para.cause = 100;
   FUNC_4(VAR_5, VAR_6, ((void*)0));
   return;
  }
  VAR_5->para.bchannel = VAR_9;
 } else if (1 == VAR_5->state) {
  if (VAR_5->debug & VAR_3)
   FUNC_2(VAR_5->st, "resume ack without chid (ret %d)", VAR_9);
  VAR_5->para.cause = 96;
  FUNC_4(VAR_5, VAR_6, ((void*)0));
  return;
 }
 VAR_10 = FUNC_1(VAR_5, VAR_8, VAR_4);
 if (VAR_2 == VAR_10) {
  FUNC_5(VAR_5, VAR_10);
  return;
 }
 FUNC_0(&VAR_5->timer);
 VAR_5->st->l3.l3l4(VAR_5->st, VAR_0 | VAR_1, VAR_5);
 FUNC_6(VAR_5, 10);
 if (VAR_10)
  FUNC_5(VAR_5, VAR_10);
}
