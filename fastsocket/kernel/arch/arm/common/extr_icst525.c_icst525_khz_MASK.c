
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst525_vco {int v; int r; size_t s; } ;
struct icst525_params {int ref; } ;


 int* VAR_0 ;

unsigned long FUNC_0(const struct icst525_params *VAR_1, struct icst525_vco VAR_2)
{
 return VAR_1->ref * 2 * (VAR_2.v + 8) / ((VAR_2.r + 2) * VAR_0[VAR_2.s]);
}
