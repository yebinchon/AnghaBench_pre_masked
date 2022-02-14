
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ driver; } ;
struct amba_driver {int (* resume ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct amba_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct amba_driver *VAR_1 = FUNC_2(VAR_0->driver);
 int VAR_2 = 0;

 if (VAR_0->driver && VAR_1->resume)
  VAR_2 = VAR_1->resume(FUNC_1(VAR_0));
 return VAR_2;
}
