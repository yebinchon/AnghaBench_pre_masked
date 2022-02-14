
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {char* nodename; } ;
struct xb_find_info {char* nodename; struct xenbus_device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 struct xenbus_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, void *VAR_1)
{
 struct xenbus_device *VAR_2 = FUNC_4(VAR_0);
 struct xb_find_info *VAR_3 = VAR_1;
 int VAR_4 = FUNC_2(VAR_3->nodename);

 FUNC_0("%s", VAR_3->nodename);


 if (FUNC_3(VAR_2->nodename, VAR_3->nodename, VAR_4))
  return 0;


 if ((FUNC_2(VAR_2->nodename) > VAR_4) && (VAR_2->nodename[VAR_4] != '/'))
  return 0;

 VAR_3->dev = VAR_2;
 FUNC_1(VAR_0);
 return 1;
}
