
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int mute; int mainloop; int last_volume; int stream; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,double) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_2, int VAR_3,
                                 void *VAR_4, size_t VAR_5)
{
    PulseData *VAR_6 = VAR_2->priv_data;
    int VAR_7;

    switch(VAR_3) {
    case 133:
        return FUNC_5(VAR_6, 1);
    case 132:
        return FUNC_5(VAR_6, 0);
    case 129:
        return FUNC_5(VAR_6, !FUNC_1(VAR_6->stream));
    case 134:
        if (!VAR_6->mute) {
            VAR_6->mute = 1;
            return FUNC_4(VAR_6);
        }
        return 0;
    case 128:
        if (VAR_6->mute) {
            VAR_6->mute = 0;
            return FUNC_4(VAR_6);
        }
        return 0;
    case 130:
        VAR_6->mute = !VAR_6->mute;
        return FUNC_4(VAR_6);
    case 131:
        return FUNC_6(VAR_6, *(double *)VAR_4);
    case 135:
        VAR_6->last_volume = VAR_1;
        FUNC_2(VAR_6->mainloop);
        VAR_7 = FUNC_7(VAR_2);
        FUNC_3(VAR_6->mainloop);
        return VAR_7;
    case 136:
        VAR_6->mute = -1;
        FUNC_2(VAR_6->mainloop);
        VAR_7 = FUNC_7(VAR_2);
        FUNC_3(VAR_6->mainloop);
        return VAR_7;
    default:
        break;
    }
    return FUNC_0(VAR_0);
}
