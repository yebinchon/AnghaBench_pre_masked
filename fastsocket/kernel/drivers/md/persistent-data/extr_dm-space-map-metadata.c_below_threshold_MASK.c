
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold {scalar_t__ threshold; scalar_t__ threshold_set; } ;
typedef scalar_t__ dm_block_t ;



__attribute__((used)) static bool FUNC_0(struct threshold *VAR_0, dm_block_t VAR_1)
{
 return VAR_0->threshold_set && VAR_1 <= VAR_0->threshold;
}
