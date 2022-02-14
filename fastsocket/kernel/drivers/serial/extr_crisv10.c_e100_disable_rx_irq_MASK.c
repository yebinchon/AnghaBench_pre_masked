
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {scalar_t__ uses_dma_in; } ;


 int FUNC_0 (struct e100_serial*) ;
 int FUNC_1 (struct e100_serial*) ;

__attribute__((used)) static inline void FUNC_2(struct e100_serial *VAR_0)
{
 if (VAR_0->uses_dma_in)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
