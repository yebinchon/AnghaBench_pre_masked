
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_driver {int (* suspend ) (struct mmc_card*,int ) ;} ;
struct mmc_card {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int pm_message_t ;


 struct mmc_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mmc_card*,int ) ;
 struct mmc_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct mmc_driver *VAR_2 = FUNC_2(VAR_0->driver);
 struct mmc_card *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 if (VAR_0->driver && VAR_2->suspend)
  VAR_4 = VAR_2->suspend(VAR_3, VAR_1);
 return VAR_4;
}
