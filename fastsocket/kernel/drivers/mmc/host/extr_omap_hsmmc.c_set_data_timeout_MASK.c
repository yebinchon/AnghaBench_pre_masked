
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct omap_hsmmc_host {int base; int fclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct omap_hsmmc_host *VAR_5,
        unsigned int VAR_6,
        unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12 = 0;

 VAR_10 = FUNC_0(VAR_5->base, VAR_4);
 VAR_11 = (VAR_10 & VAR_0) >> VAR_1;
 if (VAR_11 == 0)
  VAR_11 = 1;

 VAR_9 = 1000000000 / (FUNC_2(VAR_5->fclk) / VAR_11);
 VAR_8 = VAR_6 / VAR_9;
 VAR_8 += VAR_7;
 if (VAR_8) {
  while ((VAR_8 & 0x80000000) == 0) {
   VAR_12 += 1;
   VAR_8 <<= 1;
  }
  VAR_12 = 31 - VAR_12;
  VAR_8 <<= 1;
  if (VAR_8 && VAR_12)
   VAR_12 += 1;
  if (VAR_12 >= 13)
   VAR_12 -= 13;
  else
   VAR_12 = 0;
  if (VAR_12 > 14)
   VAR_12 = 14;
 }

 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_12 << VAR_3;
 FUNC_1(VAR_5->base, VAR_4, VAR_10);
}
