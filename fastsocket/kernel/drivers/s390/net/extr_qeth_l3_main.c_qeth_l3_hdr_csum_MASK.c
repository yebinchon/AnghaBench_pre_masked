
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_7__ {int ext_flags; } ;
struct TYPE_8__ {TYPE_3__ l3; } ;
struct qeth_hdr {TYPE_4__ hdr; } ;
struct TYPE_6__ {int tx_csum; } ;
struct TYPE_5__ {scalar_t__ performance_stats; } ;
struct qeth_card {TYPE_2__ perf_stats; TYPE_1__ options; } ;
struct iphdr {scalar_t__ protocol; scalar_t__ check; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct qeth_card *VAR_4,
  struct qeth_hdr *VAR_5, struct sk_buff *VAR_6)
{
 struct iphdr *VAR_7 = FUNC_0(VAR_6);




 if (VAR_7->protocol == VAR_0)
  VAR_5->hdr.l3.ext_flags |= VAR_3;
 VAR_5->hdr.l3.ext_flags |= VAR_2 |
  VAR_1;
 VAR_7->check = 0;
 if (VAR_4->options.performance_stats)
  VAR_4->perf_stats.tx_csum++;
}
