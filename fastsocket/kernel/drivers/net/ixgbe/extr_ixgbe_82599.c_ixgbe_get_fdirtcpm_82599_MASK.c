
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src_port; int dst_port; } ;
union ixgbe_atr_input {TYPE_1__ formatted; } ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(union ixgbe_atr_input *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->formatted.dst_port);
 VAR_2 <<= VAR_0;
 VAR_2 |= FUNC_0(VAR_1->formatted.src_port);
 VAR_2 = ((VAR_2 & 0x55555555) << 1) | ((VAR_2 & 0xAAAAAAAA) >> 1);
 VAR_2 = ((VAR_2 & 0x33333333) << 2) | ((VAR_2 & 0xCCCCCCCC) >> 2);
 VAR_2 = ((VAR_2 & 0x0F0F0F0F) << 4) | ((VAR_2 & 0xF0F0F0F0) >> 4);
 return ((VAR_2 & 0x00FF00FF) << 8) | ((VAR_2 & 0xFF00FF00) >> 8);
}
