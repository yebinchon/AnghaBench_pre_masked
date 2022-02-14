
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mmc_host*,int*) ;
 int FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int,int*) ;
 int FUNC_4 (struct mmc_host*,int*) ;
 int FUNC_5 (struct mmc_host*,int) ;
 int FUNC_6 (struct mmc_host*,int ) ;

int FUNC_7(struct mmc_host *VAR_12, u32 VAR_13, u32 *VAR_14, u32 *VAR_15)
{
 int VAR_16;







 FUNC_1(VAR_12);







 VAR_16 = FUNC_5(VAR_12, VAR_13);
 if (!VAR_16)
  VAR_13 |= VAR_9;





 if (VAR_12->caps & (VAR_5 | VAR_6 |
     VAR_7 | VAR_4 | VAR_3))
  VAR_13 |= VAR_10;


 if (VAR_12->caps & (VAR_2 | VAR_1 |
     VAR_0))
  VAR_13 |= VAR_11;

try_again:
 VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_15);
 if (VAR_16)
  return VAR_16;





 if (!FUNC_2(VAR_12) && VAR_15 &&
    ((*VAR_15 & 0x41000000) == 0x41000000)) {
  VAR_16 = FUNC_6(VAR_12, VAR_8);
  if (VAR_16) {
   VAR_13 &= ~VAR_10;
   goto try_again;
  }
 }

 if (FUNC_2(VAR_12))
  VAR_16 = FUNC_4(VAR_12, VAR_14);
 else
  VAR_16 = FUNC_0(VAR_12, VAR_14);

 return VAR_16;
}
