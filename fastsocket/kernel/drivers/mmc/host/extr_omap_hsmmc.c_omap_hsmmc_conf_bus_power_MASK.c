
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_hsmmc_host {scalar_t__ id; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct omap_hsmmc_host*) ;

__attribute__((used)) static void FUNC_3(struct omap_hsmmc_host *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;


 if (VAR_10->id == VAR_3) {
  VAR_11 = VAR_5;
  VAR_12 = VAR_9 | VAR_8;
 } else {
  VAR_11 = VAR_4;
  VAR_12 = VAR_8;
 }

 VAR_13 = FUNC_0(VAR_10->base, VAR_2) & ~VAR_6;
 FUNC_1(VAR_10->base, VAR_2, VAR_13 | VAR_11);

 VAR_13 = FUNC_0(VAR_10->base, VAR_1);
 FUNC_1(VAR_10->base, VAR_1, VAR_13 | VAR_12);


 VAR_13 = FUNC_0(VAR_10->base, VAR_7);
 FUNC_1(VAR_10->base, VAR_7, VAR_13 | VAR_0);


 FUNC_2(VAR_10);
}
