
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct playlist {TYPE_4__* ctx; int * id3_initial; } ;
struct TYPE_15__ {char* key; int value; } ;
struct TYPE_14__ {TYPE_1__* buf; } ;
struct TYPE_13__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_11__ {int size; int data; } ;
struct TYPE_12__ {TYPE_2__ attached_pic; } ;
struct TYPE_10__ {int size; int data; } ;
typedef TYPE_5__ ID3v2ExtraMetaAPIC ;
typedef TYPE_6__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (int *,char*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct playlist *VAR_3, AVDictionary *VAR_4,
                                  ID3v2ExtraMetaAPIC *VAR_5)
{
    AVDictionaryEntry *VAR_6 = ((void*)0);
    AVDictionaryEntry *VAR_7;

    while ((VAR_6 = FUNC_0(VAR_4, "", VAR_6, VAR_0))) {
        VAR_7 = FUNC_0(VAR_3->id3_initial, VAR_6->key, ((void*)0), VAR_1);
        if (!VAR_7 || FUNC_2(VAR_7->value, VAR_6->value) != 0)
            return 1;
    }


    if (VAR_5 && (VAR_3->ctx->nb_streams != 2 || !VAR_3->ctx->streams[1]->attached_pic.data))
        return 1;

    if (VAR_5) {
        int VAR_8 = VAR_3->ctx->streams[1]->attached_pic.size;
        if (VAR_8 != VAR_5->buf->size - VAR_2)
            return 1;

        if (FUNC_1(VAR_5->buf->data, VAR_3->ctx->streams[1]->attached_pic.data, VAR_8) != 0)
            return 1;
    }

    return 0;
}
