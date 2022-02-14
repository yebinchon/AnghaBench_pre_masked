
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {int host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct mmc_card*) ;

int FUNC_2(struct mmc_card *VAR_0)
{
 FUNC_0(!VAR_0);

 return FUNC_1(VAR_0->host, VAR_0);
}
