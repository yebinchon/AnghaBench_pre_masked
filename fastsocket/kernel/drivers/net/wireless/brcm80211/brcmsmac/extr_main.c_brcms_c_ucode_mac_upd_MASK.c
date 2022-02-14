
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {scalar_t__ home_chanspec; int hw; TYPE_2__* band; TYPE_1__* pub; } ;
struct TYPE_4__ {int pi; } ;
struct TYPE_3__ {scalar_t__ associated; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_1)
{



 if (VAR_1->home_chanspec == FUNC_2(VAR_1->band->pi)) {
  if (VAR_1->pub->associated) {
   if (FUNC_0(VAR_1->band))
    FUNC_1(VAR_1->hw,
      VAR_0, 0);
  }
 } else {

 }
}
