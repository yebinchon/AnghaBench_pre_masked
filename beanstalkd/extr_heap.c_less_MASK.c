
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* less ) (int ,int ) ;int * data; } ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(Heap *VAR_0, size_t VAR_1, size_t VAR_2)
{
    return VAR_0->less(VAR_0->data[VAR_1], VAR_0->data[VAR_2]);
}
