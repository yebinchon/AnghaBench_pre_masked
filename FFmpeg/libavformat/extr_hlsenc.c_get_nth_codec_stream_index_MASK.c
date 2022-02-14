
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_7__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int codec_type; } ;
typedef TYPE_3__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0,
                                      enum AVMediaType VAR_1,
                                      int VAR_2)
{
    unsigned int VAR_3, VAR_4;
    if (VAR_2 < 0 || VAR_2 > VAR_0->nb_streams - 1)
        return -1;
    VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_0->nb_streams; VAR_3++) {
        if (VAR_0->streams[VAR_3]->codecpar->codec_type != VAR_1)
            continue;
        if (VAR_4 == VAR_2)
            return VAR_3;
        VAR_4++;
    }
    return -1;
}
