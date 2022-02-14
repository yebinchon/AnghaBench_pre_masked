
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct igbvf_adapter {int flags; int hw_csum_good; int hw_csum_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_0(struct igbvf_adapter *VAR_8,
                                         u32 VAR_9, struct sk_buff *VAR_10)
{
 VAR_10->ip_summed = VAR_0;


 if ((VAR_9 & VAR_4) ||
     (VAR_8->flags & VAR_7))
  return;


 if (VAR_9 &
     (VAR_3 | VAR_2)) {

  VAR_8->hw_csum_err++;
  return;
 }


 if (VAR_9 & (VAR_5 | VAR_6))
  VAR_10->ip_summed = VAR_1;

 VAR_8->hw_csum_good++;
}
