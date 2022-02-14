
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct subchannel {int dev; } ;


 scalar_t__ FUNC_0 (struct subchannel*) ;
 int FUNC_1 (struct subchannel*) ;
 struct subchannel* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct subchannel_id) ;
 struct subchannel* FUNC_4 (struct subchannel_id) ;
 int FUNC_5 (struct subchannel*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct subchannel_id VAR_0)
{
 int VAR_1;
 struct subchannel *VAR_2;

 if (FUNC_3(VAR_0))
  VAR_2 = FUNC_2();
 else {
  VAR_2 = FUNC_4(VAR_0);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
 }
 VAR_1 = FUNC_5(VAR_2);
 if (VAR_1) {
  if (!FUNC_3(VAR_0))
   FUNC_6(&VAR_2->dev);
 }
 return VAR_1;
}
