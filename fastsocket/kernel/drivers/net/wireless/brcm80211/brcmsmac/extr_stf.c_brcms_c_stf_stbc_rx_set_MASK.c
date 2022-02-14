
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {TYPE_1__* stf; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int rxstreams; } ;


 scalar_t__ FUNC_0 (struct brcms_c_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct brcms_c_info*,scalar_t__) ;

bool FUNC_2(struct brcms_c_info *VAR_2, s32 VAR_3)
{
 if ((VAR_3 != VAR_0)
     && (VAR_3 != VAR_1))
  return 0;

 if (FUNC_0(VAR_2)) {
  if ((VAR_3 != VAR_0)
      && (VAR_2->stf->rxstreams == 1))
   return 0;
 }

 FUNC_1(VAR_2, VAR_3);
 return 1;
}
