
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {int extradata; } ;
struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_10__ {TYPE_7__* codecpar; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {TYPE_6__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*,int *,int) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    AVStream *VAR_4;
    int VAR_5;

    if (VAR_1->fc->nb_streams < 1)
        return 0;
    if (VAR_3.size <= 40)
        return 0;
    VAR_4 = VAR_1->fc->streams[VAR_1->fc->nb_streams-1];

    if ((uint64_t)VAR_3.size > (1<<30))
        return VAR_0;

    FUNC_1(VAR_2, 40);
    FUNC_0(&VAR_4->codecpar->extradata);
    VAR_5 = FUNC_2(VAR_1->fc, VAR_4->codecpar, VAR_2, VAR_3.size - 40);
    if (VAR_5 < 0)
        return VAR_5;

    return 0;
}
