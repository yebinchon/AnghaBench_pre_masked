
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int attr ;
struct TYPE_7__ {char* codec_attr; scalar_t__ attr_status; } ;
typedef TYPE_2__ VariantStream ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ codec_type; scalar_t__ codec_id; int* extradata; } ;
typedef TYPE_3__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(AVStream *VAR_8, VariantStream *VAR_9)
{
    int VAR_10 = FUNC_2(VAR_9->codec_attr);
    char VAR_11[32];

    if (VAR_8->codecpar->codec_type == VAR_0)
        return;
    if (VAR_9->attr_status == VAR_7)
        return;

    if (VAR_8->codecpar->codec_id == VAR_4) {
        uint8_t *VAR_12 = VAR_8->codecpar->extradata;
        if (VAR_12 && (VAR_12[0] | VAR_12[1] | VAR_12[2]) == 0 && VAR_12[3] == 1 && (VAR_12[4] & 0x1F) == 7) {
            FUNC_1(VAR_11, sizeof(VAR_11),
                     "avc1.%02x%02x%02x", VAR_12[5], VAR_12[6], VAR_12[7]);
        } else {
            goto fail;
        }
    } else if (VAR_8->codecpar->codec_id == VAR_5) {
        FUNC_1(VAR_11, sizeof(VAR_11), "mp4a.40.33");
    } else if (VAR_8->codecpar->codec_id == VAR_6) {
        FUNC_1(VAR_11, sizeof(VAR_11), "mp4a.40.34");
    } else if (VAR_8->codecpar->codec_id == VAR_1) {

        FUNC_1(VAR_11, sizeof(VAR_11), "mp4a.40.2");
    } else if (VAR_8->codecpar->codec_id == VAR_2) {
        FUNC_1(VAR_11, sizeof(VAR_11), "ac-3");
    } else if (VAR_8->codecpar->codec_id == VAR_3) {
        FUNC_1(VAR_11, sizeof(VAR_11), "ec-3");
    } else {
        goto fail;
    }

    if (!FUNC_0(VAR_9->codec_attr, VAR_11)) {
        FUNC_1(VAR_9->codec_attr + VAR_10,
                 sizeof(VAR_9->codec_attr) - VAR_10,
                 "%s%s", VAR_10 ? "," : "", VAR_11);
    }
    return;

fail:
    VAR_9->codec_attr[0] = '\0';
    VAR_9->attr_status = VAR_7;
    return;
}
