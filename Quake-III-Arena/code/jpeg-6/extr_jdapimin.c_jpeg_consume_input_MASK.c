
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_3__* j_decompress_ptr ;
struct TYPE_13__ {int global_state; TYPE_2__* inputctl; TYPE_1__* src; } ;
struct TYPE_12__ {int (* consume_input ) (TYPE_3__*) ;int (* reset_input_controller ) (TYPE_3__*) ;} ;
struct TYPE_11__ {int (* init_source ) (TYPE_3__*) ;} ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

int
FUNC_6 (j_decompress_ptr VAR_3)
{
  int VAR_4 = VAR_2;


  switch (VAR_3->global_state) {
  case 129:

    (*VAR_3->inputctl->reset_input_controller) (VAR_3);

    (*VAR_3->src->init_source) (VAR_3);
    VAR_3->global_state = 135;

  case 135:
    VAR_4 = (*VAR_3->inputctl->consume_input) (VAR_3);
    if (VAR_4 == VAR_1) {

      FUNC_1(VAR_3);

      VAR_3->global_state = 131;
    }
    break;
  case 131:

    VAR_4 = VAR_1;
    break;
  case 134:
  case 133:
  case 130:
  case 132:
  case 137:
  case 136:
  case 128:
    VAR_4 = (*VAR_3->inputctl->consume_input) (VAR_3);
    break;
  default:
    FUNC_0(VAR_3, VAR_0, VAR_3->global_state);
  }
  return VAR_4;
}
