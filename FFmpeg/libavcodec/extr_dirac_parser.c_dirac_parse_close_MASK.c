
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ buffer_size; int buffer; } ;
typedef TYPE_1__ DiracParseContext ;
typedef TYPE_2__ AVCodecParserContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVCodecParserContext *VAR_0)
{
    DiracParseContext *VAR_1 = VAR_0->priv_data;

    if (VAR_1->buffer_size > 0)
        FUNC_0(&VAR_1->buffer);
}
