
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct slot {int hotplug_slot; int devfn; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int*) ;
 scalar_t__ FUNC_4 (int ,int ,int,int) ;

int FUNC_5(struct slot* VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_2(VAR_3->bus,
      VAR_3->devfn,
      VAR_2);
 if (!VAR_4)
  return -VAR_0;
 if (FUNC_3(VAR_3->bus,
         VAR_3->devfn,
         VAR_4 + 2,
         &VAR_5))
  return -VAR_0;
 if (VAR_5 & VAR_1) {
  VAR_5 &= ~VAR_1;
  if (FUNC_4(VAR_3->bus,
           VAR_3->devfn,
           VAR_4 + 2,
           VAR_5)) {
   FUNC_0("Could not clear LOO for slot %s",
       FUNC_1(VAR_3->hotplug_slot));
   return -VAR_0;
  }
 }
 return 0;
}
