
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vnet_hdr ;
struct virtio_net_hdr {int flags; unsigned long csum_start; unsigned long csum_offset; unsigned long hdr_len; int member_0; } ;
struct sk_buff {int protocol; } ;
struct msghdr {scalar_t__ msg_control; } ;
struct macvtap_queue {int flags; int vnet_hdr_sz; int vlan; int sk; } ;
struct macvlan_dev {int dev; } ;
struct iovec {int dummy; } ;
typedef unsigned long ssize_t ;
struct TYPE_8__ {int h_proto; } ;
struct TYPE_7__ {int tx_dropped; } ;
struct TYPE_6__ {scalar_t__ destructor_arg; } ;
struct TYPE_5__ {int dev_zerocopy; int shared_frag; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iovec const*,size_t) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (int *,int ,int,int,int,int*) ;
 int FUNC_5 (struct sk_buff*,struct virtio_net_hdr*) ;
 int FUNC_6 (void*,struct iovec const*,int ,int) ;
 TYPE_3__* FUNC_7 (int ,int ) ;
 struct macvlan_dev* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct sk_buff*,int ,struct iovec const*,int,unsigned long) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,unsigned long) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 TYPE_1__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct sk_buff*,struct iovec const*,int,size_t) ;

__attribute__((used)) static ssize_t FUNC_19(struct macvtap_queue *VAR_10, struct msghdr *VAR_11,
    const struct iovec *VAR_12, unsigned long VAR_13,
    size_t VAR_14, int VAR_15)
{
 struct sk_buff *VAR_16;
 struct macvlan_dev *VAR_17;
 unsigned long VAR_18 = VAR_13;
 int VAR_19;
 struct virtio_net_hdr VAR_20 = { 0 };
 int VAR_21 = 0;
 int VAR_22 = 0;
 bool VAR_23 = 0;

 if (VAR_10->flags & VAR_4) {
  VAR_21 = VAR_10->vnet_hdr_sz;

  VAR_19 = -VAR_0;
  if ((VAR_18 -= VAR_21) < 0)
   goto err;

  VAR_19 = FUNC_6((void *)&VAR_20, VAR_12, 0,
        sizeof(VAR_20));
  if (VAR_19 < 0)
   goto err;
  if ((VAR_20.flags & VAR_9) &&
       VAR_20.csum_start + VAR_20.csum_offset + 2 >
       VAR_20.hdr_len)
   VAR_20.hdr_len = VAR_20.csum_start +
      VAR_20.csum_offset + 2;
  VAR_19 = -VAR_0;
  if (VAR_20.hdr_len > VAR_18)
   goto err;
 }

 VAR_19 = -VAR_0;
 if (FUNC_17(VAR_18 < VAR_2))
  goto err;

 VAR_19 = -VAR_1;
 if (FUNC_17(VAR_14 > VAR_8))
  goto err;

 if (VAR_11 && VAR_11->msg_control && FUNC_16(&VAR_10->sk, VAR_7))
  VAR_23 = 1;

 if (VAR_23) {




  if (VAR_14 > VAR_5) {
   VAR_22 = FUNC_1(VAR_12, VAR_14 - VAR_5);
   if (VAR_22 < VAR_21)
    VAR_22 = 0;
   else
    VAR_22 -= VAR_21;
  }




  if (VAR_22 < VAR_20.hdr_len)
   VAR_22 = VAR_20.hdr_len;
  if (!VAR_22)
   VAR_22 = VAR_3;
 } else
  VAR_22 = VAR_18;

 VAR_16 = FUNC_4(&VAR_10->sk, VAR_6, VAR_22,
    VAR_20.hdr_len, VAR_15, &VAR_19);
 if (!VAR_16)
  goto err;

 if (VAR_23)
  VAR_19 = FUNC_18(VAR_16, VAR_12, VAR_21, VAR_14);
 else
  VAR_19 = FUNC_11(VAR_16, 0, VAR_12, VAR_21,
         VAR_18);
 if (VAR_19)
  goto err_kfree;

 FUNC_13(VAR_16, VAR_2);
 FUNC_12(VAR_16);
 VAR_16->protocol = FUNC_0(VAR_16)->h_proto;

 if (VAR_21) {
  VAR_19 = FUNC_5(VAR_16, &VAR_20);
  if (VAR_19)
   goto err_kfree;
 }

 FUNC_9();
 VAR_17 = FUNC_8(VAR_10->vlan);

 if (VAR_23) {
  FUNC_14(VAR_16)->destructor_arg = VAR_11->msg_control;
  FUNC_15(VAR_16)->dev_zerocopy = 1;
  FUNC_15(VAR_16)->shared_frag = 1;
 }
 if (VAR_17)
  FUNC_3(VAR_16, VAR_17->dev);
 else
  FUNC_2(VAR_16);
 FUNC_10();

 return VAR_13;

err_kfree:
 FUNC_2(VAR_16);

err:
 FUNC_9();
 VAR_17 = FUNC_8(VAR_10->vlan);
 if (VAR_17)
  FUNC_7(VAR_17->dev, 0)->tx_dropped++;
 FUNC_10();

 return VAR_19;
}
