
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_phys_segments; } ;
typedef int atomic_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct bio *VAR_0,
 unsigned int VAR_1)
{
 atomic_t *VAR_2 = (atomic_t *)&VAR_0->bi_phys_segments;
 int VAR_3, VAR_4;

 do {
  VAR_3 = FUNC_1(VAR_2);
  VAR_4 = (VAR_3 & 0xffff) | (VAR_1 << 16);
 } while (FUNC_0(VAR_2, VAR_3, VAR_4) != VAR_3);
}
