
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct connection {int swork; int flags; TYPE_2__* sock; } ;
struct TYPE_4__ {int flags; TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_write_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 struct connection* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_5)
{
 struct connection *VAR_6 = FUNC_2(VAR_5);

 if (!VAR_6)
  return;

 FUNC_0(VAR_3, &VAR_6->sock->flags);

 if (FUNC_3(VAR_0, &VAR_6->flags)) {
  VAR_6->sock->sk->sk_write_pending--;
  FUNC_0(VAR_2, &VAR_6->sock->flags);
 }

 if (!FUNC_4(VAR_1, &VAR_6->flags))
  FUNC_1(VAR_4, &VAR_6->swork);
}
