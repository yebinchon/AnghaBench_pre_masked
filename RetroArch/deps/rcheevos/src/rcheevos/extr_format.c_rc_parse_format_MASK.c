
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char*) ;

int FUNC_1(const char* VAR_6) {
  switch (*VAR_6++) {
    case 'F':
      if (!FUNC_0(VAR_6, "RAMES")) {
        return VAR_1;
      }

      break;

    case 'T':
      if (!FUNC_0(VAR_6, "IME")) {
        return VAR_1;
      }
      else if (!FUNC_0(VAR_6, "IMESECS")) {
        return VAR_4;
      }

      break;

    case 'S':
      if (!FUNC_0(VAR_6, "ECS")) {
        return VAR_4;
      }
      if (!FUNC_0(VAR_6, "CORE")) {
        return VAR_3;
      }

      break;

    case 'M':
      if (!FUNC_0(VAR_6, "ILLISECS")) {
        return VAR_0;
      }

      break;

    case 'P':
      if (!FUNC_0(VAR_6, "OINTS")) {
        return VAR_3;
      }

      break;

    case 'V':
      if (!FUNC_0(VAR_6, "ALUE")) {
        return VAR_5;
      }

      break;

    case 'O':
      if (!FUNC_0(VAR_6, "THER")) {
        return VAR_2;
      }

      break;
  }

  return VAR_5;
}
