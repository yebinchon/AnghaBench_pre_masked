
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {char* value; } ;
struct TYPE_16__ {TYPE_4__* priv_data; } ;
struct TYPE_15__ {scalar_t__ empty_hdlr_name; } ;
struct TYPE_14__ {scalar_t__ mode; scalar_t__ tag; TYPE_2__* st; TYPE_1__* par; } ;
struct TYPE_13__ {int metadata; } ;
struct TYPE_12__ {scalar_t__ codec_type; scalar_t__ codec_tag; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVDictionaryEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int *,char const*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_5, AVIOContext *VAR_6, MOVTrack *VAR_7)
{
    MOVMuxContext *VAR_8 = VAR_5->priv_data;
    const char *VAR_9, *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int64_t VAR_12 = FUNC_4(VAR_6);

    VAR_9 = "dhlr";
    VAR_11 = "url ";
    VAR_10 = "DataHandler";

    if (VAR_7) {
        VAR_9 = (VAR_7->mode == VAR_4) ? "mhlr" : "\0\0\0\0";
        if (VAR_7->par->codec_type == VAR_2) {
            VAR_11 = "vide";
            VAR_10 = "VideoHandler";
        } else if (VAR_7->par->codec_type == VAR_0) {
            VAR_11 = "soun";
            VAR_10 = "SoundHandler";
        } else if (VAR_7->par->codec_type == VAR_1) {
            if (FUNC_9(VAR_7)) {
                VAR_11 = "clcp";
                VAR_10 = "ClosedCaptionHandler";
            } else {
                if (VAR_7->tag == FUNC_0('t','x','3','g')) {
                    VAR_11 = "sbtl";
                } else if (VAR_7->tag == FUNC_0('m','p','4','s')) {
                    VAR_11 = "subp";
                } else {
                    VAR_11 = "text";
                }
            VAR_10 = "SubtitleHandler";
            }
        } else if (VAR_7->par->codec_tag == FUNC_0('r','t','p',' ')) {
            VAR_11 = "hint";
            VAR_10 = "HintHandler";
        } else if (VAR_7->par->codec_tag == FUNC_0('t','m','c','d')) {
            VAR_11 = "tmcd";
            VAR_10 = "TimeCodeHandler";
        } else if (VAR_7->par->codec_tag == FUNC_0('g','p','m','d')) {
            VAR_11 = "meta";
            VAR_10 = "GoPro MET";
        } else {
            FUNC_3(VAR_5, VAR_3,
                   "Unknown hldr_type for %s, writing dummy values\n",
                   FUNC_2(VAR_7->par->codec_tag));
        }
        if (VAR_7->st) {



            AVDictionaryEntry *VAR_13;
            VAR_13 = FUNC_1(VAR_7->st->metadata, "handler_name", ((void*)0), 0);
            if (VAR_13 && FUNC_12(VAR_13->value))
                VAR_10 = VAR_13->value;
        }
    }

    if (VAR_8->empty_hdlr_name)
        VAR_10 = "";

    FUNC_6(VAR_6, 0);
    FUNC_8(VAR_6, "hdlr");
    FUNC_6(VAR_6, 0);
    FUNC_7(VAR_6, VAR_9, 4);
    FUNC_8(VAR_6, VAR_11);
    FUNC_6(VAR_6, 0);
    FUNC_6(VAR_6, 0);
    FUNC_6(VAR_6, 0);
    if (!VAR_7 || VAR_7->mode == VAR_4)
        FUNC_5(VAR_6, FUNC_10(VAR_10));
    FUNC_7(VAR_6, VAR_10, FUNC_10(VAR_10));
    if (VAR_7 && VAR_7->mode != VAR_4)
        FUNC_5(VAR_6, 0);
    return FUNC_11(VAR_6, VAR_12);
}
