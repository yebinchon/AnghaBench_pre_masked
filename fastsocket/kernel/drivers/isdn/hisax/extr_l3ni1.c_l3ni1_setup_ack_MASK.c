
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
struct l3_process {int debug; TYPE_3__* st; int timer; TYPE_1__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct l3_process*,struct sk_buff*,int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (struct l3_process*,struct sk_buff*) ;
 int FUNC_5 (struct l3_process*,int ,int *) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (struct l3_process*,int) ;
 int FUNC_8 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_9(struct l3_process *VAR_7, u_char VAR_8, void *VAR_9)
{
 struct sk_buff *VAR_10 = VAR_9;
 int VAR_11, VAR_12;

 if ((VAR_11 = FUNC_4(VAR_7, VAR_10)) >= 0) {
  if ((0 == VAR_11) || ((3 == VAR_11) && (0x10 == VAR_7->para.moderate))) {
   if (VAR_7->debug & VAR_4)
    FUNC_3(VAR_7->st, "setup answer with wrong chid %x", VAR_11);
   VAR_7->para.cause = 100;
   FUNC_5(VAR_7, VAR_8, ((void*)0));
   return;
  }
  VAR_7->para.bchannel = VAR_11;
 } else {
  if (VAR_7->debug & VAR_4)
   FUNC_3(VAR_7->st, "setup answer wrong chid (ret %d)", VAR_11);
  if (VAR_11 == -1)
   VAR_7->para.cause = 96;
  else
   VAR_7->para.cause = 100;
  FUNC_5(VAR_7, VAR_8, ((void*)0));
  return;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_6);
 if (VAR_2 == VAR_12) {
  FUNC_6(VAR_7, VAR_12);
  return;
 }
 FUNC_1(&VAR_7->timer);
 FUNC_7(VAR_7, 2);
 FUNC_0(&VAR_7->timer, VAR_5, VAR_1);
 if (VAR_12)
  FUNC_6(VAR_7, VAR_12);
 VAR_7->st->l3.l3l4(VAR_7->st, VAR_0 | VAR_3, VAR_7);
}
