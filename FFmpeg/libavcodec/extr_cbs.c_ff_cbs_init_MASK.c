
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_8__ {int trace_level; scalar_t__ trace_enable; int * decompose_unit_types; void* priv_data; TYPE_1__ const* codec; void* log_ctx; } ;
struct TYPE_7__ {int codec_id; int priv_data_size; } ;
typedef TYPE_1__ CodedBitstreamType ;
typedef TYPE_2__ CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_2__**) ;
 void* FUNC_3 (int) ;
 TYPE_1__** VAR_3 ;

int FUNC_4(CodedBitstreamContext **VAR_4,
                enum AVCodecID VAR_5, void *VAR_6)
{
    CodedBitstreamContext *VAR_7;
    const CodedBitstreamType *VAR_8;
    int VAR_9;

    VAR_8 = ((void*)0);
    for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_3); VAR_9++) {
        if (VAR_3[VAR_9]->codec_id == VAR_5) {
            VAR_8 = VAR_3[VAR_9];
            break;
        }
    }
    if (!VAR_8)
        return FUNC_0(VAR_1);

    VAR_7 = FUNC_3(sizeof(*VAR_7));
    if (!VAR_7)
        return FUNC_0(VAR_2);

    VAR_7->log_ctx = VAR_6;
    VAR_7->codec = VAR_8;

    VAR_7->priv_data = FUNC_3(VAR_7->codec->priv_data_size);
    if (!VAR_7->priv_data) {
        FUNC_2(&VAR_7);
        return FUNC_0(VAR_2);
    }

    VAR_7->decompose_unit_types = ((void*)0);

    VAR_7->trace_enable = 0;
    VAR_7->trace_level = VAR_0;

    *VAR_4 = VAR_7;
    return 0;
}
