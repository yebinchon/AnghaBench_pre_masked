
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_hardware {int shortslot; int wlc; scalar_t__ up; TYPE_1__* band; } ;
struct TYPE_2__ {scalar_t__ bandtype; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct brcms_hardware*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_hardware *VAR_1, bool VAR_2)
{
 VAR_1->shortslot = VAR_2;

 if (VAR_1->band->bandtype == VAR_0 && VAR_1->up) {
  FUNC_2(VAR_1->wlc);
  FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_1->wlc);
 }
}
