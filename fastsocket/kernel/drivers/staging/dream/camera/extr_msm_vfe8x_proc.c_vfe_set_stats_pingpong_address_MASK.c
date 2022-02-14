
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vfe_stats_control {int * hwRegPongAddress; int * hwRegPingAddress; } ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct vfe_stats_control *VAR_5,
 struct vfe_stats_control *VAR_6)
{
 VAR_5->hwRegPingAddress = (uint8_t *)
  (VAR_4->vfebase + VAR_0);
 VAR_5->hwRegPongAddress = (uint8_t *)
  (VAR_4->vfebase + VAR_1);

 VAR_6->hwRegPingAddress = (uint8_t *)
  (VAR_4->vfebase + VAR_2);
 VAR_6->hwRegPongAddress = (uint8_t *)
  (VAR_4->vfebase + VAR_3);
}
