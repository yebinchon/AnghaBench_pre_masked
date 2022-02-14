
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {size_t stream_index; scalar_t__ size; } ;
struct TYPE_10__ {TYPE_8__ thumbnail; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_13__ {char* key; int value; } ;
struct TYPE_12__ {TYPE_2__** streams; int metadata; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int metadata; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_8__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,char*,TYPE_4__*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1)
{
    WtvContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    AVDictionaryEntry *VAR_4 = 0;
    int64_t VAR_5 = 0;


    while ((VAR_4 = FUNC_1(VAR_1->metadata, "", VAR_4, VAR_0))) {
        FUNC_2(VAR_3, VAR_5);
        VAR_5 += FUNC_3(VAR_4->key) + FUNC_4(VAR_4->value)*2 + 2;
    }

    if (VAR_2->thumbnail.size) {
        AVStream *VAR_6 = VAR_1->streams[VAR_2->thumbnail.stream_index];
        FUNC_2(VAR_3, VAR_5);
        VAR_5 += FUNC_3("WM/Picture") + FUNC_0(&VAR_2->thumbnail, FUNC_1(VAR_6->metadata, "title", ((void*)0), 0));

        FUNC_2(VAR_3, VAR_5);
        VAR_5 += FUNC_3("WM/MediaThumbType") + 4;
    }
}
