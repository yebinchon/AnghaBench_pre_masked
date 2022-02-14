
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ codec_id; } ;
struct TYPE_5__ {void* pict_type; } ;
typedef TYPE_1__ AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_0(AVCodecParserContext *VAR_3,
                 AVCodecContext *VAR_4,
                 const uint8_t **VAR_5, int *VAR_6,
                 const uint8_t *VAR_7, int VAR_8)
{
    if (VAR_4->codec_id == VAR_0)
        VAR_3->pict_type = (VAR_7[0] & 0x40) ? VAR_2 : VAR_1;
    else
        VAR_3->pict_type = (VAR_7[0] & 0x80) ? VAR_2 : VAR_1;

    *VAR_5 = VAR_7;
    *VAR_6 = VAR_8;
    return VAR_8;
}
