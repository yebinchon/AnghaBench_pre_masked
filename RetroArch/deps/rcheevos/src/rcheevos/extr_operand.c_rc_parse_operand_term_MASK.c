
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rc_parse_state_t ;
struct TYPE_6__ {unsigned int num; int dbl; } ;
struct TYPE_7__ {void* type; TYPE_1__ value; } ;
typedef TYPE_2__ rc_operand_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char const**,int *) ;
 int FUNC_2 (TYPE_2__*,char const**,int *) ;
 int FUNC_3 (char const*,char**) ;
 unsigned long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_5(rc_operand_t* VAR_5, const char** VAR_6, rc_parse_state_t* VAR_7) {
  const char* VAR_8 = *VAR_6;
  char* VAR_9;
  int VAR_10;
  unsigned long VAR_11;

  switch (*VAR_8) {
    case 'h': case 'H':
      VAR_11 = FUNC_4(++VAR_8, &VAR_9, 16);

      if (VAR_9 == VAR_8) {
        return VAR_0;
      }

      if (VAR_11 > 0xffffffffU) {
        VAR_11 = 0xffffffffU;
      }

      VAR_5->type = VAR_3;
      VAR_5->value.num = (unsigned)VAR_11;

      VAR_8 = VAR_9;
      break;

    case 'v': case 'V':
      VAR_11 = FUNC_4(++VAR_8, &VAR_9, 10);

      if (VAR_9 == VAR_8) {
        return VAR_0;
      }

      if (VAR_11 > 0xffffffffU) {
        VAR_11 = 0xffffffffU;
      }

      VAR_5->type = VAR_3;
      VAR_5->value.num = (unsigned)VAR_11;

      VAR_8 = VAR_9;
      break;

    case '0':
      if (VAR_8[1] == 'x' || VAR_8[1] == 'X') {

    default:
        VAR_10 = FUNC_2(VAR_5, &VAR_8, VAR_7);

        if (VAR_10 < 0) {
          return VAR_10;
        }

        break;
      }


    case '.':
    case '+': case '-':
    case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
      VAR_5->value.dbl = FUNC_3(VAR_8, &VAR_9);

      if (VAR_9 == VAR_8) {
        return VAR_1;
      }

      if (FUNC_0(VAR_5->value.dbl) == VAR_5->value.dbl) {
        VAR_5->type = VAR_3;
        VAR_5->value.num = (unsigned)FUNC_0(VAR_5->value.dbl);
      }
      else {
        VAR_5->type = VAR_4;
      }
      VAR_8 = VAR_9;
      break;

    case '@':
      VAR_10 = FUNC_1(VAR_5, &VAR_8, VAR_7);

      if (VAR_10 < 0) {
        return VAR_10;
      }

      break;
  }

  *VAR_6 = VAR_8;
  return VAR_2;
}
