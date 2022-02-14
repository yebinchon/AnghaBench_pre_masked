
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev {int rc; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct uwb_dev*,int ) ;
 struct uwb_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct uwb_dev *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_2->rc);
}
