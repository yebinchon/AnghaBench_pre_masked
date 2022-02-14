
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; } ;
struct xb_find_info {struct xenbus_device* dev; int nodename; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 struct xenbus_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct xenbus_device *VAR_2 = FUNC_2(VAR_0);
 struct xb_find_info *VAR_3 = VAR_1;

 if (!FUNC_1(VAR_2->nodename, VAR_3->nodename)) {
  VAR_3->dev = VAR_2;
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
