
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int hard_header_len; } ;
struct fwnet_peer {int pd_list; } ;
struct fwnet_partial_datagram {unsigned int datagram_size; unsigned int pbuf; int pd_link; int * skb; int datagram_label; int fi_list; } ;
struct fwnet_fragment_info {unsigned int datagram_size; unsigned int pbuf; int pd_link; int * skb; int datagram_label; int fi_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 struct fwnet_partial_datagram* FUNC_3 (struct fwnet_partial_datagram*,unsigned int,unsigned int) ;
 int FUNC_4 (struct fwnet_partial_datagram*) ;
 struct fwnet_partial_datagram* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (unsigned int,void*,unsigned int) ;
 unsigned int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static struct fwnet_partial_datagram *FUNC_10(struct net_device *VAR_1,
  struct fwnet_peer *VAR_2, u16 VAR_3, unsigned VAR_4,
  void *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 struct fwnet_partial_datagram *VAR_8;
 struct fwnet_fragment_info *VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto fail;

 FUNC_0(&VAR_8->fi_list);
 VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_7);
 if (VAR_9 == ((void*)0))
  goto fail_w_new;

 VAR_8->datagram_label = VAR_3;
 VAR_8->datagram_size = VAR_4;
 VAR_8->skb = FUNC_1(VAR_4 + VAR_1->hard_header_len + 15);
 if (VAR_8->skb == ((void*)0))
  goto fail_w_fi;

 FUNC_9(VAR_8->skb, (VAR_1->hard_header_len + 15) & ~15);
 VAR_8->pbuf = FUNC_8(VAR_8->skb, VAR_4);
 FUNC_7(VAR_8->pbuf + VAR_6, VAR_5, VAR_7);
 FUNC_6(&VAR_8->pd_link, &VAR_2->pd_list);

 return VAR_8;

fail_w_fi:
 FUNC_4(VAR_9);
fail_w_new:
 FUNC_4(VAR_8);
fail:
 FUNC_2("out of memory\n");

 return ((void*)0);
}
