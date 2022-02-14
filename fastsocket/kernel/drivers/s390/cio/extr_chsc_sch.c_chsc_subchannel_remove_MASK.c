
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int dev; struct chsc_private* private; } ;
struct chsc_private {TYPE_1__* request; } ;
struct TYPE_2__ {int completion; } ;


 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct chsc_private*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct subchannel *VAR_0)
{
 struct chsc_private *VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->private;
 VAR_0->private = ((void*)0);
 if (VAR_1->request) {
  FUNC_1(&VAR_1->request->completion);
  FUNC_3(&VAR_0->dev);
 }
 FUNC_2(VAR_1);
 return 0;
}
