
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_6__ {int den; int const num; } ;
struct TYPE_8__ {TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_7__ {TYPE_5__* fc; } ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int const,int const,int const,int const) ;
 int FUNC_1 (int const*,int const*,int const,int const,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    const int VAR_4 = FUNC_2(VAR_2);
    const int VAR_5 = FUNC_2(VAR_2);
    AVStream *VAR_6;

    if (VAR_1->fc->nb_streams < 1)
        return 0;
    VAR_6 = VAR_1->fc->streams[VAR_1->fc->nb_streams-1];

    if ((VAR_6->sample_aspect_ratio.den != 1 || VAR_6->sample_aspect_ratio.num) &&
        (VAR_5 != VAR_6->sample_aspect_ratio.den || VAR_4 != VAR_6->sample_aspect_ratio.num)) {
        FUNC_0(VAR_1->fc, VAR_0,
               "sample aspect ratio already set to %d:%d, ignoring 'pasp' atom (%d:%d)\n",
               VAR_6->sample_aspect_ratio.num, VAR_6->sample_aspect_ratio.den,
               VAR_4, VAR_5);
    } else if (VAR_5 != 0) {
        FUNC_1(&VAR_6->sample_aspect_ratio.num, &VAR_6->sample_aspect_ratio.den,
                  VAR_4, VAR_5, 32767);
    }
    return 0;
}
