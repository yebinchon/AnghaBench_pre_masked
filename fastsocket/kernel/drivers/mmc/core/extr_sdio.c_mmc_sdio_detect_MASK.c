
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int card; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->card);

 FUNC_1(VAR_0);




 VAR_1 = FUNC_5(VAR_0->card);

 FUNC_3(VAR_0);

 if (VAR_1) {
  FUNC_4(VAR_0);

  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
  FUNC_3(VAR_0);
 }
}
