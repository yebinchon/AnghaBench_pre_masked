
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gem_txd {int dummy; } ;
struct gem {int rx_pause_off; int rx_pause_on; scalar_t__ regs; int gblock_dvma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gem *VAR_23)
{
 u64 VAR_24 = (u64) VAR_23->gblock_dvma;
 u32 VAR_25;

 VAR_25 = (VAR_18 | (0x7ff << 10) | VAR_19);
 FUNC_1(VAR_25, VAR_23->regs + VAR_17);

 FUNC_1(VAR_24 >> 32, VAR_23->regs + VAR_20);
 FUNC_1(VAR_24 & 0xffffffff, VAR_23->regs + VAR_21);
 VAR_24 += (VAR_2 * sizeof(struct gem_txd));

 FUNC_1(0, VAR_23->regs + VAR_22);

 VAR_25 = (VAR_7 | (VAR_15 << 10) |
        ((14 / 2) << 13) | VAR_8);
 FUNC_1(VAR_25, VAR_23->regs + VAR_6);

 FUNC_1(VAR_24 >> 32, VAR_23->regs + VAR_9);
 FUNC_1(VAR_24 & 0xffffffff, VAR_23->regs + VAR_10);

 FUNC_1(VAR_16 - 4, VAR_23->regs + VAR_11);

 VAR_25 = (((VAR_23->rx_pause_off / 64) << 0) & VAR_13);
 VAR_25 |= (((VAR_23->rx_pause_on / 64) << 12) & VAR_14);
 FUNC_1(VAR_25, VAR_23->regs + VAR_12);

 if (FUNC_0(VAR_23->regs + VAR_0) & VAR_1)
  FUNC_1(((5 & VAR_4) |
   ((8 << 12) & VAR_5)),
         VAR_23->regs + VAR_3);
 else
  FUNC_1(((5 & VAR_4) |
   ((4 << 12) & VAR_5)),
         VAR_23->regs + VAR_3);
}
