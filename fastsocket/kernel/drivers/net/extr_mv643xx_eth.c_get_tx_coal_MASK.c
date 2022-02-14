
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mv643xx_eth_private {TYPE_1__* shared; } ;
struct TYPE_2__ {int t_clk; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct mv643xx_eth_private *VAR_1)
{
 u64 VAR_2;

 VAR_2 = (FUNC_1(VAR_1, VAR_0) & 0x3fff0) >> 4;
 VAR_2 *= 64000000;
 FUNC_0(VAR_2, VAR_1->shared->t_clk);

 return (unsigned int)VAR_2;
}
