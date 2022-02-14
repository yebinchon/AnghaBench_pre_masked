
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVBSFContext ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(AVBSFContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 < 0)
        return VAR_2;

    while (VAR_1->size > 0 && !VAR_1->data[VAR_1->size - 1])
        VAR_1->size--;

    return 0;
}
