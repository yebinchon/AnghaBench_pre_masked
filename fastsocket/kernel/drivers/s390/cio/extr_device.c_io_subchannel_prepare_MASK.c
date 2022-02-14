
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dummy; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ccw_device* FUNC_1 (struct subchannel*) ;

__attribute__((used)) static int FUNC_2(struct subchannel *VAR_1)
{
 struct ccw_device *VAR_2;




 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 && !FUNC_0(&VAR_2->dev))
  return -VAR_0;
 return 0;
}
