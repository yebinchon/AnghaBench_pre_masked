
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {scalar_t__* data; } ;
struct l3_process {int state; int st; scalar_t__ callref; } ;
struct TYPE_4__ {int debug; struct l3_process* global; } ;
struct PStack {TYPE_1__ l3; } ;
struct TYPE_5__ {int primitive; int state; int (* rout ) (struct l3_process*,int,struct sk_buff*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct PStack*,char*,int,int) ;
 int FUNC_4 (int ,int,struct sk_buff*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct l3_process*,int,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_8(struct PStack *VAR_6, int VAR_7, struct sk_buff *VAR_8)
{
 u_char VAR_9[16];
 u_char *VAR_10 = VAR_9;
 int VAR_11;
 int VAR_12;
 struct l3_process *VAR_13 = VAR_6->l3.global;

 if ( VAR_8 )
  VAR_13->callref = VAR_8->data[2];
 else
  VAR_13->callref = 0;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++)
  if ((VAR_7 == VAR_5[VAR_12].primitive) &&
      ((1 << VAR_13->state) & VAR_5[VAR_12].state))
   break;
 if (VAR_12 == FUNC_0(VAR_5)) {
  if (VAR_6->l3.debug & VAR_2) {
   FUNC_3(VAR_6, "ni1 global state %d mt %x unhandled",
    VAR_13->state, VAR_7);
  }
  FUNC_1(VAR_10, VAR_13->callref, VAR_3);
  *VAR_10++ = VAR_1;
  *VAR_10++ = 0x2;
  *VAR_10++ = 0x80;
  *VAR_10++ = 81 |0x80;
  *VAR_10++ = 0x14;
  *VAR_10++ = 0x1;
  *VAR_10++ = VAR_13->state & 0x3f;
  VAR_11 = VAR_10 - VAR_9;
  if (!(VAR_8 = FUNC_2(VAR_11)))
   return;
  FUNC_5(FUNC_6(VAR_8, VAR_11), VAR_9, VAR_11);
  FUNC_4(VAR_13->st, VAR_0 | VAR_4, VAR_8);
 } else {
  if (VAR_6->l3.debug & VAR_2) {
   FUNC_3(VAR_6, "ni1 global %d mt %x",
    VAR_13->state, VAR_7);
  }
  VAR_5[VAR_12].rout(VAR_13, VAR_7, VAR_8);
 }
}
