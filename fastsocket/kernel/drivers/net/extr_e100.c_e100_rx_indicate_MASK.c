
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct rx {struct sk_buff* skb; int dma_addr; } ;
struct rfd {int command; int actual_size; int status; } ;
struct nic {scalar_t__ ru_running; int rx_over_length_errors; struct net_device* netdev; TYPE_2__* csr; int pdev; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nic*,int ,int ,struct net_device*,char*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct nic *VAR_15, struct rx *VAR_16,
 unsigned int *VAR_17, unsigned int VAR_18)
{
 struct net_device *VAR_19 = VAR_15->netdev;
 struct sk_buff *VAR_20 = VAR_16->skb;
 struct rfd *VAR_21 = (struct rfd *)VAR_20->data;
 u16 VAR_22, VAR_23;

 if (FUNC_12(VAR_17 && *VAR_17 >= VAR_18))
  return -VAR_0;


 FUNC_6(VAR_15->pdev, VAR_16->dma_addr,
  sizeof(struct rfd), VAR_4);
 VAR_22 = FUNC_3(VAR_21->status);

 FUNC_4(VAR_15, VAR_14, VAR_3, VAR_15->netdev,
       "status=0x%04X\n", VAR_22);
 FUNC_9();


 if (FUNC_12(!(VAR_22 & VAR_10))) {





  if ((FUNC_3(VAR_21->command) & VAR_11) &&
      (VAR_7 == VAR_15->ru_running))

   if (FUNC_2(&VAR_15->csr->scb.status) & VAR_13)
    VAR_15->ru_running = VAR_8;
  FUNC_7(VAR_15->pdev, VAR_16->dma_addr,
            sizeof(struct rfd),
            VAR_5);
  return -VAR_1;
 }


 VAR_23 = FUNC_3(VAR_21->actual_size) & 0x3FFF;
 if (FUNC_12(VAR_23 > VAR_6 - sizeof(struct rfd)))
  VAR_23 = VAR_6 - sizeof(struct rfd);


 FUNC_8(VAR_15->pdev, VAR_16->dma_addr,
  VAR_6, VAR_4);







 if ((FUNC_3(VAR_21->command) & VAR_11) &&
     (VAR_7 == VAR_15->ru_running)) {

     if (FUNC_2(&VAR_15->csr->scb.status) & VAR_13)
  VAR_15->ru_running = VAR_8;
 }


 FUNC_11(VAR_20, sizeof(struct rfd));
 FUNC_10(VAR_20, VAR_23);
 VAR_20->protocol = FUNC_1(VAR_20, VAR_15->netdev);

 if (FUNC_12(!(VAR_22 & VAR_12))) {

  FUNC_0(VAR_20);
 } else if (VAR_23 > VAR_2 + VAR_9) {

  VAR_15->rx_over_length_errors++;
  FUNC_0(VAR_20);
 } else {
  VAR_19->stats.rx_packets++;
  VAR_19->stats.rx_bytes += VAR_23;
  FUNC_5(VAR_20);
  if (VAR_17)
   (*VAR_17)++;
 }

 VAR_16->skb = ((void*)0);

 return 0;
}
