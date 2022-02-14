
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* card; int ocr; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int ,TYPE_1__*) ;
 int FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1)
{
 VAR_1->card->state &= ~VAR_0;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_1->ocr, VAR_1->card);
 FUNC_2(VAR_1);
}
