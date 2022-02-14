
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rc_peek_t ;
struct TYPE_8__ {unsigned int num; TYPE_1__* memref; int luafunc; } ;
struct TYPE_9__ {int type; TYPE_2__ value; } ;
typedef TYPE_3__ rc_operand_t ;
struct TYPE_10__ {void* ud; int peek; } ;
typedef TYPE_4__ rc_luapeek_t ;
typedef int lua_State ;
struct TYPE_7__ {unsigned int value; unsigned int previous; unsigned int prior; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *,int ,int ) ;
 unsigned int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int VAR_2 ;

unsigned FUNC_8(rc_operand_t* VAR_3, rc_peek_t VAR_4, void* VAR_5, lua_State* VAR_6) {

  rc_luapeek_t VAR_7;


  unsigned VAR_8 = 0;

  switch (VAR_3->type) {
    case 132:
      VAR_8 = VAR_3->value.num;
      break;

    case 130:

      return 0;

    case 129:


      if (VAR_6 != 0) {
        FUNC_5(VAR_6, VAR_1, VAR_3->value.luafunc);
        FUNC_3(VAR_6, VAR_2);

        VAR_7.peek = VAR_4;
        VAR_7.ud = VAR_5;

        FUNC_4(VAR_6, &VAR_7);

        if (FUNC_1(VAR_6, 2, 1, 0) == VAR_0) {
          if (FUNC_0(VAR_6, -1)) {
            VAR_8 = FUNC_6(VAR_6, -1);
          }
          else {
            VAR_8 = (unsigned)FUNC_7(VAR_6, -1);
          }
        }

        FUNC_2(VAR_6, 1);
      }



      break;

    case 133:
      VAR_8 = VAR_3->value.memref->value;
      break;

    case 131:
      VAR_8 = VAR_3->value.memref->previous;
      break;

    case 128:
      VAR_8 = VAR_3->value.memref->prior;
      break;
  }

  return VAR_8;
}
