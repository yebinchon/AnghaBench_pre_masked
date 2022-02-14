
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_viewport {int full_height; int full_width; } ;
struct TYPE_6__ {void* y; void* x; int member_0; } ;
typedef TYPE_1__ VPADTouchData ;
struct TYPE_7__ {int tpNormal; } ;
typedef TYPE_2__ VPADStatus ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 void* FUNC_1 (int,int,int ,int ,void*) ;

__attribute__((used)) static void FUNC_2(VPADTouchData *VAR_1, struct video_viewport *VAR_2, VPADStatus *VAR_3)
{
   VPADTouchData VAR_4 = {0};

   FUNC_0(VAR_0, &VAR_4, &(VAR_3->tpNormal));
   VAR_1->x = FUNC_1(12, 1268, 0, VAR_2->full_width, VAR_4.x);
   VAR_1->y = FUNC_1(12, 708, 0, VAR_2->full_height, VAR_4.y);
}
