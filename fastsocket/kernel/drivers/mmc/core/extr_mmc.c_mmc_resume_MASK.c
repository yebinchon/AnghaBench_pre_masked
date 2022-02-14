
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int card; int ocr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,int ,int ) ;
 int FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->card);

 FUNC_1(VAR_0);
 VAR_1 = FUNC_2(VAR_0, VAR_0->ocr, VAR_0->card);
 FUNC_3(VAR_0);

 return VAR_1;
}
