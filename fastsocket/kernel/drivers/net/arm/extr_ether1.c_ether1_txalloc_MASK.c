
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_tail; int tx_head; } ;


 int TX_AREA_END ;
 int TX_AREA_START ;
 TYPE_1__* priv (struct net_device*) ;

__attribute__((used)) static int
ether1_txalloc (struct net_device *dev, int size)
{
 int start, tail;

 size = (size + 1) & ~1;
 tail = priv(dev)->tx_tail;

 if (priv(dev)->tx_head + size > TX_AREA_END) {
  if (tail > priv(dev)->tx_head)
   return -1;
  start = TX_AREA_START;
  if (start + size > tail)
   return -1;
  priv(dev)->tx_head = start + size;
 } else {
  if (priv(dev)->tx_head < tail && (priv(dev)->tx_head + size) > tail)
   return -1;
  start = priv(dev)->tx_head;
  priv(dev)->tx_head += size;
 }

 return start;
}
