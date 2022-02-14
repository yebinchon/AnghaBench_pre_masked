
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ driver; } ;
struct amba_driver {int (* suspend ) (int ,int ) ;} ;
typedef int pm_message_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*) ;
 struct amba_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct amba_driver *VAR_2 = FUNC_2(VAR_0->driver);
 int VAR_3 = 0;

 if (VAR_0->driver && VAR_2->suspend)
  VAR_3 = VAR_2->suspend(FUNC_1(VAR_0), VAR_1);
 return VAR_3;
}
