
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ codec_tag; scalar_t__ codec_id; int width; } ;
struct TYPE_15__ {int size; } ;
struct TYPE_14__ {TYPE_3__* fc; } ;
struct TYPE_13__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_12__ {TYPE_1__ display_aspect_ratio; TYPE_6__* codecpar; } ;
typedef TYPE_4__ MOVContext ;
typedef TYPE_5__ MOVAtom ;
typedef int AVIOContext ;
typedef TYPE_6__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_4__*,int *,TYPE_5__) ;

__attribute__((used)) static int FUNC_5(MOVContext *VAR_2, AVIOContext *VAR_3, MOVAtom VAR_4)
{
    if (VAR_2->fc->nb_streams >= 1) {
        AVCodecParameters *VAR_5 = VAR_2->fc->streams[VAR_2->fc->nb_streams-1]->codecpar;
        if (VAR_5->codec_tag == FUNC_0('A', 'V', 'i', 'n') &&
            VAR_5->codec_id == VAR_0 &&
            VAR_4.size > 11) {
            int VAR_6;
            FUNC_3(VAR_3, 10);
            VAR_6 = FUNC_1(VAR_3);

            if (VAR_6 == 0xd4d || VAR_6 == 0xd4e)
                VAR_5->width = 1440;
            return 0;
        } else if ((VAR_5->codec_tag == FUNC_0('A', 'V', 'd', '1') ||
                    VAR_5->codec_tag == FUNC_0('A', 'V', 'j', '2') ||
                    VAR_5->codec_tag == FUNC_0('A', 'V', 'd', 'n')) &&
                   VAR_4.size >= 24) {
            int VAR_7, VAR_8;
            FUNC_3(VAR_3, 12);
            VAR_7 = FUNC_2(VAR_3);
            VAR_8 = FUNC_2(VAR_3);
            if (VAR_7 <= 0 || VAR_8 <= 0)
                return 0;
            switch (FUNC_2(VAR_3)) {
            case 2:
                if (VAR_8 >= VAR_1 / 2)
                    return 0;
                VAR_8 *= 2;
            case 1:
                VAR_2->fc->streams[VAR_2->fc->nb_streams-1]->display_aspect_ratio.num = VAR_7;
                VAR_2->fc->streams[VAR_2->fc->nb_streams-1]->display_aspect_ratio.den = VAR_8;
            default:
                return 0;
            }
        }
    }

    return FUNC_4(VAR_2, VAR_3, VAR_4);
}
