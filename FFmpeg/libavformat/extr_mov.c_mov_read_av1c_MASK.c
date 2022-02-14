
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


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
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_6__*,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_2, AVIOContext *VAR_3, MOVAtom VAR_4)
{
    AVStream *VAR_5;
    int VAR_6;

    if (VAR_2->fc->nb_streams < 1)
        return 0;
    VAR_5 = VAR_2->fc->streams[VAR_2->fc->nb_streams - 1];

    if (VAR_4.size < 4) {
        FUNC_0(VAR_2->fc, VAR_1, "Empty AV1 Codec Configuration Box\n");
        return VAR_0;
    }



    FUNC_1(VAR_3, 4);

    if (VAR_4.size == 4)
        return 0;

    VAR_6 = FUNC_2(VAR_2->fc, VAR_5->codecpar, VAR_3, VAR_4.size - 4);
    if (VAR_6 < 0)
        return VAR_6;

    return 0;
}
