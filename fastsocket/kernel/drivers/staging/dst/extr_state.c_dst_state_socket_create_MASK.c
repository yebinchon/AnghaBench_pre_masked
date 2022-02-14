
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_4__ {int sa_family; } ;
struct dst_network_ctl {int proto; int type; TYPE_2__ addr; } ;
struct dst_state {struct socket* read_socket; struct socket* socket; struct dst_network_ctl ctl; } ;
struct TYPE_3__ {int sk_allocation; int sk_rcvtimeo; int sk_sndtimeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,struct socket**) ;

int FUNC_2(struct dst_state *VAR_2)
{
 int VAR_3;
 struct socket *VAR_4;
 struct dst_network_ctl *VAR_5 = &VAR_2->ctl;

 VAR_3 = FUNC_1(VAR_5->addr.sa_family, VAR_5->type, VAR_5->proto, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4->sk->sk_sndtimeo = VAR_4->sk->sk_rcvtimeo =
  FUNC_0(VAR_0);
 VAR_4->sk->sk_allocation = VAR_1;

 VAR_2->socket = VAR_2->read_socket = VAR_4;
 return 0;
}
