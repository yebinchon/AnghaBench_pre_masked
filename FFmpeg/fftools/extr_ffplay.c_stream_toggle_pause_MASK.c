
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {double last_updated; int paused; int serial; } ;
struct TYPE_6__ {int paused; } ;
struct TYPE_7__ {int paused; scalar_t__ read_pause_return; TYPE_4__ extclk; TYPE_4__ vidclk; TYPE_1__ audclk; int frame_timer; } ;
typedef TYPE_2__ VideoState ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 double FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(VideoState *VAR_1)
{
    if (VAR_1->paused) {
        VAR_1->frame_timer += FUNC_1() / 1000000.0 - VAR_1->vidclk.last_updated;
        if (VAR_1->read_pause_return != FUNC_0(VAR_0)) {
            VAR_1->vidclk.paused = 0;
        }
        FUNC_3(&VAR_1->vidclk, FUNC_2(&VAR_1->vidclk), VAR_1->vidclk.serial);
    }
    FUNC_3(&VAR_1->extclk, FUNC_2(&VAR_1->extclk), VAR_1->extclk.serial);
    VAR_1->paused = VAR_1->audclk.paused = VAR_1->vidclk.paused = VAR_1->extclk.paused = !VAR_1->paused;
}
