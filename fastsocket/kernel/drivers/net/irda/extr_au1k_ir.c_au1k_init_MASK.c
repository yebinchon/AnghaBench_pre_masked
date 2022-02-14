
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct au1k_private {TYPE_1__** rx_ring; scalar_t__ rx_head; scalar_t__ tx_tail; scalar_t__ tx_head; } ;
struct TYPE_2__ {int flags; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (int) ;
 struct au1k_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_13)
{
 struct au1k_private *VAR_14 = FUNC_2(VAR_13);
 int VAR_15;
 u32 VAR_16;
 u32 VAR_17;


 VAR_16 = 0xe;


 VAR_16 |= 1;

 VAR_14->tx_head = 0;
 VAR_14->tx_tail = 0;
 VAR_14->rx_head = 0;

 for (VAR_15=0; VAR_15<VAR_11; VAR_15++) {
  VAR_14->rx_ring[VAR_15]->flags = VAR_0;
 }

 FUNC_5(VAR_16, VAR_3);
 FUNC_1(10);

 FUNC_5(FUNC_3(VAR_2) & ~0x8000, VAR_2);
 FUNC_1(1);

 FUNC_5(VAR_10, VAR_4);

 VAR_17 = (u32)FUNC_4((void *)VAR_14->rx_ring[0]);
 FUNC_5(VAR_17 >> 26, VAR_7);
 FUNC_5((VAR_17 >> 10) & 0xffff, VAR_8);

 FUNC_5(VAR_12<<8 | VAR_12<<12, VAR_9);

 FUNC_5(1<<2 | VAR_5, VAR_1);
 FUNC_5(0, VAR_6);

 FUNC_0(VAR_13, 9600);
 return 0;
}
