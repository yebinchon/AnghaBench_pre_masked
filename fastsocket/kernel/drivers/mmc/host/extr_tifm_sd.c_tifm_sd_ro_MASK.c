
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {struct tifm_dev* dev; } ;
struct tifm_dev {int lock; scalar_t__ addr; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tifm_sd* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_2)
{
 int VAR_3 = 0;
 struct tifm_sd *VAR_4 = FUNC_0(VAR_2);
 struct tifm_dev *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;

 FUNC_2(&VAR_5->lock, VAR_6);
 if (VAR_1 & FUNC_1(VAR_5->addr + VAR_0))
  VAR_3 = 1;
 FUNC_3(&VAR_5->lock, VAR_6);
 return VAR_3;
}
