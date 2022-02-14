
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_16__ {int name; } ;
struct TYPE_15__ {int id; } ;
struct TYPE_14__ {TYPE_8__* oformat; int url; } ;
struct TYPE_13__ {int stream_copy; int encoding_needed; TYPE_4__* enc; TYPE_10__* st; int index; int file_index; } ;
struct TYPE_12__ {int codec_type; int codec_id; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
typedef TYPE_2__ OutputStream ;
typedef int OptionsContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*,TYPE_3__*,TYPE_10__*) ;
 int FUNC_1 (TYPE_8__*,int *,int ,int *,int) ;
 int FUNC_2 (int *,int ,char*,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 TYPE_4__* FUNC_5 (char*,int,int) ;
 int VAR_6 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(OptionsContext *VAR_7, AVFormatContext *VAR_8, OutputStream *VAR_9)
{
    enum AVMediaType VAR_10 = VAR_9->st->codecpar->codec_type;
    char *VAR_11 = ((void*)0);

    if (VAR_10 == VAR_3 || VAR_10 == VAR_1 || VAR_10 == VAR_2) {
        FUNC_0(VAR_5, VAR_6, VAR_11, VAR_8, VAR_9->st);
        if (!VAR_11) {
            VAR_9->st->codecpar->codec_id = FUNC_1(VAR_8->oformat, ((void*)0), VAR_8->url,
                                                         ((void*)0), VAR_9->st->codecpar->codec_type);
            VAR_9->enc = FUNC_3(VAR_9->st->codecpar->codec_id);
            if (!VAR_9->enc) {
                FUNC_2(((void*)0), VAR_4, "Automatic encoder selection failed for "
                       "output stream #%d:%d. Default encoder for format %s (codec %s) is "
                       "probably disabled. Please choose an encoder manually.\n",
                       VAR_9->file_index, VAR_9->index, VAR_8->oformat->name,
                       FUNC_4(VAR_9->st->codecpar->codec_id));
                return VAR_0;
            }
        } else if (!FUNC_6(VAR_11, "copy"))
            VAR_9->stream_copy = 1;
        else {
            VAR_9->enc = FUNC_5(VAR_11, VAR_9->st->codecpar->codec_type, 1);
            VAR_9->st->codecpar->codec_id = VAR_9->enc->id;
        }
        VAR_9->encoding_needed = !VAR_9->stream_copy;
    } else {

        VAR_9->stream_copy = 1;
        VAR_9->encoding_needed = 0;
    }

    return 0;
}
