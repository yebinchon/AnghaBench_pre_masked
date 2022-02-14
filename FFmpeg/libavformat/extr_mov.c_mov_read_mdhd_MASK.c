
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_10__ {int metadata; void* duration; TYPE_1__* priv_data; } ;
struct TYPE_9__ {TYPE_5__* fc; } ;
struct TYPE_8__ {int time_scale; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*,char*,int) ;
 scalar_t__ FUNC_8 (unsigned int,char*) ;
 int FUNC_9 (int *,void*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_10(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    AVStream *VAR_6;
    MOVStreamContext *VAR_7;
    int VAR_8;
    char VAR_9[4] = {0};
    unsigned VAR_10;
    int64_t VAR_11;

    if (VAR_3->fc->nb_streams < 1)
        return 0;
    VAR_6 = VAR_3->fc->streams[VAR_3->fc->nb_streams-1];
    VAR_7 = VAR_6->priv_data;

    if (VAR_7->time_scale) {
        FUNC_1(VAR_3->fc, VAR_2, "Multiple mdhd?\n");
        return VAR_0;
    }

    VAR_8 = FUNC_2(VAR_4);
    if (VAR_8 > 1) {
        FUNC_7(VAR_3->fc, "Version %d", VAR_8);
        return VAR_1;
    }
    FUNC_4(VAR_4);
    if (VAR_8 == 1) {
        VAR_11 = FUNC_6(VAR_4);
        FUNC_6(VAR_4);
    } else {
        VAR_11 = FUNC_5(VAR_4);
        FUNC_5(VAR_4);
    }
    FUNC_9(&VAR_6->metadata, VAR_11, VAR_3->fc);

    VAR_7->time_scale = FUNC_5(VAR_4);
    if (VAR_7->time_scale <= 0) {
        FUNC_1(VAR_3->fc, VAR_2, "Invalid mdhd time scale %d, defaulting to 1\n", VAR_7->time_scale);
        VAR_7->time_scale = 1;
    }
    VAR_6->duration = (VAR_8 == 1) ? FUNC_6(VAR_4) : FUNC_5(VAR_4);

    VAR_10 = FUNC_3(VAR_4);
    if (FUNC_8(VAR_10, VAR_9))
        FUNC_0(&VAR_6->metadata, "language", VAR_9, 0);
    FUNC_3(VAR_4);

    return 0;
}
