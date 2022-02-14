
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setpos ) (void*,size_t) ;void** data; } ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (void*,size_t) ;

__attribute__((used)) static void
FUNC_1(Heap *VAR_0, size_t VAR_1, void *VAR_2)
{
    VAR_0->data[VAR_1] = VAR_2;
    VAR_0->setpos(VAR_2, VAR_1);
}
