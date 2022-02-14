
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osst_tape {int capacity; scalar_t__ linux_media; scalar_t__ header_ok; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct osst_tape * VAR_4 = (struct osst_tape *) FUNC_0 (VAR_1);
 ssize_t VAR_5 = 0;

 if (VAR_4 && VAR_4->header_ok && VAR_4->linux_media)
  VAR_5 = FUNC_1(VAR_3, VAR_0, "%d\n", VAR_4->capacity);
 return VAR_5;
}
