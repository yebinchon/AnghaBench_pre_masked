
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dev; } ;
struct ccw_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccw_device*,int ) ;
 char* FUNC_2 (int *) ;
 struct ccw_device* FUNC_3 (struct subchannel*) ;

__attribute__((used)) static void FUNC_4(struct subchannel *VAR_1)
{
 struct ccw_device *VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(6, "IRQ");
 FUNC_0(6, FUNC_2(&VAR_1->dev));
 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
}
