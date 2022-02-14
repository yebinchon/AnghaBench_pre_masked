
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
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 int FUNC_1 (TYPE_6__*,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    AVStream *VAR_4;
    int VAR_5;

    if (VAR_1->fc->nb_streams < 1)
        return 0;
    VAR_4 = VAR_1->fc->streams[VAR_1->fc->nb_streams-1];

    if ((VAR_5 = FUNC_1(VAR_1->fc, VAR_2, VAR_4->codecpar, VAR_3.size, 0)) < 0)
        FUNC_0(VAR_1->fc, VAR_0, "get_wav_header failed\n");

    return VAR_5;
}
