
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rc_parse_state_t ;
struct TYPE_6__ {unsigned int num; } ;
struct TYPE_7__ {TYPE_1__ value; void* type; } ;
typedef TYPE_2__ rc_operand_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_2__*,char const**,int *) ;
 int FUNC_1 (TYPE_2__*,char const**,int *) ;
 unsigned long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(rc_operand_t* VAR_3, const char** VAR_4, rc_parse_state_t* VAR_5) {
  const char* VAR_6 = *VAR_4;
  char* VAR_7;
  int VAR_8;
  unsigned long VAR_9;

  switch (*VAR_6) {
    case 'h': case 'H':
      VAR_9 = FUNC_2(++VAR_6, &VAR_7, 16);

      if (VAR_7 == VAR_6) {
        return VAR_0;
      }

      if (VAR_9 > 0xffffffffU) {
        VAR_9 = 0xffffffffU;
      }

      VAR_3->type = VAR_2;
      VAR_3->value.num = (unsigned)VAR_9;

      VAR_6 = VAR_7;
      break;

    case '0':
      if (VAR_6[1] == 'x' || VAR_6[1] == 'X') {

    default:
        VAR_8 = FUNC_1(VAR_3, &VAR_6, VAR_5);

        if (VAR_8 < 0) {
          return VAR_8;
        }

        break;
      }


    case '+': case '-':
    case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
      VAR_9 = FUNC_2(VAR_6, &VAR_7, 10);

      if (VAR_7 == VAR_6) {
        return VAR_0;
      }

      if (VAR_9 > 0xffffffffU) {
        VAR_9 = 0xffffffffU;
      }

      VAR_3->type = VAR_2;
      VAR_3->value.num = (unsigned)VAR_9;

      VAR_6 = VAR_7;
      break;

    case '@':
      VAR_8 = FUNC_0(VAR_3, &VAR_6, VAR_5);

      if (VAR_8 < 0) {
        return VAR_8;
      }

      break;
  }

  *VAR_4 = VAR_6;
  return VAR_1;
}
