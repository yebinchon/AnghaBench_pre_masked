
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ gtt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(dma_addr_t VAR_4, unsigned int VAR_5,
        unsigned int VAR_6)
{
 u32 VAR_7 = VAR_1;

 if (VAR_6 == VAR_0)
  VAR_7 |= VAR_2;

 FUNC_0(VAR_4 | VAR_7, VAR_3.gtt + VAR_5);
}
