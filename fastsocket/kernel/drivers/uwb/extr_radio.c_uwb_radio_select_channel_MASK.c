
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {scalar_t__ active_pals; int beaconing_forced; } ;



__attribute__((used)) static int FUNC_0(struct uwb_rc *VAR_0)
{




 if (VAR_0->active_pals == 0)
  return -1;
 if (VAR_0->beaconing_forced)
  return VAR_0->beaconing_forced;
 return 9;
}
