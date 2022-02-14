
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int time_base; int avg_frame_rate; TYPE_1__* codecpar; } ;
struct TYPE_5__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3) {
    AVStream *VAR_4;

    VAR_4 = FUNC_2(VAR_3, ((void*)0));
    if (!VAR_4)
        return FUNC_0(VAR_2);
    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->codec_id = VAR_1;
    FUNC_3(VAR_4, 64, 1, 5);
    VAR_4->avg_frame_rate = FUNC_1(VAR_4->time_base);


    return 0;
}
