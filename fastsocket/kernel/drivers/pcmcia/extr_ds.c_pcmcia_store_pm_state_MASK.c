
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ suspended; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,int) ;
 struct pcmcia_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct pcmcia_device *VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = 0;

        if (!VAR_4)
                return -VAR_0;

 if ((!VAR_5->suspended) && !FUNC_2(VAR_3, "off", 3))
  VAR_6 = FUNC_1(VAR_1);
 else if (VAR_5->suspended && !FUNC_2(VAR_3, "on", 2))
  FUNC_0(VAR_1);

 return VAR_6 ? VAR_6 : VAR_4;
}
