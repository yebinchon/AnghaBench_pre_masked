
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int value; } ;
struct TYPE_14__ {int metadata; } ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ data; } ;
struct TYPE_12__ {int type; int flags; } ;
struct TYPE_11__ {int nb_side_data; TYPE_3__* side_data; int metadata; } ;
typedef int MatroskaVideoStereoModeType ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVStereo3D ;
typedef TYPE_3__ AVPacketSideData ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int * VAR_15 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_16, AVIOContext *VAR_17,
                                 AVStream *VAR_18, int VAR_19, int *VAR_20, int *VAR_21)
{
    int VAR_22;
    int VAR_23 = 0;
    AVDictionaryEntry *VAR_24;
    MatroskaVideoStereoModeType VAR_25 = VAR_10;

    *VAR_20 = 1;
    *VAR_21 = 1;

    if ((VAR_24 = FUNC_2(VAR_18->metadata, "stereo_mode", ((void*)0), 0)) ||
        (VAR_24 = FUNC_2( VAR_16->metadata, "stereo_mode", ((void*)0), 0))) {
        int VAR_26 = FUNC_1(VAR_24->value);

        for (VAR_22=0; VAR_22<VAR_10; VAR_22++)
            if (!FUNC_6(VAR_24->value, VAR_15[VAR_22])){
                VAR_26 = VAR_22;
                break;
            }

        if (VAR_26 < VAR_10 &&
            VAR_26 != 10 && VAR_26 != 12) {
            int VAR_27 = FUNC_4(VAR_18, VAR_26);
            if (VAR_27 < 0)
                return VAR_27;
        }
    }


    for (VAR_22 = 0; VAR_22 < VAR_18->nb_side_data; VAR_22++) {
        AVPacketSideData VAR_28 = VAR_18->side_data[VAR_22];
        if (VAR_28.type == VAR_1) {
            AVStereo3D *VAR_29 = (AVStereo3D *)VAR_28.data;

            switch (VAR_29->type) {
            case 134:
                VAR_25 = VAR_9;
                break;
            case 129:
                VAR_25 = (VAR_29->flags & VAR_2)
                    ? VAR_11
                    : VAR_8;
                *VAR_20 = 2;
                break;
            case 128:
                VAR_25 = VAR_13;
                if (VAR_29->flags & VAR_2)
                    VAR_25--;
                *VAR_21 = 2;
                break;
            case 133:
                VAR_25 = VAR_6;
                if (VAR_29->flags & VAR_2)
                    VAR_25--;
                break;
            case 130:
                VAR_25 = VAR_12;
                if (VAR_29->flags & VAR_2)
                    VAR_25--;
                *VAR_21 = 2;
                break;
            case 132:
                VAR_25 = VAR_7;
                if (VAR_29->flags & VAR_2)
                    VAR_25--;
                *VAR_20 = 2;
                break;
            case 131:
                VAR_25 = VAR_5;
                if (VAR_29->flags & VAR_2)
                    VAR_25++;
                break;
            }
            break;
        }
    }

    if (VAR_25 == VAR_10)
        return VAR_23;


    if ((VAR_19 == VAR_14 &&
        VAR_25 > VAR_13 &&
        VAR_25 != VAR_11)
        || VAR_25 >= VAR_10) {
        FUNC_3(VAR_16, VAR_0,
               "The specified stereo mode is not valid.\n");
        VAR_25 = VAR_10;
        return FUNC_0(VAR_3);
    }


    FUNC_5(VAR_17, VAR_4, VAR_25);

    return VAR_23;
}
