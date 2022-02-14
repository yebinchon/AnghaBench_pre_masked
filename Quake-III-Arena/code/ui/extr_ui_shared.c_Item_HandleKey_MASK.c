
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_10__ {int type; } ;
typedef TYPE_1__ itemDef_t ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;

qboolean FUNC_8(itemDef_t *VAR_7, int VAR_8, qboolean VAR_9) {

 if (VAR_5) {
  FUNC_6(VAR_5);
  VAR_5 = ((void*)0);
  VAR_4 = ((void*)0);
  VAR_3 = ((void*)0);
 } else {

  if ( VAR_9 && ( VAR_8 == VAR_0 || VAR_8 == VAR_1 || VAR_8 == VAR_2 ) ) {
   FUNC_5(VAR_7, VAR_8);
  }
 }

 if (!VAR_9) {
  return VAR_6;
 }

  switch (VAR_7->type) {
    case 138:
      return VAR_6;
      break;
    case 130:
      return VAR_6;
      break;
    case 137:
      return VAR_6;
      break;
    case 135:
    case 132:

      return VAR_6;
      break;
    case 136:
      return VAR_6;
      break;
    case 134:
      return FUNC_1(VAR_7, VAR_8, VAR_9, VAR_6);
      break;
    case 128:
      return FUNC_7(VAR_7, VAR_8);
      break;
    case 133:
      return FUNC_2(VAR_7, VAR_8);
      break;
    case 131:
      return FUNC_3(VAR_7, VAR_8);
      break;
    case 139:
   return FUNC_0(VAR_7, VAR_8, VAR_9);
      break;
    case 129:
      return FUNC_4(VAR_7, VAR_8, VAR_9);
      break;



    default:
      return VAR_6;
      break;
  }


}
