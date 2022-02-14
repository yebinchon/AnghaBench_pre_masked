
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sh2coretype; scalar_t__ skip_load; scalar_t__ basetime; scalar_t__ clocksync; int videoformattype; scalar_t__ frameskip; int * cartpath; int * mpegpath; int * buppath; int * cdpath; int * biospath; int regionid; int carttype; int cdcoretype; int sndcoretype; int m68kcoretype; int vidcoretype; int percoretype; } ;
typedef TYPE_1__ yabauseinit_struct ;
struct TYPE_5__ {int (* HandleEvents ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 () ;

int FUNC_2(int VAR_11) {
    yabauseinit_struct VAR_12;

    VAR_12.percoretype = VAR_3;
    VAR_12.sh2coretype = VAR_11;
    VAR_12.vidcoretype = VAR_7;
    VAR_12.m68kcoretype = VAR_2;
    VAR_12.sndcoretype = VAR_6;
    VAR_12.cdcoretype = VAR_1;
    VAR_12.carttype = VAR_0;
    VAR_12.regionid = VAR_5;
    VAR_12.biospath = VAR_10 ? ((void*)0) : VAR_9;
    VAR_12.cdpath = ((void*)0);
    VAR_12.buppath = ((void*)0);
    VAR_12.mpegpath = ((void*)0);
    VAR_12.cartpath = ((void*)0);
    VAR_12.frameskip = 0;
    VAR_12.videoformattype = VAR_8;
    VAR_12.clocksync = 0;
    VAR_12.basetime = 0;
    VAR_12.skip_load = 0;

    if(FUNC_0(&VAR_12) != 0)
      return -1;

    for(;;) {
        VAR_4->HandleEvents();
    }

    return 0;
}
