
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_hardware {int up; TYPE_2__* wlc; TYPE_1__* band; } ;
struct TYPE_4__ {int wl; } ;
struct TYPE_3__ {int pi; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_hardware*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct brcms_hardware *VAR_1)
{
 VAR_1->up = 1;
 FUNC_2(VAR_1->band->pi, 1);


 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1->wlc->wl);
 return 0;
}
