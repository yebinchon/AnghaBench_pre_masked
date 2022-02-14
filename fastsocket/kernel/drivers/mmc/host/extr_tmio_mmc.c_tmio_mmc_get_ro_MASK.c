
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tmio_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct tmio_mmc_host *VAR_3 = FUNC_0(VAR_2);

 return (FUNC_1(VAR_3, VAR_0) & VAR_1) ? 0 : 1;
}
