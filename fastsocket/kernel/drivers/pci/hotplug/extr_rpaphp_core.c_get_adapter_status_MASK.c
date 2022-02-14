
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int state; } ;
struct hotplug_slot {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct slot*,int*) ;

__attribute__((used)) static int FUNC_1(struct hotplug_slot *VAR_3, u8 * VAR_4)
{
 struct slot *VAR_5 = (struct slot *)VAR_3->private;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5, &VAR_7);

 *VAR_4 = VAR_1;
 if (VAR_6)
  return VAR_6;

 if (VAR_7 == VAR_0)
  *VAR_4 = VAR_0;
 else if (VAR_7 == VAR_2)
  *VAR_4 = VAR_5->state;

 return 0;
}
