
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc390_acb {TYPE_2__* pActiveDCB; } ;
struct TYPE_4__ {TYPE_1__* pActiveSRB; } ;
struct TYPE_3__ {int SRBState; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void __inline__
FUNC_1(struct dc390_acb* VAR_4)
{
 if (VAR_4->pActiveDCB->pActiveSRB->SRBState & (VAR_2 | VAR_1))
  FUNC_0(VAR_3, VAR_0);
}
