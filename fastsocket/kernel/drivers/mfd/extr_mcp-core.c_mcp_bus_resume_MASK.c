
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp_driver {int (* resume ) (struct mcp*) ;} ;
struct mcp {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct mcp*) ;
 struct mcp* FUNC_1 (struct device*) ;
 struct mcp_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct mcp *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 if (VAR_0->driver) {
  struct mcp_driver *VAR_3 = FUNC_2(VAR_0->driver);

  VAR_2 = VAR_3->resume(VAR_1);
 }
 return VAR_2;
}
