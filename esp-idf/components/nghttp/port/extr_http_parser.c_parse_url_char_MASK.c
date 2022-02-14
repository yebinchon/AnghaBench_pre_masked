
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum state { ____Placeholder_state } state ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int VAR_0 ;
__attribute__((used)) static enum state
FUNC_3(enum state VAR_1, const char VAR_2)
{
  if (VAR_2 == ' ' || VAR_2 == '\r' || VAR_2 == '\n') {
    return VAR_0;
  }







  switch (VAR_1) {
    case 128:




      if (VAR_2 == '/' || VAR_2 == '*') {
        return 137;
      }

      if (FUNC_0(VAR_2)) {
        return 134;
      }

      break;

    case 134:
      if (FUNC_0(VAR_2)) {
        return VAR_1;
      }

      if (VAR_2 == ':') {
        return 133;
      }

      break;

    case 133:
      if (VAR_2 == '/') {
        return 132;
      }

      break;

    case 132:
      if (VAR_2 == '/') {
        return 130;
      }

      break;

    case 129:
      if (VAR_2 == '@') {
        return VAR_0;
      }


    case 130:
    case 131:
      if (VAR_2 == '/') {
        return 137;
      }

      if (VAR_2 == '?') {
        return 135;
      }

      if (VAR_2 == '@') {
        return 129;
      }

      if (FUNC_2(VAR_2) || VAR_2 == '[' || VAR_2 == ']') {
        return 131;
      }

      break;

    case 137:
      if (FUNC_1(VAR_2)) {
        return VAR_1;
      }

      switch (VAR_2) {
        case '?':
          return 135;

        case '#':
          return 138;
      }

      break;

    case 135:
    case 136:
      if (FUNC_1(VAR_2)) {
        return 136;
      }

      switch (VAR_2) {
        case '?':

          return 136;

        case '#':
          return 138;
      }

      break;

    case 138:
      if (FUNC_1(VAR_2)) {
        return 139;
      }

      switch (VAR_2) {
        case '?':
          return 139;

        case '#':
          return VAR_1;
      }

      break;

    case 139:
      if (FUNC_1(VAR_2)) {
        return VAR_1;
      }

      switch (VAR_2) {
        case '?':
        case '#':
          return VAR_1;
      }

      break;

    default:
      break;
  }


  return VAR_0;
}
