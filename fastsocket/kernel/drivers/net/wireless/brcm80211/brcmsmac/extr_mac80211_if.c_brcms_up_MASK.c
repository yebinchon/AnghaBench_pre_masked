
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_info {int wlc; TYPE_1__* pub; } ;
struct TYPE_2__ {scalar_t__ up; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct brcms_info *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->pub->up)
  return 0;

 VAR_1 = FUNC_0(VAR_0->wlc);

 return VAR_1;
}
