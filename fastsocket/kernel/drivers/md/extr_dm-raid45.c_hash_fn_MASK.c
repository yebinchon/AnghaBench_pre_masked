
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_hash {int prime; int shift; int mask; } ;
typedef int sector_t ;



__attribute__((used)) static unsigned FUNC_0(struct stripe_hash *VAR_0, sector_t VAR_1)
{
 return (unsigned) (((VAR_1 * VAR_0->prime) >> VAR_0->shift) & VAR_0->mask);
}
