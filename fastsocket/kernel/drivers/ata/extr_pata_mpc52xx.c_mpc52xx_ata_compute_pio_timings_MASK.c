
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc52xx_ata_timings {unsigned int pio1; unsigned int pio2; } ;
struct mpc52xx_ata_priv {unsigned int ipb_period; struct mpc52xx_ata_timings* timings; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int
FUNC_1(struct mpc52xx_ata_priv *VAR_8, int VAR_9, int VAR_10)
{
 struct mpc52xx_ata_timings *VAR_11 = &VAR_8->timings[VAR_9];
 unsigned int VAR_12 = VAR_8->ipb_period;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 if ((VAR_10 < 0) || (VAR_10 > 4))
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_12, 1000 * VAR_1[VAR_10]);
 VAR_14 = FUNC_0(VAR_12, 1000 * VAR_2[VAR_10]);
 VAR_15 = FUNC_0(VAR_12, 1000 * VAR_4[VAR_10]);
 VAR_16 = FUNC_0(VAR_12, 1000 * VAR_3[VAR_10]);
 VAR_17 = FUNC_0(VAR_12, 1000 * VAR_5[VAR_10]);
 VAR_18 = FUNC_0(VAR_12, 1000 * VAR_6[VAR_10]);
 VAR_19 = FUNC_0(VAR_12, 1000 * VAR_7[VAR_10]);

 VAR_11->pio1 = (VAR_13 << 24) | (VAR_15 << 16) | (VAR_16 << 8) | (VAR_17);
 VAR_11->pio2 = (VAR_18 << 24) | (VAR_14 << 16) | (VAR_19 << 8);

 return 0;
}
