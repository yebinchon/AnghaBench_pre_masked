
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_phys_segments; } ;
typedef int atomic_t ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct bio *VAR_0)
{
 atomic_t *VAR_1 = (atomic_t *)&VAR_0->bi_phys_segments;
 return FUNC_0(1, VAR_1) & 0xffff;
}
