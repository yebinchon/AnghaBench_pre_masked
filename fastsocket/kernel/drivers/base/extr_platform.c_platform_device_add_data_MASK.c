
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void const*,size_t,int ) ;

int FUNC_1(struct platform_device *VAR_2, const void *VAR_3,
        size_t VAR_4)
{
 void *VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1);

 if (VAR_5) {
  VAR_2->dev.platform_data = VAR_5;
  return 0;
 }
 return -VAR_0;
}
