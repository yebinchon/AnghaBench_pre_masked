
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ input_length; scalar_t__ buffer_length; int * buffer; } ;
typedef TYPE_1__ InputBuffer ;


 TYPE_1__* FUNC_0 (int) ;

InputBuffer* FUNC_1() {
  InputBuffer* VAR_0 = FUNC_0(sizeof(InputBuffer));
  VAR_0->buffer = ((void*)0);
  VAR_0->buffer_length = 0;
  VAR_0->input_length = 0;

  return VAR_0;
}
