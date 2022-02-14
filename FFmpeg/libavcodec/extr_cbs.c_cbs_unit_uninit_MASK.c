
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data_bit_padding; scalar_t__ data_size; int * data; int data_ref; int * content; int content_ref; } ;
typedef TYPE_1__ CodedBitstreamUnit ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(CodedBitstreamContext *VAR_0,
                            CodedBitstreamUnit *VAR_1)
{
    FUNC_0(&VAR_1->content_ref);
    VAR_1->content = ((void*)0);

    FUNC_0(&VAR_1->data_ref);
    VAR_1->data = ((void*)0);
    VAR_1->data_size = 0;
    VAR_1->data_bit_padding = 0;
}
