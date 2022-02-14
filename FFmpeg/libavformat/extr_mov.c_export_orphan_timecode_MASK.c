
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int nb_streams; int metadata; TYPE_2__** streams; } ;
struct TYPE_9__ {int metadata; TYPE_1__* codecpar; } ;
struct TYPE_8__ {scalar_t__ codec_tag; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 TYPE_4__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_streams; VAR_1++) {
        AVStream *VAR_2 = VAR_0->streams[VAR_1];

        if (VAR_2->codecpar->codec_tag == FUNC_0('t','m','c','d') &&
            !FUNC_3(VAR_0, VAR_1 + 1)) {
            AVDictionaryEntry *VAR_3 = FUNC_1(VAR_2->metadata, "timecode", ((void*)0), 0);
            if (VAR_3) {
                FUNC_2(&VAR_0->metadata, "timecode", VAR_3->value, 0);
                break;
            }
        }
    }
}
