
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef void* int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int iMinVal; int iMaxVal; void* i64MinVal; void* i64MaxVal; double dMinVal; double dMaxVal; } ;
typedef TYPE_1__ MinMaxEntry ;
 int FUNC_0 (int) ;

void FUNC_1(MinMaxEntry *VAR_0, char *VAR_1, int32_t VAR_2) {
  switch (VAR_2) {
    case 130: {
      int32_t VAR_3 = *(int32_t *)VAR_1;
      if (VAR_0->iMinVal > VAR_3) {
        VAR_0->iMinVal = VAR_3;
      }

      if (VAR_0->iMaxVal < VAR_3) {
        VAR_0->iMaxVal = VAR_3;
      }
      break;
    };
    case 133: {
      int64_t VAR_4 = *(int64_t *)VAR_1;
      if (VAR_0->i64MinVal > VAR_4) {
        VAR_0->i64MinVal = VAR_4;
      }

      if (VAR_0->i64MaxVal < VAR_4) {
        VAR_0->i64MaxVal = VAR_4;
      }
      break;
    };
    case 129: {
      int32_t VAR_5 = *(int16_t *)VAR_1;
      if (VAR_0->iMinVal > VAR_5) {
        VAR_0->iMinVal = VAR_5;
      }

      if (VAR_0->iMaxVal < VAR_5) {
        VAR_0->iMaxVal = VAR_5;
      }
      break;
    };
    case 128: {
      int32_t VAR_6 = *(int8_t *)VAR_1;
      if (VAR_0->iMinVal > VAR_6) {
        VAR_0->iMinVal = VAR_6;
      }

      if (VAR_0->iMaxVal < VAR_6) {
        VAR_0->iMaxVal = VAR_6;
      }

      break;
    };
    case 132: {
      double VAR_7 = *(double *)VAR_1;
      if (VAR_0->dMinVal > VAR_7) {
        VAR_0->dMinVal = VAR_7;
      }

      if (VAR_0->dMaxVal < VAR_7) {
        VAR_0->dMaxVal = VAR_7;
      }
      break;
    };
    case 131: {
      double VAR_8 = *(float *)VAR_1;

      if (VAR_0->dMinVal > VAR_8) {
        VAR_0->dMinVal = VAR_8;
      }

      if (VAR_0->dMaxVal < VAR_8) {
        VAR_0->dMaxVal = VAR_8;
      }
      break;
    };
    default: { FUNC_0(0); }
  }
}
