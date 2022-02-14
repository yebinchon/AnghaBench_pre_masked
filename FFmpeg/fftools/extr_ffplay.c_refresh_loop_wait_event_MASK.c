
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {scalar_t__ show_mode; scalar_t__ force_refresh; int paused; } ;
typedef TYPE_1__ VideoState ;
typedef int SDL_Event ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_1__*,double*) ;

__attribute__((used)) static void FUNC_6(VideoState *VAR_8, SDL_Event *VAR_9) {
    double VAR_10 = 0.0;
    FUNC_1();
    while (!FUNC_0(VAR_9, 1, VAR_3, VAR_2, VAR_4)) {
        if (!VAR_6 && FUNC_3() - VAR_7 > VAR_0) {
            FUNC_2(0);
            VAR_6 = 1;
        }
        if (VAR_10 > 0.0)
            FUNC_4((int64_t)(VAR_10 * 1000000.0));
        VAR_10 = VAR_1;
        if (VAR_8->show_mode != VAR_5 && (!VAR_8->paused || VAR_8->force_refresh))
            FUNC_5(VAR_8, &VAR_10);
        FUNC_1();
    }
}
