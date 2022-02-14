
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_1(uint8_t VAR_0, char *VAR_1) {
  switch (VAR_0) {
    case 131: {
      *VAR_1 = '<';
      VAR_1 += 1;
      break;
    }
    case 130: {
      *VAR_1 = '<';
      *(VAR_1 + 1) = '=';
      VAR_1 += 2;
      break;
    }
    case 134: {
      *VAR_1 = '=';
      VAR_1 += 1;
      break;
    }
    case 133: {
      *VAR_1 = '>';
      VAR_1 += 1;
      break;
    }
    case 132: {
      *VAR_1 = '>';
      *(VAR_1 + 1) = '=';
      VAR_1 += 2;
      break;
    }
    case 129: {
      *VAR_1 = '<';
      *(VAR_1 + 1) = '>';
      VAR_1 += 2;
      break;
    }
    case 128: {
      FUNC_0(VAR_1, "or", 2);
      VAR_1 += 2;
      break;
    }
    case 135: {
      FUNC_0(VAR_1, "and", 3);
      VAR_1 += 3;
      break;
    }
    default:;
  }
  return VAR_1;
}
