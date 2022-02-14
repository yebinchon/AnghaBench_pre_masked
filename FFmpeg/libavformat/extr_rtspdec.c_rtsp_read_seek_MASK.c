
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int state; int seek_timestamp; } ;
struct TYPE_7__ {int time_base; } ;
typedef TYPE_2__ RTSPState ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, int VAR_3,
                          int64_t VAR_4, int VAR_5)
{
    RTSPState *VAR_6 = VAR_2->priv_data;
    int VAR_7;

    VAR_6->seek_timestamp = FUNC_0(VAR_4,
                                      VAR_2->streams[VAR_3]->time_base,
                                      VAR_0);
    switch(VAR_6->state) {
    default:
    case 130:
        break;
    case 128:
        if ((VAR_7 = FUNC_1(VAR_2)) != 0)
            return VAR_7;
        VAR_6->state = VAR_1;
        if ((VAR_7 = FUNC_2(VAR_2)) != 0)
            return VAR_7;
        break;
    case 129:
        VAR_6->state = 130;
        break;
    }
    return 0;
}
