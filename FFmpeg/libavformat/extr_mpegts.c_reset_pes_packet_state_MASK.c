
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; scalar_t__ flags; scalar_t__ data_index; void* dts; void* pts; } ;
typedef TYPE_1__ PESContext ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(PESContext *VAR_1)
{
    VAR_1->pts = VAR_0;
    VAR_1->dts = VAR_0;
    VAR_1->data_index = 0;
    VAR_1->flags = 0;
    FUNC_0(&VAR_1->buffer);
}
