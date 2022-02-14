
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct via_crdr_mmc_host {int power; int lock; scalar_t__ pcictrl_mmiobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct via_crdr_mmc_host*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct via_crdr_mmc_host *VAR_4,
         unsigned short VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;
 u8 VAR_8;

 FUNC_2(&VAR_4->lock, VAR_7);

 VAR_4->power = (1 << VAR_5);

 VAR_8 = FUNC_1(VAR_4->pcictrl_mmiobase + VAR_1);
 if (VAR_4->power == VAR_0)
  VAR_8 &= ~VAR_2;
 else
  VAR_8 |= VAR_2;
 if (VAR_6)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;
 FUNC_5(VAR_8, VAR_4->pcictrl_mmiobase + VAR_1);

 FUNC_0();
 FUNC_3(&VAR_4->lock, VAR_7);

 FUNC_4(VAR_4);
}
