
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ext_mode; int update_mode; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int ,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4)
{
 FUNC_0(VAR_2.fbdev->dev,
  "plane %d enable %d update_mode %d ext_mode %d\n",
  VAR_3, VAR_4, VAR_2.update_mode, VAR_2.ext_mode);
 if (VAR_3 != VAR_1)
  return -VAR_0;

 return 0;
}
