
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int framep; int * frames; } ;
typedef TYPE_1__ VP8Context ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_4(AVCodecContext *VAR_0, int VAR_1)
{
    VP8Context *VAR_2 = VAR_0->priv_data;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->frames); VAR_3++)
        FUNC_3(VAR_2, &VAR_2->frames[VAR_3]);
    FUNC_2(VAR_2->framep, 0, sizeof(VAR_2->framep));

    if (VAR_1)
        FUNC_1(VAR_2);
}
