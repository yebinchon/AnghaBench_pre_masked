
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct uwb_dev {struct uwb_rc* rc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*) ;
 struct uwb_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct uwb_rc*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct uwb_dev *VAR_5 = FUNC_1(VAR_1);
 struct uwb_rc *VAR_6 = VAR_5->rc;
 int VAR_7;
 ssize_t VAR_8 = -VAR_0;

 VAR_8 = FUNC_0(VAR_3, "%d", &VAR_7);
 if (VAR_8 >= 1)
  VAR_8 = FUNC_2(VAR_6, VAR_7);

 return VAR_8 < 0 ? VAR_8 : VAR_4;
}
