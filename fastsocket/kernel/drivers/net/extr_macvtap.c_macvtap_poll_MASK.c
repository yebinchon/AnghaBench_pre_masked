
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sk_receive_queue; } ;
struct TYPE_3__ {int flags; int wait; } ;
struct macvtap_queue {TYPE_2__ sk; TYPE_1__ sock; } ;
struct file {struct macvtap_queue* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_6, poll_table * VAR_7)
{
 struct macvtap_queue *VAR_8 = VAR_6->private_data;
 unsigned int VAR_9 = VAR_0;

 if (!VAR_8)
  goto out;

 VAR_9 = 0;
 FUNC_0(VAR_6, &VAR_8->sock.wait, VAR_7);

 if (!FUNC_1(&VAR_8->sk.sk_receive_queue))
  VAR_9 |= VAR_1 | VAR_3;

 if (FUNC_2(&VAR_8->sk) ||
     (!FUNC_3(VAR_5, &VAR_8->sock.flags) &&
      FUNC_2(&VAR_8->sk)))
  VAR_9 |= VAR_2 | VAR_4;

out:
 return VAR_9;
}
