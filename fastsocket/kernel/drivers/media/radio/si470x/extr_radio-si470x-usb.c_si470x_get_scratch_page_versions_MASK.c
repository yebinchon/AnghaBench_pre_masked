
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {unsigned char software_version; unsigned char hardware_version; TYPE_1__* intf; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct si470x_device*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct si470x_device *VAR_3)
{
 unsigned char VAR_4[VAR_2];
 int VAR_5;

 VAR_4[0] = VAR_1;

 VAR_5 = FUNC_1(VAR_3, (void *) &VAR_4, sizeof(VAR_4));

 if (VAR_5 < 0)
  FUNC_0(&VAR_3->intf->dev, "si470x_get_scratch: "
   "si470x_get_report returned %d\n", VAR_5);
 else {
  VAR_3->software_version = VAR_4[1];
  VAR_3->hardware_version = VAR_4[2];
 }

 return (VAR_5 < 0) ? -VAR_0 : 0;
}
