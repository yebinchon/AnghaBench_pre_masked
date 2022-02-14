
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sock* sk; } ;
struct tun_struct {TYPE_1__ socket; } ;
struct sock {int dummy; } ;
struct sk_buff {size_t data_len; size_t len; } ;


 struct sk_buff* FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct sk_buff*,size_t) ;
 int FUNC_2 (struct sk_buff*,size_t) ;
 struct sk_buff* FUNC_3 (struct sock*,size_t,size_t,int,int*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_5(struct tun_struct *VAR_1,
         size_t VAR_2, size_t VAR_3,
         size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_1->socket.sk;
 struct sk_buff *VAR_7;
 int VAR_8;

 FUNC_4(VAR_6);


 if (VAR_2 + VAR_3 < VAR_0 || !VAR_4)
  VAR_4 = VAR_3;

 VAR_7 = FUNC_3(VAR_6, VAR_2 + VAR_4, VAR_3 - VAR_4, VAR_5,
       &VAR_8);
 if (!VAR_7)
  return FUNC_0(VAR_8);

 FUNC_2(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_4);
 VAR_7->data_len = VAR_3 - VAR_4;
 VAR_7->len += VAR_3 - VAR_4;

 return VAR_7;
}
