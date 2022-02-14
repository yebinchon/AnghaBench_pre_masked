
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int data; } ;
typedef TYPE_1__ ExtraSEI ;


 int FUNC_0 (int ,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(const ExtraSEI* VAR_0, int VAR_1){
    int VAR_2;
    if (VAR_0->size == 0)
        return 0;

    VAR_2 = -FUNC_0(VAR_0->data,
                                       VAR_0->size,
                                       ((void*)0),
                                       0,
                                       0);

    if ((VAR_0->size % 255) == 0)
        VAR_2++;

    return VAR_2 + VAR_0->size / 255 + 1 + VAR_1 / 255 + 1;
}
