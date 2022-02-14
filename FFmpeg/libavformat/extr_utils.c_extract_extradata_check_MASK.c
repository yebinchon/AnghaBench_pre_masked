
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_8__ {int* codec_ids; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int const codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVBitStreamFilter ;


 int const VAR_0 ;
 TYPE_3__* FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(AVStream *VAR_1)
{
    const AVBitStreamFilter *VAR_2;

    VAR_2 = FUNC_0("extract_extradata");
    if (!VAR_2)
        return 0;

    if (VAR_2->codec_ids) {
        const enum AVCodecID *VAR_3;
        for (VAR_3 = VAR_2->codec_ids; *VAR_3 != VAR_0; VAR_3++)
            if (*VAR_3 == VAR_1->codecpar->codec_id)
                return 1;
    }

    return 0;
}
