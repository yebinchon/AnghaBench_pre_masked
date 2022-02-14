
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ sectors_per_block_shift; } ;



__attribute__((used)) static bool FUNC_0(struct pool *VAR_0)
{
 return VAR_0->sectors_per_block_shift >= 0;
}
