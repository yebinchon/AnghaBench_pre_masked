
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
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*,unsigned int*) ;
 struct uwb_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct uwb_rc*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct uwb_dev *VAR_6 = FUNC_1(VAR_2);
 struct uwb_rc *VAR_7 = VAR_6->rc;
 unsigned VAR_8;
 unsigned VAR_9;
 unsigned VAR_10 = 0;
 ssize_t VAR_11 = -VAR_0;

 VAR_11 = FUNC_0(VAR_4, "%u %u %u\n", &VAR_8, &VAR_9, &VAR_10);
 if (VAR_11 >= 2 && VAR_9 < VAR_1)
  VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);

 return VAR_11 < 0 ? VAR_11 : VAR_5;
}
