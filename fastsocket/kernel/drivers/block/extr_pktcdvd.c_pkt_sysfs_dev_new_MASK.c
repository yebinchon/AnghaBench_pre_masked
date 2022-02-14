
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pktcdvd_device {TYPE_1__* dev; void* kobj_wqueue; void* kobj_stat; int name; } ;
struct TYPE_3__ {int kobj; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (scalar_t__,int *,int ,int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (struct pktcdvd_device*,char*,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct pktcdvd_device *VAR_3)
{
 if (VAR_0) {
  VAR_3->dev = FUNC_2(VAR_0, ((void*)0), FUNC_1(0, 0), ((void*)0),
     "%s", VAR_3->name);
  if (FUNC_0(VAR_3->dev))
   VAR_3->dev = ((void*)0);
 }
 if (VAR_3->dev) {
  VAR_3->kobj_stat = FUNC_3(VAR_3, "stat",
     &VAR_3->dev->kobj,
     &VAR_1);
  VAR_3->kobj_wqueue = FUNC_3(VAR_3, "write_queue",
     &VAR_3->dev->kobj,
     &VAR_2);
 }
}
