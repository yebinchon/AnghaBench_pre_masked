
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep_device {TYPE_1__* desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int wMaxPacketSize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct ep_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct ep_device *VAR_3 = FUNC_2(VAR_0);
 return FUNC_1(VAR_2, "%04x\n",
   FUNC_0(VAR_3->desc->wMaxPacketSize) & 0x07ff);
}
