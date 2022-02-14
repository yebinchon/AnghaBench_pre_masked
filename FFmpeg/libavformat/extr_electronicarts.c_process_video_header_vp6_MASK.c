
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* num; void* den; } ;
struct TYPE_8__ {int codec; TYPE_1__ time_base; void* nb_frames; } ;
typedef TYPE_2__ VideoProperties ;
struct TYPE_9__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, VideoProperties *VAR_4)
{
    AVIOContext *VAR_5 = VAR_3->pb;

    FUNC_2(VAR_5, 8);
    VAR_4->nb_frames = FUNC_1(VAR_5);
    FUNC_2(VAR_5, 4);
    VAR_4->time_base.den = FUNC_1(VAR_5);
    VAR_4->time_base.num = FUNC_1(VAR_5);
    if (VAR_4->time_base.den <= 0 || VAR_4->time_base.num <= 0) {
        FUNC_0(VAR_3, VAR_2, "Timebase is invalid\n");
        return VAR_0;
    }
    VAR_4->codec = VAR_1;

    return 1;
}
