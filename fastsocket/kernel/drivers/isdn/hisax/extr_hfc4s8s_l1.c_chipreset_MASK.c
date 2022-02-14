
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_9__ {scalar_t__ r_irq_ctrl; } ;
struct TYPE_7__ {int clock_mode; } ;
struct TYPE_8__ {TYPE_4__ mr; TYPE_1__ driver_data; int lock; } ;
typedef TYPE_2__ hfc4s8s_hw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(hfc4s8s_hw * VAR_12)
{
 u_long VAR_13;

 FUNC_2(&VAR_12->lock, VAR_13);
 FUNC_0(VAR_12, VAR_6, 0);
 FUNC_0(VAR_12, VAR_9, 0);
 FUNC_0(VAR_12, VAR_7, 0);
 FUNC_0(VAR_12, VAR_5, VAR_3);
 VAR_12->mr.r_irq_ctrl = 0;
 FUNC_3(&VAR_12->lock, VAR_13);

 FUNC_4(3);
 FUNC_0(VAR_12, VAR_5, 0);
 FUNC_5(VAR_12);

 FUNC_0(VAR_12, VAR_8, VAR_2);
 FUNC_0(VAR_12, VAR_9, VAR_0);
 if (VAR_12->driver_data.clock_mode == 1)
  FUNC_0(VAR_12, VAR_4, VAR_1);
 FUNC_0(VAR_12, VAR_10, VAR_11);

 FUNC_1(&VAR_12->mr, 0, sizeof(VAR_12->mr));
}
