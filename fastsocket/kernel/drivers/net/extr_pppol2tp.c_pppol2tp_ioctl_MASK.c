
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int * sk_user_data; } ;
struct pppol2tp_tunnel {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_session; scalar_t__ d_session; } ;
struct pppol2tp_session {struct sock* tunnel_sock; TYPE_1__ tunnel_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pppol2tp_session*,unsigned int,unsigned long) ;
 struct pppol2tp_session* FUNC_1 (struct sock*) ;
 struct pppol2tp_tunnel* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct pppol2tp_tunnel*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_5, unsigned int VAR_6,
     unsigned long VAR_7)
{
 struct sock *VAR_8 = VAR_5->sk;
 struct pppol2tp_session *VAR_9;
 struct pppol2tp_tunnel *VAR_10;
 int VAR_11;

 if (!VAR_8)
  return 0;

 VAR_11 = -VAR_0;
 if (FUNC_4(VAR_8, VAR_4) != 0)
  goto end;

 VAR_11 = -VAR_1;
 if ((VAR_8->sk_user_data == ((void*)0)) ||
     (!(VAR_8->sk_state & (VAR_3 | VAR_2))))
  goto end;


 VAR_11 = -VAR_0;
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 == ((void*)0))
  goto end;




 if ((VAR_9->tunnel_addr.s_session == 0) &&
     (VAR_9->tunnel_addr.d_session == 0)) {
  VAR_11 = -VAR_0;
  VAR_10 = FUNC_2(VAR_9->tunnel_sock);
  if (VAR_10 == ((void*)0))
   goto end_put_sess;

  VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_7);
  FUNC_5(VAR_9->tunnel_sock);
  goto end_put_sess;
 }

 VAR_11 = FUNC_0(VAR_9, VAR_6, VAR_7);

end_put_sess:
 FUNC_5(VAR_8);
end:
 return VAR_11;
}
