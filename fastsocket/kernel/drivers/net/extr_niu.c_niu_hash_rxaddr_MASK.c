
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct rx_ring_info *VAR_2, u64 VAR_3)
{
 VAR_3 >>= VAR_1;
 VAR_3 ^= (VAR_3 >> FUNC_0(VAR_0));

 return (VAR_3 & (VAR_0 - 1));
}
