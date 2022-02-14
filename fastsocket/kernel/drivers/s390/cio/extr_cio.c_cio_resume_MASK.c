
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
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (struct subchannel *VAR_4)
{
 int VAR_5;

 FUNC_1(4, "resIO");
 FUNC_1(4, FUNC_2(&VAR_4->dev));

 VAR_5 = FUNC_3 (VAR_4->schid);

 FUNC_0(4, &VAR_5, sizeof(VAR_5));

 switch (VAR_5) {
 case 0:
  VAR_4->schib.scsw.cmd.actl |= VAR_3;
  return 0;
 case 1:
  return -VAR_0;
 case 2:
  return -VAR_1;
 default:




  return -VAR_2;
 }
}
