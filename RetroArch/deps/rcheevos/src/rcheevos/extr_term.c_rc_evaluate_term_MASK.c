
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double dbl; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ value; } ;
struct TYPE_6__ {unsigned int invert; TYPE_4__ operand2; TYPE_4__ operand1; } ;
typedef TYPE_2__ rc_term_t ;
typedef int rc_peek_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (TYPE_4__*,int ,void*,int *) ;

unsigned FUNC_1(rc_term_t* VAR_1, rc_peek_t VAR_2, void* VAR_3, lua_State* VAR_4) {
  unsigned VAR_5 = FUNC_0(&VAR_1->operand1, VAR_2, VAR_3, VAR_4);

  if (VAR_1->operand2.type != VAR_0) {
    return VAR_5 * (FUNC_0(&VAR_1->operand2, VAR_2, VAR_3, VAR_4) ^ VAR_1->invert);
  }

  return (unsigned)((double)VAR_5 * VAR_1->operand2.value.dbl);
}
