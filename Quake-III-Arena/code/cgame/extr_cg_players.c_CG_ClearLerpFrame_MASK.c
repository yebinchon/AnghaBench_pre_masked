
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* animation; int frame; int oldFrame; int oldFrameTime; int frameTime; } ;
typedef TYPE_2__ lerpFrame_t ;
typedef int clientInfo_t ;
struct TYPE_8__ {int time; } ;
struct TYPE_6__ {int firstFrame; } ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_1( clientInfo_t *VAR_1, lerpFrame_t *VAR_2, int VAR_3 ) {
 VAR_2->frameTime = VAR_2->oldFrameTime = VAR_0.time;
 FUNC_0( VAR_1, VAR_2, VAR_3 );
 VAR_2->oldFrame = VAR_2->frame = VAR_2->animation->firstFrame;
}
