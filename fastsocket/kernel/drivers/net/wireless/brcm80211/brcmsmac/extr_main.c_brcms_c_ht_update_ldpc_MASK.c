
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_c_info {TYPE_3__* band; TYPE_2__* pub; TYPE_1__* stf; } ;
typedef scalar_t__ s8 ;
struct TYPE_6__ {int pi; } ;
struct TYPE_5__ {scalar_t__ up; } ;
struct TYPE_4__ {scalar_t__ ldpc; } ;


 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct brcms_c_info*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_0, s8 VAR_1)
{
 VAR_0->stf->ldpc = VAR_1;

 if (VAR_0->pub->up) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, 1);
  FUNC_2(VAR_0->band->pi, (VAR_1 ? 1 : 0));
 }
}
