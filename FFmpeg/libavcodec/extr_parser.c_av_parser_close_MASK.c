
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int priv_data; TYPE_1__* parser; } ;
struct TYPE_6__ {int (* parser_close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ AVCodecParserContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(AVCodecParserContext *VAR_0)
{
    if (VAR_0) {
        if (VAR_0->parser->parser_close)
            VAR_0->parser->parser_close(VAR_0);
        FUNC_1(&VAR_0->priv_data);
        FUNC_0(VAR_0);
    }
}
