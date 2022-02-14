
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stripe_c {scalar_t__ chunk_size_shift; int chunk_size; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct stripe_c*,int,scalar_t__*,int*) ;

__attribute__((used)) static void FUNC_2(struct stripe_c *VAR_0, sector_t VAR_1,
        uint32_t VAR_2, sector_t *VAR_3)
{
 uint32_t VAR_4;

 FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);
 if (VAR_4 == VAR_2)
  return;


 VAR_1 = *VAR_3;
 if (VAR_0->chunk_size_shift < 0)
  *VAR_3 -= FUNC_0(VAR_1, VAR_0->chunk_size);
 else
  *VAR_3 = VAR_1 & ~(sector_t)(VAR_0->chunk_size - 1);

 if (VAR_2 < VAR_4)
  *VAR_3 += VAR_0->chunk_size;
}
