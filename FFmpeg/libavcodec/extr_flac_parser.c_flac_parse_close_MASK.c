
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int wrap_buf; int fifo_buf; TYPE_2__* headers; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ FLACHeaderMarker ;
typedef TYPE_3__ AVCodecParserContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(AVCodecParserContext *VAR_0)
{
    FLACParseContext *VAR_1 = VAR_0->priv_data;
    FLACHeaderMarker *VAR_2 = VAR_1->headers, *VAR_3;

    while (VAR_2) {
        VAR_3 = VAR_2->next;
        FUNC_1(VAR_2);
        VAR_2 = VAR_3;
    }
    VAR_1->headers = ((void*)0);
    FUNC_0(&VAR_1->fifo_buf);
    FUNC_2(&VAR_1->wrap_buf);
}
