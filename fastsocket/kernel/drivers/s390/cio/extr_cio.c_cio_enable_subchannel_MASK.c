
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ena; scalar_t__ csense; int intparm; int isc; } ;
struct subchannel {int schid; TYPE_1__ config; int isc; int dev; } ;
struct irb {int dummy; } ;
typedef int ret ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct subchannel*) ;
 scalar_t__ FUNC_6 (int ,struct irb*) ;

int FUNC_7(struct subchannel *VAR_4, u32 VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_1(2, "ensch");
 FUNC_1(2, FUNC_4(&VAR_4->dev));

 if (FUNC_5(VAR_4))
  return -VAR_1;
 if (FUNC_3(VAR_4))
  return -VAR_3;

 VAR_4->config.ena = 1;
 VAR_4->config.isc = VAR_4->isc;
 VAR_4->config.intparm = VAR_5;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 == -VAR_2) {




   VAR_4->config.csense = 0;
  } else if (VAR_7 == -VAR_0) {
   struct irb VAR_8;
   if (FUNC_6(VAR_4->schid, &VAR_8) != 0)
    break;
  } else
   break;
 }
 FUNC_0(2, &VAR_7, sizeof(VAR_7));
 return VAR_7;
}
