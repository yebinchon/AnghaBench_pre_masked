
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * hwRegPongAddress; int * hwRegPingAddress; } ;
struct TYPE_4__ {int * hwRegPongAddress; int * hwRegPingAddress; } ;
struct vfe_output_path_combo {TYPE_2__ cbcrPath; TYPE_1__ yPath; } ;
struct TYPE_6__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;

__attribute__((used)) static void
FUNC_0(struct vfe_output_path_combo *VAR_9,
 struct vfe_output_path_combo *VAR_10)
{
 VAR_9->yPath.hwRegPingAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_6);
 VAR_9->yPath.hwRegPongAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_7);
 VAR_9->cbcrPath.hwRegPingAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_4);
 VAR_9->cbcrPath.hwRegPongAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_5);

 VAR_10->yPath.hwRegPingAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_2);
 VAR_10->yPath.hwRegPongAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_3);
 VAR_10->cbcrPath.hwRegPingAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_0);
 VAR_10->cbcrPath.hwRegPongAddress = (uint8_t *)
  (VAR_8->vfebase + VAR_1);
}
