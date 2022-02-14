
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int nasid; } ;
struct cx_dev {TYPE_1__ cx_id; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cx_dev*) ;
 struct cx_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5,
       size_t VAR_6)
{
 int VAR_7;
 struct cx_dev *VAR_8 = FUNC_4(VAR_3);

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_6 <= 0)
  return 0;

 VAR_7 = FUNC_1(VAR_5, ((void*)0), 0);

 switch (VAR_7) {
 case 1:
  FUNC_2(VAR_8->cx_id.nasid, VAR_2);
  FUNC_3(VAR_8);
  break;
 case 2:
  FUNC_3(VAR_8);
  break;
 case 3:
  FUNC_2(VAR_8->cx_id.nasid, VAR_2);
  break;
 default:
  break;
 }

 return VAR_6;
}
