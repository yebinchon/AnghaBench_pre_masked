
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {TYPE_1__** streams; } ;
struct TYPE_10__ {size_t* streams; int nb_streams; } ;
struct TYPE_9__ {TYPE_5__* codecpar; int metadata; } ;
typedef TYPE_2__ AdaptationSet ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, AdaptationSet *VAR_2) {
    int VAR_3;
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_1->streams[VAR_2->streams[0]]->metadata,
                                                    VAR_0, ((void*)0), 0);
    AVCodecParameters *VAR_5 = VAR_1->streams[VAR_2->streams[0]]->codecpar;
    if (!VAR_4) return 0;
    for (VAR_3 = 1; VAR_3 < VAR_2->nb_streams; VAR_3++) {
        AVDictionaryEntry *VAR_6 = FUNC_0(VAR_1->streams[VAR_2->streams[VAR_3]]->metadata,
                                                   VAR_0, ((void*)0), 0);
        AVCodecParameters *VAR_7 = VAR_1->streams[VAR_2->streams[VAR_3]]->codecpar;
        if (!VAR_6 ||
            FUNC_3(VAR_4->value, VAR_6->value, FUNC_2(VAR_4->value)) ||
            VAR_5->codec_id != VAR_7->codec_id ||
            VAR_5->extradata_size != VAR_7->extradata_size ||
            FUNC_1(VAR_5->extradata, VAR_7->extradata, VAR_7->extradata_size)) {
            return 0;
        }
    }
    return 1;
}
