
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ L; int funcs_ndx; } ;
typedef TYPE_2__ rc_parse_state_t ;
struct TYPE_6__ {int luafunc; } ;
struct TYPE_8__ {int type; TYPE_1__ value; } ;
typedef TYPE_3__ rc_operand_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,char const*,int) ;

__attribute__((used)) static int FUNC_8(rc_operand_t* VAR_4, const char** VAR_5, rc_parse_state_t* VAR_6) {
  const char* VAR_7 = *VAR_5;

  const char* VAR_8;


  if (*VAR_7++ != '@') {
    return VAR_1;
  }

  if (!FUNC_1(*VAR_7)) {
    return VAR_1;
  }


  VAR_8 = VAR_7;


  while (FUNC_0(*VAR_7) || *VAR_7 == '_') {
    VAR_7++;
  }



  if (VAR_6->L != 0) {
    if (!FUNC_5(VAR_6->L, VAR_6->funcs_ndx)) {
      return VAR_1;
    }

    FUNC_7(VAR_6->L, VAR_8, VAR_7 - VAR_8);
    FUNC_3(VAR_6->L, VAR_6->funcs_ndx);

    if (!FUNC_4(VAR_6->L, -1)) {
      FUNC_6(VAR_6->L, 1);
      return VAR_1;
    }

    VAR_4->value.luafunc = FUNC_2(VAR_6->L, VAR_0);
  }



  VAR_4->type = VAR_3;
  *VAR_5 = VAR_7;
  return VAR_2;
}
