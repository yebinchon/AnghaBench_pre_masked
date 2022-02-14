
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int err_recognition; int extradata_size; scalar_t__ extradata; } ;
struct TYPE_11__ {int flags; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int parsed_extradata; int nal_length_size; int is_avc; int sei; int ps; int pc; } ;
typedef int ParseContext ;
typedef TYPE_1__ HEVCParserContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int const**,int*) ;
 int FUNC_1 (scalar_t__,int ,int *,int *,int *,int *,int ,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int const*,int) ;
 int FUNC_3 (TYPE_2__*,int const*,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVCodecParserContext *VAR_1, AVCodecContext *VAR_2,
                      const uint8_t **VAR_3, int *VAR_4,
                      const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7;
    HEVCParserContext *VAR_8 = VAR_1->priv_data;
    ParseContext *VAR_9 = &VAR_8->pc;
    int VAR_10 = !VAR_6;
    const uint8_t *VAR_11 = VAR_5;

    if (VAR_2->extradata && !VAR_8->parsed_extradata) {
        FUNC_1(VAR_2->extradata, VAR_2->extradata_size, &VAR_8->ps, &VAR_8->sei,
                                 &VAR_8->is_avc, &VAR_8->nal_length_size, VAR_2->err_recognition,
                                 1, VAR_2);
        VAR_8->parsed_extradata = 1;
    }

    if (VAR_1->flags & VAR_0) {
        VAR_7 = VAR_6;
    } else {
        VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_6);
        if (FUNC_0(VAR_9, VAR_7, &VAR_5, &VAR_6) < 0) {
            *VAR_3 = ((void*)0);
            *VAR_4 = 0;
            return VAR_6;
        }
    }

    VAR_10 &= (VAR_11 == VAR_5);

    if (!VAR_10)
        FUNC_3(VAR_1, VAR_5, VAR_6, VAR_2);

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_7;
}
