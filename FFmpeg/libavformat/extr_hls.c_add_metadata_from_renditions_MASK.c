
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rendition {int type; int disposition; scalar_t__* name; scalar_t__* language; } ;
struct playlist {int n_main_streams; int n_renditions; struct rendition** renditions; TYPE_2__** main_streams; } ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_4__ {int disposition; int metadata; TYPE_1__* codecpar; } ;
struct TYPE_3__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int *,char*,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0, struct playlist *VAR_1,
                                         enum AVMediaType VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->n_main_streams; VAR_4++) {
        AVStream *VAR_5 = VAR_1->main_streams[VAR_4];

        if (VAR_5->codecpar->codec_type != VAR_2)
            continue;

        for (; VAR_3 < VAR_1->n_renditions; VAR_3++) {
            struct rendition *VAR_6 = VAR_1->renditions[VAR_3];

            if (VAR_6->type != VAR_2)
                continue;

            if (VAR_6->language[0])
                FUNC_0(&VAR_5->metadata, "language", VAR_6->language, 0);
            if (VAR_6->name[0])
                FUNC_0(&VAR_5->metadata, "comment", VAR_6->name, 0);

            VAR_5->disposition |= VAR_6->disposition;
        }
        if (VAR_3 >=VAR_1->n_renditions)
            break;
    }
}
