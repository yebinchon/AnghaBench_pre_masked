
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int qsv; } ;
typedef TYPE_1__ QSVH2645Context ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0)
{
    QSVH2645Context *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_1);
    FUNC_0(VAR_0, &VAR_1->qsv);
}
