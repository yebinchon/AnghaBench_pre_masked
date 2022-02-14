
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct video_viewport {scalar_t__ height; scalar_t__ y; scalar_t__ width; scalar_t__ x; int member_0; } ;
typedef int int16_t ;
struct TYPE_8__ {int y; int x; int member_0; } ;
typedef TYPE_2__ VPADTouchData ;
struct TYPE_7__ {scalar_t__ validity; int touched; } ;
struct TYPE_9__ {TYPE_1__ tpNormal; } ;
typedef TYPE_3__ VPADStatus ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,struct video_viewport*,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_3 (struct video_viewport*) ;

__attribute__((used)) static void FUNC_4(int16_t VAR_5[3][2], uint64_t *VAR_6, VPADStatus *VAR_7)
{
   VPADTouchData VAR_8 = {0};
   struct video_viewport VAR_9 = {0};
   bool VAR_10 = 0;

   if (!VAR_7->tpNormal.touched || VAR_7->tpNormal.validity != VAR_3)
   {
      *VAR_6 &= ~VAR_2;
      return;
   }

   FUNC_3(&VAR_9);
   FUNC_0(&VAR_8, VAR_7, &VAR_9, &VAR_10);

   VAR_5[VAR_4][VAR_0] = FUNC_2(
         VAR_9.x, VAR_9.x + VAR_9.width, -0x7fff, 0x7fff, VAR_8.x);
   VAR_5[VAR_4][VAR_1] = FUNC_2(
         VAR_9.y, VAR_9.y + VAR_9.height, -0x7fff, 0x7fff, VAR_8.y);






   if (!VAR_10)
      *VAR_6 |= VAR_2;
   else
      *VAR_6 &= ~VAR_2;
}
