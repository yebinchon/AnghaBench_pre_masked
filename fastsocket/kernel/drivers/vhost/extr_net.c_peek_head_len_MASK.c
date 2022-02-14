
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct sock {TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int len; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->sk_receive_queue.lock, VAR_3);
 VAR_1 = FUNC_1(&VAR_0->sk_receive_queue);
 if (FUNC_0(VAR_1))
  VAR_2 = VAR_1->len;
 FUNC_3(&VAR_0->sk_receive_queue.lock, VAR_3);
 return VAR_2;
}
