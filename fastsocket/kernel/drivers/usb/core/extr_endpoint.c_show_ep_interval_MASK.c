
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ep_device {TYPE_1__* udev; TYPE_2__* desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned int bEndpointAddress; unsigned int bInterval; } ;
struct TYPE_3__ {scalar_t__ speed; } ;


 unsigned int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,unsigned int,char) ;
 struct ep_device* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct ep_device *VAR_5 = FUNC_1(VAR_2);
 char VAR_6;
 unsigned VAR_7 = 0;
 unsigned VAR_8;

 VAR_8 = (VAR_5->desc->bEndpointAddress & VAR_0);

 switch (FUNC_2(VAR_5->desc)) {
 case 130:
  if (VAR_5->udev->speed == VAR_1)
   VAR_7 = VAR_5->desc->bInterval;
  break;
 case 128:
  VAR_7 = 1 << (VAR_5->desc->bInterval - 1);
  break;
 case 131:
  if (VAR_5->udev->speed == VAR_1 && !VAR_8)
   VAR_7 = VAR_5->desc->bInterval;
  break;
 case 129:
  if (VAR_5->udev->speed == VAR_1)
   VAR_7 = 1 << (VAR_5->desc->bInterval - 1);
  else
   VAR_7 = VAR_5->desc->bInterval;
  break;
 }
 VAR_7 *= (VAR_5->udev->speed == VAR_1) ? 125 : 1000;
 if (VAR_7 % 1000)
  VAR_6 = 'u';
 else {
  VAR_6 = 'm';
  VAR_7 /= 1000;
 }

 return FUNC_0(VAR_4, "%d%cs\n", VAR_7, VAR_6);
}
