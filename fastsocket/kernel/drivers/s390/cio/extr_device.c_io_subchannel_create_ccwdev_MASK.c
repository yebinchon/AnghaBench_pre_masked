
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dummy; } ;
struct ccw_device {int dummy; } ;


 struct ccw_device* FUNC_0 (int) ;
 int FUNC_1 (struct ccw_device*) ;
 struct ccw_device* FUNC_2 (struct subchannel*) ;
 int FUNC_3 (struct subchannel*,struct ccw_device*) ;

__attribute__((used)) static struct ccw_device * FUNC_4(struct subchannel *VAR_0)
{
 struct ccw_device *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (!FUNC_1(VAR_1)) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2)
   VAR_1 = FUNC_0(VAR_2);
 }
 return VAR_1;
}
