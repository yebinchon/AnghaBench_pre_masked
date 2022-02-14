
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {size_t stream_index; scalar_t__ size; int data; } ;
struct TYPE_11__ {TYPE_9__ thumbnail; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_14__ {char* value; int key; } ;
struct TYPE_13__ {TYPE_2__** streams; int metadata; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int metadata; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,char*,TYPE_4__*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int,char*,int ) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,char*,int) ;

__attribute__((used)) static void FUNC_11(AVFormatContext *VAR_2)
{
    WtvContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    AVDictionaryEntry *VAR_5 = 0;

    FUNC_7(VAR_2);

    FUNC_6(&VAR_2->metadata, VAR_1, ((void*)0));
    while ((VAR_5 = FUNC_1(VAR_2->metadata, "", VAR_5, VAR_0)))
        FUNC_9(VAR_4, VAR_5->key, VAR_5->value);

    if (VAR_3->thumbnail.size) {
        AVStream *VAR_6 = VAR_2->streams[VAR_3->thumbnail.stream_index];
        VAR_5 = FUNC_1(VAR_6->metadata, "title", ((void*)0), 0);
        FUNC_8(VAR_4, 2, "WM/Picture", FUNC_0(&VAR_3->thumbnail, VAR_5));

        FUNC_2(VAR_4, "image/jpeg");
        FUNC_3(VAR_4, 0x10);
        FUNC_2(VAR_4, VAR_5 ? VAR_5->value : "");

        FUNC_4(VAR_4, VAR_3->thumbnail.size);
        FUNC_5(VAR_4, VAR_3->thumbnail.data, VAR_3->thumbnail.size);

        FUNC_10(VAR_4, "WM/MediaThumbType", 2);
    }
}
