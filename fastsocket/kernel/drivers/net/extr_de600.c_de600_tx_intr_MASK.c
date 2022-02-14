
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct net_device*) ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_9, int VAR_10)
{





 if (VAR_10 & VAR_1)
  return 1;



 if (!(VAR_10 & VAR_3)) {
  VAR_8 = (VAR_8 + 1) % VAR_4;
  ++VAR_5;
  VAR_9->stats.tx_packets++;
  FUNC_2(VAR_9);
 }


 if ((VAR_5 < VAR_4) || (VAR_10 & VAR_3)) {
  VAR_9->trans_start = VAR_6;
  FUNC_1(VAR_7[VAR_8], VAR_0);
  FUNC_0(VAR_2);
  return 1;
 }


 return 0;
}
