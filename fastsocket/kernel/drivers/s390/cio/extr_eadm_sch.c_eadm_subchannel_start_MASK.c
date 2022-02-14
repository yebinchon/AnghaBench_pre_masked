
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int key; void* intparm; void* aob; } ;
union orb {TYPE_1__ eadm; } ;
typedef void* u32 ;
struct TYPE_7__ {int actl; } ;
struct TYPE_8__ {TYPE_2__ eadm; } ;
struct TYPE_9__ {TYPE_3__ scsw; } ;
struct subchannel {TYPE_4__ schib; int schid; } ;
struct aob {int dummy; } ;
typedef scalar_t__ addr_t ;
struct TYPE_10__ {union orb orb; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct aob*) ;
 TYPE_5__* FUNC_3 (struct subchannel*) ;
 int FUNC_4 (union orb*) ;
 int FUNC_5 (int ,union orb*) ;

__attribute__((used)) static int FUNC_6(struct subchannel *VAR_4, struct aob *VAR_5)
{
 union orb *VAR_6 = &FUNC_3(VAR_4)->orb;
 int VAR_7;

 FUNC_4(VAR_6);
 VAR_6->eadm.aob = (u32)FUNC_2(VAR_5);
 VAR_6->eadm.intparm = (u32)(addr_t)VAR_4;
 VAR_6->eadm.key = VAR_2 >> 4;

 FUNC_0(6, "start");
 FUNC_1(6, &VAR_4->schid, sizeof(VAR_4->schid));

 VAR_7 = FUNC_5(VAR_4->schid, VAR_6);
 switch (VAR_7) {
 case 0:
  VAR_4->schib.scsw.eadm.actl |= VAR_3;
  break;
 case 1:
 case 2:
  return -VAR_0;
 case 3:
  return -VAR_1;
 }
 return 0;
}
