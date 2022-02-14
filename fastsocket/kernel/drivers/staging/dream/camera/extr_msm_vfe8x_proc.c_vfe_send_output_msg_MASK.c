
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {int redBlueDefectPixelCount; int greenDefectPixelCount; } ;
struct TYPE_9__ {int asfMaxEdge; int asfHbiCount; } ;
struct vfe_msg_output {int frameCounter; TYPE_2__ bpcInfo; TYPE_4__ asfInfo; void* cbcrBuffer; void* yBuffer; } ;
typedef scalar_t__ boolean ;
struct TYPE_8__ {int redBlueDefectPixelCount; int greenDefectPixelCount; } ;
struct TYPE_6__ {int asfMaxEdge; int asfHbiCount; } ;
struct TYPE_10__ {int vfeFrameId; TYPE_3__ vfeBpcFrameInfo; TYPE_1__ vfeAsfFrameInfo; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (struct vfe_msg_output*) ;
 int FUNC_1 (struct vfe_msg_output*) ;

__attribute__((used)) static void FUNC_2(boolean VAR_1,
 uint32_t VAR_2, uint32_t VAR_3)
{
 struct vfe_msg_output VAR_4;

 VAR_4.yBuffer = VAR_2;
 VAR_4.cbcrBuffer = VAR_3;
 VAR_4.frameCounter = VAR_0->vfeFrameId;

 if (VAR_1) {

  FUNC_1(&VAR_4);
 } else {

  FUNC_0(&VAR_4);
 }
}
