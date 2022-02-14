
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct mmc_host {int dummy; } ;
struct cb710_mmc_reader {struct mmc_request* mrq; } ;


 struct cb710_mmc_reader* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct mmc_host *VAR_1 = (void *)VAR_0;
 struct cb710_mmc_reader *VAR_2 = FUNC_0(VAR_1);
 struct mmc_request *VAR_3 = VAR_2->mrq;

 VAR_2->mrq = ((void*)0);
 FUNC_1(VAR_1, VAR_3);
}
