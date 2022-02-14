
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_mbc {int pcf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct pcf50633_mbc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct pcf50633_mbc *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return -VAR_0;

 FUNC_1(VAR_5->pcf, VAR_6);

 return VAR_4;
}
