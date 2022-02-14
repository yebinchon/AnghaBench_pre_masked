
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_streams; int ** streams; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {TYPE_5__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef int AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_5__*,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_0, AVIOContext *VAR_1, MOVAtom VAR_2)
{
    AVStream *VAR_3;

    if (VAR_0->fc->nb_streams < 1)
        return 0;
    VAR_3 = VAR_0->fc->streams[VAR_0->fc->nb_streams-1];

    if (VAR_2.size < 16)
        return 0;


    FUNC_0(VAR_1, 4);

    FUNC_1(VAR_0->fc, VAR_1, VAR_3, VAR_2.size - 4);

    return 0;
}
