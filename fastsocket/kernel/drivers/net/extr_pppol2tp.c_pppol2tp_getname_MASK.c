
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sockaddr {int dummy; } ;
struct sockaddr_pppol2tp {struct sockaddr pppol2tp; int sa_protocol; int sa_family; } ;
struct pppol2tp_session {struct sockaddr_pppol2tp tunnel_addr; } ;
struct pppol2tp_addr {int dummy; } ;
struct TYPE_3__ {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr_pppol2tp*,int) ;
 struct pppol2tp_session* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_5, struct sockaddr *VAR_6,
       int *VAR_7, int VAR_8)
{
 int VAR_9 = sizeof(struct sockaddr_pppol2tp);
 struct sockaddr_pppol2tp VAR_10;
 int VAR_11 = 0;
 struct pppol2tp_session *VAR_12;

 VAR_11 = -VAR_2;
 if (VAR_5->sk->sk_state != VAR_3)
  goto end;

 VAR_12 = FUNC_1(VAR_5->sk);
 if (VAR_12 == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto end;
 }

 VAR_10.sa_family = VAR_0;
 VAR_10.sa_protocol = VAR_4;
 FUNC_0(&VAR_10.pppol2tp, &VAR_12->tunnel_addr,
        sizeof(struct pppol2tp_addr));

 FUNC_0(VAR_6, &VAR_10, VAR_9);

 *VAR_7 = VAR_9;

 VAR_11 = 0;
 FUNC_2(VAR_5->sk);

end:
 return VAR_11;
}
