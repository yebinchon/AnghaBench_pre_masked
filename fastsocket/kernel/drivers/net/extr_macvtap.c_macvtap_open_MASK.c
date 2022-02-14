
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct virtio_net_hdr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_10__ {int sk_write_space; } ;
struct TYPE_11__ {int * ops; struct file* file; int state; int type; int wait; } ;
struct macvtap_queue {int flags; int vnet_hdr_sz; TYPE_3__ sk; TYPE_5__ sock; } ;
struct macvlan_dev {TYPE_2__* lowerdev; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_12__ {TYPE_1__* nsproxy; } ;
struct TYPE_9__ {int features; } ;
struct TYPE_8__ {struct net* net_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_7__* VAR_12 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int FUNC_4 (struct net_device*,struct file*,struct macvtap_queue*) ;
 int VAR_14 ;
 int VAR_15 ;
 struct macvlan_dev* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net*,int ,int ,int *) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_16, struct file *VAR_17)
{
 struct net *VAR_18 = VAR_12->nsproxy->net_ns;
 struct net_device *VAR_19 = FUNC_0(FUNC_2(VAR_16));
 struct macvlan_dev *VAR_20 = FUNC_5(VAR_19);
 struct macvtap_queue *VAR_21;
 int VAR_22;

 VAR_22 = -VAR_1;
 if (!VAR_19)
  goto out;

 VAR_22 = -VAR_2;
 VAR_21 = (struct macvtap_queue *)FUNC_6(VAR_18, VAR_0, VAR_3,
          &VAR_13);
 if (!VAR_21)
  goto out;

 FUNC_3(&VAR_21->sock.wait);
 VAR_21->sock.type = VAR_9;
 VAR_21->sock.state = VAR_11;
 VAR_21->sock.file = VAR_17;
 VAR_21->sock.ops = &VAR_15;
 FUNC_7(&VAR_21->sock, &VAR_21->sk);
 VAR_21->sk.sk_write_space = VAR_14;
 VAR_21->flags = VAR_6 | VAR_4 | VAR_5;
 VAR_21->vnet_hdr_sz = sizeof(struct virtio_net_hdr);





 if (VAR_20) {
  if ((VAR_20->lowerdev->features & VAR_7) &&
      (VAR_20->lowerdev->features & VAR_8))
   FUNC_9(&VAR_21->sk, VAR_10);
 }

 VAR_22 = FUNC_4(VAR_19, VAR_17, VAR_21);
 if (VAR_22)
  FUNC_8(&VAR_21->sk);

out:
 if (VAR_19)
  FUNC_1(VAR_19);

 return VAR_22;
}
