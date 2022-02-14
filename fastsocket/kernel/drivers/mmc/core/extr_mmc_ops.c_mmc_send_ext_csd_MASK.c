
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_card*,int ,int ,int *,int) ;

int FUNC_1(struct mmc_card *VAR_1, u8 *VAR_2)
{
 return FUNC_0(VAR_1, VAR_1->host, VAR_0,
   VAR_2, 512);
}
