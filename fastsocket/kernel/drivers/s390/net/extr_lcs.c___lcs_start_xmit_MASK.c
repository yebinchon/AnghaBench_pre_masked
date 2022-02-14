
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct lcs_header {scalar_t__ offset; int slot; int type; } ;
struct TYPE_3__ {int tx_packets; int tx_bytes; int tx_dropped; int tx_carrier_errors; int tx_errors; } ;
struct lcs_card {scalar_t__ state; scalar_t__ tx_emitted; int lock; TYPE_2__* tx_buffer; int dev; TYPE_1__ stats; int portno; int lan_type; int write; } ;
struct TYPE_4__ {scalar_t__ count; scalar_t__ data; int callback; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lcs_card*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,struct lcs_header*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(struct lcs_card *VAR_7, struct sk_buff *VAR_8,
   struct net_device *VAR_9)
{
 struct lcs_header *VAR_10;
 int VAR_11 = VAR_4;

 FUNC_0(5, VAR_6, "hardxmit");
 if (VAR_8 == ((void*)0)) {
  VAR_7->stats.tx_dropped++;
  VAR_7->stats.tx_errors++;
  return VAR_4;
 }
 if (VAR_7->state != VAR_0) {
  FUNC_2(VAR_8);
  VAR_7->stats.tx_dropped++;
  VAR_7->stats.tx_errors++;
  VAR_7->stats.tx_carrier_errors++;
  return VAR_4;
 }
 if (VAR_8->protocol == FUNC_3(VAR_1)) {
  FUNC_2(VAR_8);
  return VAR_4;
 }
 FUNC_5(VAR_7->dev);
 FUNC_8(&VAR_7->lock);
 if (VAR_7->tx_buffer != ((void*)0) &&
     VAR_7->tx_buffer->count + sizeof(struct lcs_header) +
     VAR_8->len + sizeof(u16) > VAR_2)

  FUNC_1(VAR_7);
 if (VAR_7->tx_buffer == ((void*)0)) {

  VAR_7->tx_buffer = FUNC_4(&VAR_7->write);
  if (VAR_7->tx_buffer == ((void*)0)) {
   VAR_7->stats.tx_dropped++;
   VAR_11 = VAR_3;
   goto out;
  }
  VAR_7->tx_buffer->callback = VAR_5;
  VAR_7->tx_buffer->count = 0;
 }
 VAR_10 = (struct lcs_header *)
  (VAR_7->tx_buffer->data + VAR_7->tx_buffer->count);
 VAR_7->tx_buffer->count += VAR_8->len + sizeof(struct lcs_header);
 VAR_10->offset = VAR_7->tx_buffer->count;
 VAR_10->type = VAR_7->lan_type;
 VAR_10->slot = VAR_7->portno;
 FUNC_7(VAR_8, VAR_10 + 1, VAR_8->len);
 FUNC_9(&VAR_7->lock);
 VAR_7->stats.tx_bytes += VAR_8->len;
 VAR_7->stats.tx_packets++;
 FUNC_2(VAR_8);
 FUNC_6(VAR_7->dev);
 FUNC_8(&VAR_7->lock);
 if (VAR_7->tx_emitted <= 0 && VAR_7->tx_buffer != ((void*)0))

  FUNC_1(VAR_7);
out:
 FUNC_9(&VAR_7->lock);
 return VAR_11;
}
