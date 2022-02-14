
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp {int dummy; } ;
struct uwb_dev {int dummy; } ;
struct device {int dummy; } ;


 struct uwb_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct wlp*,struct uwb_dev*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct wlp *VAR_2 = VAR_1;
 struct uwb_dev *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_3);
}
