
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pcf50633_mbc {int pcf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct pcf50633_mbc* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_5, struct device_attribute *VAR_6, char *VAR_7)
{
 struct pcf50633_mbc *VAR_8 = FUNC_0(VAR_5);
 u8 VAR_9 = FUNC_1(VAR_8->pcf, VAR_4) &
      VAR_3;
 unsigned int VAR_10;

 if (VAR_9 == VAR_0)
  VAR_10 = 1000;
 else if (VAR_9 == VAR_2)
  VAR_10 = 500;
 else if (VAR_9 == VAR_1)
  VAR_10 = 100;
 else
  VAR_10 = 0;

 return FUNC_2(VAR_7, "%u\n", VAR_10);
}
