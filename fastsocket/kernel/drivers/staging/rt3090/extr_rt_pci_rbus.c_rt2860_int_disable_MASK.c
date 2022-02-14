
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned int int_disable_mask; int int_enable_reg; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(PRTMP_ADAPTER VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_2->int_disable_mask |= VAR_3;
 VAR_4 = VAR_2->int_enable_reg & ~(VAR_2->int_disable_mask);
 FUNC_1(VAR_2, VAR_0, VAR_4);

 if (VAR_4 == 0)
 {
  FUNC_0(VAR_2, VAR_1);
 }
}
