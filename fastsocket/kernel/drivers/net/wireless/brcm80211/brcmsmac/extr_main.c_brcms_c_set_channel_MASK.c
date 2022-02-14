
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_c_info {int bandinit_pending; TYPE_3__* band; TYPE_2__* pub; TYPE_1__* default_bss; int cmi; } ;
struct TYPE_6__ {scalar_t__ bandunit; int pi; } ;
struct TYPE_5__ {scalar_t__ up; } ;
struct TYPE_4__ {scalar_t__ chanspec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct brcms_c_info*,scalar_t__) ;
 int FUNC_2 (struct brcms_c_info*,scalar_t__) ;
 int FUNC_3 (struct brcms_c_info*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct brcms_c_info*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct brcms_c_info *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = FUNC_6(VAR_3);

 if (VAR_3 < 0 || VAR_3 > VAR_1)
  return -VAR_0;

 if (!FUNC_4(VAR_2->cmi, VAR_4))
  return -VAR_0;


 if (!VAR_2->pub->up && FUNC_5(VAR_2)) {
  if (VAR_2->band->bandunit != FUNC_7(VAR_4))
   VAR_2->bandinit_pending = 1;
  else
   VAR_2->bandinit_pending = 0;
 }

 VAR_2->default_bss->chanspec = VAR_4;


 if (VAR_2->pub->up && (FUNC_8(VAR_2->band->pi) != VAR_4)) {
  FUNC_2(VAR_2, VAR_4);
  FUNC_3(VAR_2);
  FUNC_1(VAR_2, VAR_4);
  FUNC_0(VAR_2);
 }
 return 0;
}
