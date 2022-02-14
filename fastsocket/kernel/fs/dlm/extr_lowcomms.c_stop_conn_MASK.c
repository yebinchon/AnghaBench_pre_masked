
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int flags; TYPE_2__* sock; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int * sk_user_data; } ;



__attribute__((used)) static void FUNC_0(struct connection *VAR_0)
{
 VAR_0->flags |= 0x0F;
 if (VAR_0->sock && VAR_0->sock->sk)
  VAR_0->sock->sk->sk_user_data = ((void*)0);
}
