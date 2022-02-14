
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int is_streamed; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    ASFContext *VAR_1 = VAR_0->priv_data;

    VAR_1->is_streamed = 1;

    return FUNC_0(VAR_0);
}
