
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int actl; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_2__ scsw; } ;
struct subchannel {TYPE_3__ schib; int schid; int dev; } ;
typedef int ccode ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *) ;

int
FUNC_4(struct subchannel *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(2, "clearIO");
 FUNC_1(2, FUNC_3(&VAR_2->dev));




 VAR_3 = FUNC_2 (VAR_2->schid);

 FUNC_0(2, &VAR_3, sizeof(VAR_3));

 switch (VAR_3) {
 case 0:
  VAR_2->schib.scsw.cmd.actl |= VAR_1;
  return 0;
 default:
  return -VAR_0;
 }
}
