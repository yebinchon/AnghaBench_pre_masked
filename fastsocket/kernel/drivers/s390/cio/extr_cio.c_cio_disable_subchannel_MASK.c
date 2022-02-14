
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ena; } ;
struct subchannel {int schid; TYPE_1__ config; int dev; } ;
struct irb {int dummy; } ;
typedef int ret ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct subchannel*) ;
 scalar_t__ FUNC_6 (int ,struct irb*) ;

int FUNC_7(struct subchannel *VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_1(2, "dissch");
 FUNC_1(2, FUNC_4(&VAR_2->dev));

 if (FUNC_5(VAR_2))
  return 0;
 if (FUNC_3(VAR_2))
  return -VAR_1;

 VAR_2->config.ena = 0;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 == -VAR_0) {
   struct irb VAR_5;
   if (FUNC_6(VAR_2->schid, &VAR_5) != 0)
    break;
  } else
   break;
 }
 FUNC_0(2, &VAR_4, sizeof(VAR_4));
 return VAR_4;
}
