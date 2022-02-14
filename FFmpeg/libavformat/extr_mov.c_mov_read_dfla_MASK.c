
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int buf ;
struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_10__ {int codecpar; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {TYPE_6__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_6__*,int ,int *,int) ;
 int FUNC_5 (int *,int*,int*,int*) ;

__attribute__((used)) static int FUNC_6(MOVContext *VAR_5, AVIOContext *VAR_6, MOVAtom VAR_7)
{
    AVStream *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;
    uint8_t VAR_13[4];

    if (VAR_5->fc->nb_streams < 1)
        return 0;
    VAR_8 = VAR_5->fc->streams[VAR_5->fc->nb_streams-1];

    if ((uint64_t)VAR_7.size > (1<<30) || VAR_7.size < 42)
        return VAR_0;


    if (FUNC_1(VAR_6) != 0)
        return VAR_0;

    FUNC_2(VAR_6);

    FUNC_3(VAR_6, VAR_13, sizeof(VAR_13));
    FUNC_5(VAR_13, &VAR_9, &VAR_10, &VAR_11);

    if (VAR_10 != VAR_3 || VAR_11 != VAR_4) {
        FUNC_0(VAR_5->fc, VAR_1, "STREAMINFO must be first FLACMetadataBlock\n");
        return VAR_0;
    }

    VAR_12 = FUNC_4(VAR_5->fc, VAR_8->codecpar, VAR_6, VAR_11);
    if (VAR_12 < 0)
        return VAR_12;

    if (!VAR_9)
        FUNC_0(VAR_5->fc, VAR_2, "non-STREAMINFO FLACMetadataBlock(s) ignored\n");

    return 0;
}
