
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ v_columns; scalar_t__ v_rows; } ;
 int FUNC_0 (char) ;
 int FUNC_1 (int,char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_8(char VAR_4)
{
 if (!VAR_4) {
  return;
 }
 switch (VAR_0) {
  default:VAR_0 = 131;
 case 131:
  FUNC_6(VAR_4);
  break;
 case 134:
  FUNC_3(VAR_4);
  break;
 case 128:
  FUNC_7(VAR_4);
  break;
 case 133:
  FUNC_4(VAR_4);
  break;
 case 132:
  FUNC_5(VAR_4);
  break;
 case 136:
  FUNC_0(VAR_4);
  break;
 case 135:
  FUNC_2(VAR_4);
  break;
 case 130:
  FUNC_1(0, VAR_4);
  break;
 case 129:
  FUNC_1(1, VAR_4);
  break;
 }

 if (VAR_1 >= VAR_3.v_columns) {
  if (0 == VAR_3.v_columns)
   VAR_1 = 0;
  else
   VAR_1 = VAR_3.v_columns - 1;
 }
 if (VAR_2 >= VAR_3.v_rows) {
  if (0 == VAR_3.v_rows)
   VAR_2 = 0;
  else
   VAR_2 = VAR_3.v_rows - 1;
 }
}
