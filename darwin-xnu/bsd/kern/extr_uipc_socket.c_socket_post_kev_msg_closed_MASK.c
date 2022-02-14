
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_2__* so_proto; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_6__ {int kev_peername; int kev_sockname; } ;
struct kev_socket_closed {TYPE_3__ ev_data; } ;
typedef int ev ;
struct TYPE_5__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_4__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;int (* pru_peeraddr ) (struct socket*,struct sockaddr**) ;} ;


 int FUNC_0 (struct sockaddr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kev_socket_closed*,int) ;
 int FUNC_2 (int *,struct sockaddr*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int FUNC_5 (struct socket*,struct sockaddr**) ;
 int FUNC_6 (struct socket*,struct sockaddr**) ;

void
FUNC_7(struct socket *VAR_2)
{
 struct kev_socket_closed VAR_3;
 struct sockaddr *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 int VAR_6;
 FUNC_1(&VAR_3, sizeof(VAR_3));
 VAR_6 = (*VAR_2->so_proto->pr_usrreqs->pru_sockaddr)(VAR_2, &VAR_4);
 if (VAR_6 == 0) {
  VAR_6 = (*VAR_2->so_proto->pr_usrreqs->pru_peeraddr)(VAR_2,
      &VAR_5);
  if (VAR_6 == 0) {
   FUNC_2(&VAR_3.ev_data.kev_sockname, VAR_4,
       FUNC_3(VAR_4->sa_len,
       sizeof (VAR_3.ev_data.kev_sockname)));
   FUNC_2(&VAR_3.ev_data.kev_peername, VAR_5,
       FUNC_3(VAR_5->sa_len,
       sizeof (VAR_3.ev_data.kev_peername)));
   FUNC_4(VAR_0,
       &VAR_3.ev_data, sizeof (VAR_3));
  }
 }
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4, VAR_1);
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_5, VAR_1);
}
