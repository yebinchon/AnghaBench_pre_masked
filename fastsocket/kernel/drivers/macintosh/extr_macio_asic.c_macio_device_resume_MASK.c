
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_driver {int (* resume ) (struct macio_dev*) ;} ;
struct macio_dev {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct macio_dev*) ;
 struct macio_dev* FUNC_1 (struct device*) ;
 struct macio_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device * VAR_0)
{
 struct macio_dev * VAR_1 = FUNC_1(VAR_0);
 struct macio_driver * VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_0->driver && VAR_2->resume)
  return VAR_2->resume(VAR_1);
 return 0;
}
