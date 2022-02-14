
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int type; int flags; } ;
typedef int MatroskaVideoStereoModeType ;
typedef int AVStream ;
typedef TYPE_1__ AVStereo3D ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__**) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *,int ,int *,int) ;

int FUNC_4(AVStream *VAR_10, MatroskaVideoStereoModeType VAR_11)
{
    AVStereo3D *VAR_12;
    int VAR_13;

    VAR_12 = FUNC_2();
    if (!VAR_12)
        return FUNC_0(VAR_9);


    switch (VAR_11) {
    case 132:
        VAR_12->type = VAR_1;
        break;
    case 131:
        VAR_12->flags |= VAR_4;
    case 133:
        VAR_12->type = VAR_7;
        break;
    case 138:
        VAR_12->flags |= VAR_4;
    case 128:
        VAR_12->type = VAR_8;
        break;
    case 136:
        VAR_12->flags |= VAR_4;
    case 137:
        VAR_12->type = VAR_2;
        break;
    case 129:
        VAR_12->flags |= VAR_4;
    case 130:
        VAR_12->type = VAR_6;
        break;
    case 134:
        VAR_12->flags |= VAR_4;
    case 135:
        VAR_12->type = VAR_3;
        break;
    case 139:
        VAR_12->flags |= VAR_4;
    case 140:
        VAR_12->type = VAR_5;
        break;
    }

    VAR_13 = FUNC_3(VAR_10, VAR_0, (uint8_t *)VAR_12,
                                  sizeof(*VAR_12));
    if (VAR_13 < 0) {
        FUNC_1(&VAR_12);
        return VAR_13;
    }

    return 0;
}
