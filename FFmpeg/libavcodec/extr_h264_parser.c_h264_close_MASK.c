
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int buffer; } ;
struct TYPE_6__ {int ps; int sei; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ H264ParseContext ;
typedef TYPE_3__ AVCodecParserContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(AVCodecParserContext *VAR_0)
{
    H264ParseContext *VAR_1 = VAR_0->priv_data;
    ParseContext *VAR_2 = &VAR_1->pc;

    FUNC_0(&VAR_2->buffer);

    FUNC_2(&VAR_1->sei);
    FUNC_1(&VAR_1->ps);
}
