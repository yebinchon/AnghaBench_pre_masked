
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_3__ {int plainchar; int step; } ;
typedef TYPE_1__ base64_decodestate ;


 int FUNC_0 (int ) ;





__attribute__((used)) static int FUNC_1(const int8_t* VAR_0, const int VAR_1, int8_t* VAR_2, base64_decodestate* VAR_3){
  const int8_t* VAR_4 = VAR_0;
  int8_t* VAR_5 = VAR_2;
  int8_t VAR_6;

  *VAR_5 = VAR_3->plainchar;

  switch (VAR_3->step){
    while (1){
      case 131:
        do {
          if (VAR_4 == VAR_0+VAR_1){
            VAR_3->step = 131;
            VAR_3->plainchar = *VAR_5;
            return VAR_5 - VAR_2;
          }
          VAR_6 = (int8_t)FUNC_0(*VAR_4++);
        } while (VAR_6 < 0);
        *VAR_5 = (VAR_6 & 0x03f) << 2;
      case 130:
        do {
          if (VAR_4 == VAR_0+VAR_1){
            VAR_3->step = 130;
            VAR_3->plainchar = *VAR_5;
            return VAR_5 - VAR_2;
          }
          VAR_6 = (int8_t)FUNC_0(*VAR_4++);
        } while (VAR_6 < 0);
        *VAR_5++ |= (VAR_6 & 0x030) >> 4;
        *VAR_5 = (VAR_6 & 0x00f) << 4;
      case 129:
        do {
          if (VAR_4 == VAR_0+VAR_1){
            VAR_3->step = 129;
            VAR_3->plainchar = *VAR_5;
            return VAR_5 - VAR_2;
          }
          VAR_6 = (int8_t)FUNC_0(*VAR_4++);
        } while (VAR_6 < 0);
        *VAR_5++ |= (VAR_6 & 0x03c) >> 2;
        *VAR_5 = (VAR_6 & 0x003) << 6;
      case 128:
        do {
          if (VAR_4 == VAR_0+VAR_1){
            VAR_3->step = 128;
            VAR_3->plainchar = *VAR_5;
            return VAR_5 - VAR_2;
          }
          VAR_6 = (int8_t)FUNC_0(*VAR_4++);
        } while (VAR_6 < 0);
        *VAR_5++ |= (VAR_6 & 0x03f);
    }
  }

  return VAR_5 - VAR_2;
}
