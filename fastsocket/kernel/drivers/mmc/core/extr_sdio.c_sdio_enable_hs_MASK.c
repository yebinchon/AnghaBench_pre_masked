
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2 <= 0 || VAR_1->type == VAR_0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 <= 0)
  FUNC_1(VAR_1, 0);

 return VAR_2;
}
