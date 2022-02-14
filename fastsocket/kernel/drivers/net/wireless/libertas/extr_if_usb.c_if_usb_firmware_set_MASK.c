
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {struct if_usb_card* card; } ;
struct if_usb_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct if_usb_card*,char const*,int ) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct lbs_private *VAR_5 = FUNC_1(VAR_1)->ml_priv;
 struct if_usb_card *VAR_6 = VAR_5->card;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_0);
 if (VAR_7 == 0)
  return VAR_4;

 return VAR_7;
}
