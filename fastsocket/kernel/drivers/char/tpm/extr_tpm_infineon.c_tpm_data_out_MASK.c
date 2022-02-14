
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iotype; scalar_t__ data_regs; scalar_t__ mem_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(unsigned char VAR_2, unsigned char VAR_3)
{
 if (VAR_1.iotype == VAR_0)
  FUNC_0(VAR_2, VAR_1.data_regs + VAR_3);
 else
  FUNC_1(VAR_2, VAR_1.mem_base + VAR_1.data_regs + VAR_3);
}
