
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


typedef char uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_15__ {int* pix_fmts; } ;
struct TYPE_14__ {scalar_t__ pix_fmt; scalar_t__ strict_std_compliance; int codec_id; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {TYPE_1__* graph; TYPE_2__* ost; } ;
struct TYPE_11__ {TYPE_5__* enc_ctx; TYPE_6__* enc; int st; scalar_t__ keep_pix_fmt; int encoder_opts; } ;
struct TYPE_10__ {int graph; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OutputFilter ;
typedef int AVIOContext ;
typedef TYPE_4__ AVDictionaryEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (int ,char*,int *,int ) ;
 char* FUNC_1 (int const) ;
 int FUNC_2 (TYPE_5__*,char*,int ,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char**) ;
 scalar_t__ FUNC_6 (int **) ;
 int FUNC_7 (int *,char*,char const*) ;
 int const FUNC_8 (int ,TYPE_5__*,TYPE_6__*,scalar_t__) ;
 int FUNC_9 (int) ;
 int* FUNC_10 (int ,int const*) ;

__attribute__((used)) static char *FUNC_11(OutputFilter *VAR_3)
{
    OutputStream *VAR_4 = VAR_3->ost;
    AVDictionaryEntry *VAR_5 = FUNC_0(VAR_4->encoder_opts, "strict", ((void*)0), 0);
    if (VAR_5)

        FUNC_2(VAR_4->enc_ctx, "strict", VAR_5->value, 0);

     if (VAR_4->keep_pix_fmt) {
        FUNC_4(VAR_3->graph->graph,
                                            VAR_0);
        if (VAR_4->enc_ctx->pix_fmt == VAR_1)
            return ((void*)0);
        return FUNC_3(FUNC_1(VAR_4->enc_ctx->pix_fmt));
    }
    if (VAR_4->enc_ctx->pix_fmt != VAR_1) {
        return FUNC_3(FUNC_1(FUNC_8(VAR_4->st, VAR_4->enc_ctx, VAR_4->enc, VAR_4->enc_ctx->pix_fmt)));
    } else if (VAR_4->enc && VAR_4->enc->pix_fmts) {
        const enum AVPixelFormat *VAR_6;
        AVIOContext *VAR_7 = ((void*)0);
        uint8_t *VAR_8;
        int VAR_9;

        if (FUNC_6(&VAR_7) < 0)
            FUNC_9(1);

        VAR_6 = VAR_4->enc->pix_fmts;
        if (VAR_4->enc_ctx->strict_std_compliance <= VAR_2) {
            VAR_6 = FUNC_10(VAR_4->enc_ctx->codec_id, VAR_6);
        }

        for (; *VAR_6 != VAR_1; VAR_6++) {
            const char *VAR_10 = FUNC_1(*VAR_6);
            FUNC_7(VAR_7, "%s|", VAR_10);
        }
        VAR_9 = FUNC_5(VAR_7, &VAR_8);
        VAR_8[VAR_9 - 1] = 0;
        return VAR_8;
    } else
        return ((void*)0);
}
