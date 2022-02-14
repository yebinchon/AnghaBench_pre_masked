
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int jogdial; int wireless; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3, pm_message_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2.wireless, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_2.jogdial, VAR_0);
 if (VAR_5)
  return VAR_5;

 return VAR_5;
}
