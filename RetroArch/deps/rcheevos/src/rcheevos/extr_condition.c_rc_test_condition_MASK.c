
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rc_peek_t ;
struct TYPE_3__ {int oper; int operand2; int operand1; } ;
typedef TYPE_1__ rc_condition_t ;
typedef int lua_State ;
 unsigned int FUNC_0 (int *,int ,void*,int *) ;

int FUNC_1(rc_condition_t* VAR_0, unsigned VAR_1, rc_peek_t VAR_2, void* VAR_3, lua_State* VAR_4) {
  unsigned VAR_5 = FUNC_0(&VAR_0->operand1, VAR_2, VAR_3, VAR_4) + VAR_1;
  unsigned VAR_6 = FUNC_0(&VAR_0->operand2, VAR_2, VAR_3, VAR_4);

  switch (VAR_0->oper) {
    case 133: return VAR_5 == VAR_6;
    case 128: return VAR_5 != VAR_6;
    case 129: return VAR_5 < VAR_6;
    case 130: return VAR_5 <= VAR_6;
    case 131: return VAR_5 > VAR_6;
    case 132: return VAR_5 >= VAR_6;
    default: return 1;
  }
}
