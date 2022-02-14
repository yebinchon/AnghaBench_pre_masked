
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {int * value; int key; } ;
struct TYPE_12__ {int nb_streams; int flags; int pb; int metadata; TYPE_7__** streams; } ;
struct TYPE_11__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_2 (int ,char*,TYPE_3__ const*,int ) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ,char*,...) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_7__*,int,int,int) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_2__*,int ,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (int *,char) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_9)
{
    const AVDictionaryEntry *VAR_10;

    if(VAR_9->nb_streams != 1 ||
       VAR_9->streams[0]->codecpar->codec_type != VAR_1) {
        FUNC_4(VAR_9, VAR_5,
               "LRC supports only a single subtitle stream.\n");
        return FUNC_0(VAR_6);
    }
    if(VAR_9->streams[0]->codecpar->codec_id != VAR_2 &&
       VAR_9->streams[0]->codecpar->codec_id != VAR_3) {
        FUNC_4(VAR_9, VAR_5, "Unsupported subtitle codec: %s\n",
               FUNC_5(VAR_9->streams[0]->codecpar->codec_id));
        return FUNC_0(VAR_6);
    }
    FUNC_7(VAR_9->streams[0], 64, 1, 100);

    FUNC_9(VAR_9);
    FUNC_8(VAR_9, VAR_8, ((void*)0));
    if(!(VAR_9->flags & VAR_0)) {




        FUNC_3(&VAR_9->metadata, "ve", FUNC_1(VAR_7), 0);
    } else {
        FUNC_3(&VAR_9->metadata, "ve", ((void*)0), 0);
    }
    for(VAR_10 = ((void*)0);
       (VAR_10 = FUNC_2(VAR_9->metadata, "", VAR_10,
                                    VAR_4));) {
        char *VAR_11;
        if(!VAR_10->value[0]) {
            continue;
        }
        while((VAR_11 = FUNC_10(VAR_10->value, '\n'))) {
            *VAR_11 = ' ';
        }
        while((VAR_11 = FUNC_10(VAR_10->value, '\r'))) {
            *VAR_11 = ' ';
        }
        FUNC_6(VAR_9->pb, "[%s:%s]\n",
                    VAR_10->key, VAR_10->value);
    }
    FUNC_6(VAR_9->pb, "\n");
    return 0;
}
