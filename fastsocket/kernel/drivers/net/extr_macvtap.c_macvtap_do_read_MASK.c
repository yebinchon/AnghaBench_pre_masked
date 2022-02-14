
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int sk_sleep; int sk_receive_queue; } ;
struct macvtap_queue {TYPE_1__ sk; } ;
struct kiocb {int dummy; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int state; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct macvtap_queue*,struct sk_buff*,struct iovec const*,unsigned long) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 struct sk_buff* FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_8(struct macvtap_queue *VAR_6, struct kiocb *VAR_7,
          const struct iovec *VAR_8, unsigned long VAR_9,
          int VAR_10)
{
 FUNC_0(VAR_5, VAR_4);
 struct sk_buff *VAR_11;
 ssize_t VAR_12 = 0;

 FUNC_1(VAR_6->sk.sk_sleep, &VAR_5);
 while (VAR_9) {
  VAR_4->state = VAR_2;


  VAR_11 = FUNC_7(&VAR_6->sk.sk_receive_queue);
  if (!VAR_11) {
   if (VAR_10) {
    VAR_12 = -VAR_0;
    break;
   }
   if (FUNC_6(VAR_4)) {
    VAR_12 = -VAR_1;
    break;
   }

   FUNC_5();
   continue;
  }
  VAR_12 = FUNC_3(VAR_6, VAR_11, VAR_8, VAR_9);
  FUNC_2(VAR_11);
  break;
 }

 VAR_4->state = VAR_3;
 FUNC_4(VAR_6->sk.sk_sleep, &VAR_5);
 return VAR_12;
}
