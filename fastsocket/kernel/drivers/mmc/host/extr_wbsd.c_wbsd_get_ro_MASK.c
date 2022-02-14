
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbsd_host {int lock; scalar_t__ base; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 struct wbsd_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_3)
{
 struct wbsd_host *VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5;

 FUNC_4(&VAR_4->lock);

 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 VAR_5 |= VAR_1;
 FUNC_3(VAR_5, VAR_4->base + VAR_0);

 FUNC_1(1);

 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_4->base + VAR_0);

 FUNC_5(&VAR_4->lock);

 return !!(VAR_5 & VAR_2);
}
