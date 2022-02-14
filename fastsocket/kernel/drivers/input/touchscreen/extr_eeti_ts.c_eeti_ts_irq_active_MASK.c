
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeti_ts_priv {scalar_t__ irq_active_high; int irq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct eeti_ts_priv *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0->irq)) == VAR_0->irq_active_high;
}
