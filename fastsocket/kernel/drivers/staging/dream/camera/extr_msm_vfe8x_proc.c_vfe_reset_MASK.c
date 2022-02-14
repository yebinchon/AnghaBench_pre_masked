
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resetAckIrq; } ;
struct TYPE_4__ {scalar_t__ vfebase; int vfeImaskPacked; TYPE_1__ vfeImaskLocal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(void)
{
 FUNC_1();

 VAR_8->vfeImaskLocal.resetAckIrq = VAR_0;
 VAR_8->vfeImaskPacked = FUNC_0(VAR_8->vfeImaskLocal);


 FUNC_2(VAR_2,
  VAR_8->vfebase + VAR_5);


 FUNC_2(VAR_1,
  VAR_8->vfebase + VAR_4);


 FUNC_2(VAR_8->vfeImaskPacked,
  VAR_8->vfebase + VAR_6);

 FUNC_2(VAR_7,
  VAR_8->vfebase + VAR_3);
}
