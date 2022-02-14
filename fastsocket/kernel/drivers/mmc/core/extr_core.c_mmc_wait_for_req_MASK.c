
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int done; int * done_data; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 FUNC_0(VAR_0);

 VAR_3->done_data = &VAR_0;
 VAR_3->done = VAR_1;

 FUNC_1(VAR_2, VAR_3);

 FUNC_2(&VAR_0);
}
