
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_sleep; TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_4)
{
 if (!FUNC_0(VAR_4) ||
     !FUNC_1(VAR_3, &VAR_4->sk_socket->flags))
  return;

 if (VAR_4->sk_sleep && FUNC_2(VAR_4->sk_sleep))
  FUNC_3(VAR_4->sk_sleep, VAR_0 | VAR_2 | VAR_1);
}
