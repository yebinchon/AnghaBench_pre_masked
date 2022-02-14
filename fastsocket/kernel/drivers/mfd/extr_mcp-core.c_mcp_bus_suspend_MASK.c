
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp_driver {int (* suspend ) (struct mcp*,int ) ;} ;
struct mcp {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct mcp*,int ) ;
 struct mcp* FUNC_1 (struct device*) ;
 struct mcp_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct mcp *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 if (VAR_0->driver) {
  struct mcp_driver *VAR_4 = FUNC_2(VAR_0->driver);

  VAR_3 = VAR_4->suspend(VAR_2, VAR_1);
 }
 return VAR_3;
}
