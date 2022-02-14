
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_regs {int dummy; } ;
struct sgiseeq_private {scalar_t__ rx_new; scalar_t__ rx_desc; } ;
struct hpc3_ethregs {int rx_ctrl; int rx_ndptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sgiseeq_private*,scalar_t__) ;
 int FUNC_1 (struct sgiseeq_private*,struct hpc3_ethregs*,struct sgiseeq_regs*) ;

__attribute__((used)) static inline void FUNC_2(struct sgiseeq_private *VAR_1,
        struct hpc3_ethregs *VAR_2,
        struct sgiseeq_regs *VAR_3)
{
 if (!(VAR_2->rx_ctrl & VAR_0)) {
  VAR_2->rx_ndptr = FUNC_0(VAR_1, VAR_1->rx_desc + VAR_1->rx_new);
  FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
