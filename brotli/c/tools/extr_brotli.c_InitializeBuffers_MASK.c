
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_out; scalar_t__ total_in; int output; int next_out; int available_out; int * next_in; scalar_t__ available_in; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(Context* VAR_1) {
  VAR_1->available_in = 0;
  VAR_1->next_in = ((void*)0);
  VAR_1->available_out = VAR_0;
  VAR_1->next_out = VAR_1->output;
  VAR_1->total_in = 0;
  VAR_1->total_out = 0;
}
