
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int buffer; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;


 int FUNC_0 (int *) ;

void FUNC_1(AVCodecParserContext *VAR_0)
{
    ParseContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->buffer);
}
