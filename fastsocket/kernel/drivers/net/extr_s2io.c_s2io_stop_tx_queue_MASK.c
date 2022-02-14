
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* fifos; } ;
struct TYPE_4__ {int multiq; } ;
struct s2io_nic {int dev; TYPE_3__ mac_control; TYPE_1__ config; } ;
struct TYPE_5__ {int queue_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct s2io_nic *VAR_1, int VAR_2)
{
 if (!VAR_1->config.multiq)
  VAR_1->mac_control.fifos[VAR_2].queue_state =
   VAR_0;

 FUNC_0(VAR_1->dev);
}
