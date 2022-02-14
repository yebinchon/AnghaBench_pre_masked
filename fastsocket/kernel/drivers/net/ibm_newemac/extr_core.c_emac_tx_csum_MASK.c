
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct TYPE_2__ {int tx_packets_csum; } ;
struct emac_instance {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct emac_instance*,int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct emac_instance *VAR_3,
          struct sk_buff *VAR_4)
{
 if (FUNC_0(VAR_3, VAR_1) &&
  (VAR_4->ip_summed == VAR_0)) {
  ++VAR_3->stats.tx_packets_csum;
  return VAR_2;
 }
 return 0;
}
