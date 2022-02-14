
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct pppox_sock {int pppoe_relay; int chan; } ;
struct TYPE_4__ {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 struct pppox_sock* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 struct pppox_sock* FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct pppox_sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct pppox_sock *VAR_7 = FUNC_4(VAR_5);
 struct pppox_sock *VAR_8;






 if (VAR_5->sk_state & VAR_2) {
  FUNC_3(&VAR_7->chan, VAR_6);
 } else if (VAR_5->sk_state & VAR_4) {
  VAR_8 = FUNC_1(FUNC_6(VAR_5),
         &VAR_7->pppoe_relay);
  if (VAR_8 == ((void*)0))
   goto abort_kfree;

  if ((FUNC_5(VAR_8)->sk_state & VAR_3) == 0)
   goto abort_put;

  if (!FUNC_0(FUNC_5(VAR_8), VAR_6))
   goto abort_put;
 } else {
  if (FUNC_8(VAR_5, VAR_6))
   goto abort_kfree;
 }

 return VAR_1;

abort_put:
 FUNC_7(FUNC_5(VAR_8));

abort_kfree:
 FUNC_2(VAR_6);
 return VAR_0;
}
