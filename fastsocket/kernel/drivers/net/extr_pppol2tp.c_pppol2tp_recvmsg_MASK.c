
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_iov; int msg_flags; scalar_t__ msg_namelen; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,size_t) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_4(struct kiocb *VAR_4, struct socket *VAR_5,
       struct msghdr *VAR_6, size_t VAR_7,
       int VAR_8)
{
 int VAR_9;
 struct sk_buff *VAR_10;
 struct sock *VAR_11 = VAR_5->sk;

 VAR_9 = -VAR_0;
 if (VAR_11->sk_state & VAR_3)
  goto end;

 VAR_6->msg_namelen = 0;

 VAR_9 = 0;
 VAR_10 = FUNC_3(VAR_11, VAR_8 & ~VAR_1,
    VAR_8 & VAR_1, &VAR_9);
 if (!VAR_10)
  goto end;

 if (VAR_7 > VAR_10->len)
  VAR_7 = VAR_10->len;
 else if (VAR_7 < VAR_10->len)
  VAR_6->msg_flags |= VAR_2;

 VAR_9 = FUNC_2(VAR_10, 0, VAR_6->msg_iov, VAR_7);
 if (FUNC_1(VAR_9 == 0))
  VAR_9 = VAR_7;

 FUNC_0(VAR_10);
end:
 return VAR_9;
}
