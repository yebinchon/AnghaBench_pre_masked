
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dc_pad* platform_data; } ;
struct input_dev {TYPE_1__ dev; } ;
struct dc_pad {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_3)
{
 struct dc_pad *VAR_4 = VAR_3->dev.platform_data;

 FUNC_0(VAR_4->mdev, VAR_2, VAR_0/20,
  VAR_1);

 return 0;
}
