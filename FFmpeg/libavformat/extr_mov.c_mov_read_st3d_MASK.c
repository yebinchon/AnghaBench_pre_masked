
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVStereo3DType { ____Placeholder_AVStereo3DType } AVStereo3DType ;
struct TYPE_14__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_13__ {int type; } ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {TYPE_8__* fc; } ;
struct TYPE_9__ {TYPE_7__* stereo3d; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_8__*,int ,char*,...) ;
 TYPE_7__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(MOVContext *VAR_7, AVIOContext *VAR_8, MOVAtom VAR_9)
{
    AVStream *VAR_10;
    MOVStreamContext *VAR_11;
    enum AVStereo3DType VAR_12;
    int VAR_13;

    if (VAR_7->fc->nb_streams < 1)
        return 0;

    VAR_10 = VAR_7->fc->streams[VAR_7->fc->nb_streams - 1];
    VAR_11 = VAR_10->priv_data;

    if (VAR_9.size < 5) {
        FUNC_1(VAR_7->fc, VAR_1, "Empty stereoscopic video box\n");
        return VAR_0;
    }
    FUNC_4(VAR_8, 4);

    VAR_13 = FUNC_3(VAR_8);
    switch (VAR_13) {
    case 0:
        VAR_12 = VAR_3;
        break;
    case 1:
        VAR_12 = VAR_5;
        break;
    case 2:
        VAR_12 = VAR_4;
        break;
    default:
        FUNC_1(VAR_7->fc, VAR_2, "Unknown st3d mode value %d\n", VAR_13);
        return 0;
    }

    VAR_11->stereo3d = FUNC_2();
    if (!VAR_11->stereo3d)
        return FUNC_0(VAR_6);

    VAR_11->stereo3d->type = VAR_12;
    return 0;
}
