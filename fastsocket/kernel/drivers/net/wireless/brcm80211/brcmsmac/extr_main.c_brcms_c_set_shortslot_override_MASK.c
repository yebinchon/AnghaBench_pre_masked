
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {scalar_t__ shortslot_override; int shortslot; TYPE_2__* pub; TYPE_1__* band; } ;
typedef scalar_t__ s8 ;
struct TYPE_4__ {scalar_t__ up; scalar_t__ associated; } ;
struct TYPE_3__ {scalar_t__ bandtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct brcms_c_info*,int) ;

void FUNC_1(struct brcms_c_info *VAR_3, s8 VAR_4)
{
 VAR_3->shortslot_override = VAR_4;





 if (VAR_3->band->bandtype == VAR_2)
  return;

 if (VAR_3->pub->up && VAR_3->pub->associated) {

 } else if (VAR_3->pub->up) {

  FUNC_0(VAR_3, 0);
 } else {


  if (VAR_3->shortslot_override == VAR_0)
   VAR_3->shortslot = 0;
  else
   VAR_3->shortslot =
       (VAR_3->shortslot_override ==
        VAR_1);
 }
}
