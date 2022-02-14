
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvtap_queue {struct file* file; int sk; int tap; int vlan; } ;
struct macvlan_dev {struct file* file; int sk; int tap; int vlan; } ;
struct file {struct macvtap_queue* private_data; } ;


 int VAR_0 ;
 struct macvtap_queue* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct macvtap_queue*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct file *VAR_2,
    struct macvtap_queue *VAR_3)
{
 struct macvlan_dev *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = -VAR_0;

 FUNC_3();
 if (FUNC_2(VAR_4->tap))
  goto out;

 VAR_5 = 0;
 FUNC_1(VAR_3->vlan, VAR_4);
 FUNC_1(VAR_4->tap, VAR_3);
 FUNC_5(&VAR_3->sk);

 VAR_3->file = VAR_2;
 VAR_2->private_data = VAR_3;

out:
 FUNC_4();
 return VAR_5;
}
