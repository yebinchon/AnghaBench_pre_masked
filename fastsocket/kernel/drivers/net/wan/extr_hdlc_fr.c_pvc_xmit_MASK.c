
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int dev; int protocol; scalar_t__ data; } ;
struct TYPE_5__ {int tx_dropped; int tx_compressed; int tx_packets; int tx_bytes; } ;
struct net_device {scalar_t__ type; TYPE_2__ stats; TYPE_3__* ml_priv; } ;
struct TYPE_4__ {scalar_t__ fecn; scalar_t__ active; } ;
struct TYPE_6__ {int frad; TYPE_1__ state; int dlci; } ;
typedef TYPE_3__ pvc_device ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff**,int ) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 pvc_device *VAR_7 = VAR_6->ml_priv;

 if (VAR_7->state.active) {
  if (VAR_6->type == VAR_0) {
   int VAR_8 = VAR_2 - VAR_5->len;
   if (VAR_8 > 0) {
    int VAR_9 = VAR_5->len;
    if (FUNC_7(VAR_5) < VAR_8)
     if (FUNC_5(VAR_5, 0, VAR_8,
            VAR_3)) {
      VAR_6->stats.tx_dropped++;
      FUNC_1(VAR_5);
      return VAR_4;
     }
    FUNC_6(VAR_5, VAR_8);
    FUNC_4(VAR_5->data + VAR_9, 0, VAR_8);
   }
   VAR_5->protocol = FUNC_0(VAR_1);
  }
  if (!FUNC_3(&VAR_5, VAR_7->dlci)) {
   VAR_6->stats.tx_bytes += VAR_5->len;
   VAR_6->stats.tx_packets++;
   if (VAR_7->state.fecn)
    VAR_6->stats.tx_compressed++;
   VAR_5->dev = VAR_7->frad;
   FUNC_2(VAR_5);
   return VAR_4;
  }
 }

 VAR_6->stats.tx_dropped++;
 FUNC_1(VAR_5);
 return VAR_4;
}
