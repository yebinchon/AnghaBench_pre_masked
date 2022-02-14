
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int max_dtr; } ;
struct mmc_card {scalar_t__ type; TYPE_1__ cis; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_card*) ;

__attribute__((used)) static unsigned FUNC_3(struct mmc_card *VAR_1)
{
 unsigned VAR_2;

 if (FUNC_1(VAR_1)) {






  VAR_2 = 50000000;
 } else {
  VAR_2 = VAR_1->cis.max_dtr;
 }

 if (VAR_1->type == VAR_0)
  VAR_2 = FUNC_0(VAR_2, FUNC_2(VAR_1));

 return VAR_2;
}
