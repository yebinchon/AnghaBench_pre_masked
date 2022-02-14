
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ offset; } ;
typedef TYPE_2__ rc_parse_state_t ;
struct TYPE_7__ {int memref; } ;
struct TYPE_9__ {TYPE_1__ value; void* type; } ;
typedef TYPE_3__ rc_operand_t ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_0 (TYPE_2__*,unsigned int,char,char) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(rc_operand_t* VAR_19, const char** VAR_20, rc_parse_state_t* VAR_21) {
  const char* VAR_22 = *VAR_20;
  char* VAR_23;
  unsigned long VAR_24;
  char VAR_25 = 0;
  char VAR_26;

  switch (*VAR_22++) {
    case 'd': case 'D':
      VAR_19->type = VAR_17;
      break;

    case 'b': case 'B':
      VAR_19->type = VAR_16;
      VAR_25 = 1;
      break;

    case 'p': case 'P':
      VAR_19->type = VAR_18;
      break;

    default:
      VAR_19->type = VAR_16;
      VAR_22--;
      break;
  }

  if (*VAR_22++ != '0') {
    return VAR_0;
  }

  if (*VAR_22 != 'x' && *VAR_22 != 'X') {
    return VAR_0;
  }

  VAR_22++;

  switch (*VAR_22++) {
    case 'm': case 'M': VAR_26 = VAR_5; break;
    case 'n': case 'N': VAR_26 = VAR_6; break;
    case 'o': case 'O': VAR_26 = VAR_7; break;
    case 'p': case 'P': VAR_26 = VAR_8; break;
    case 'q': case 'Q': VAR_26 = VAR_9; break;
    case 'r': case 'R': VAR_26 = VAR_10; break;
    case 's': case 'S': VAR_26 = VAR_11; break;
    case 't': case 'T': VAR_26 = VAR_12; break;
    case 'l': case 'L': VAR_26 = VAR_14; break;
    case 'u': case 'U': VAR_26 = VAR_13; break;
    case 'h': case 'H': VAR_26 = VAR_4; break;
    case 'w': case 'W': VAR_26 = VAR_2; break;
    case 'x': case 'X': VAR_26 = VAR_3; break;

    default:
      VAR_22--;
    case ' ':
      VAR_26 = VAR_1;
      break;
  }

  VAR_24 = FUNC_1(VAR_22, &VAR_23, 16);

  if (VAR_23 == VAR_22) {
    return VAR_0;
  }

  if (VAR_24 > 0xffffffffU) {
    VAR_24 = 0xffffffffU;
  }

  VAR_19->value.memref = FUNC_0(VAR_21, (unsigned)VAR_24, VAR_26, VAR_25);
  if (VAR_21->offset < 0)
    return VAR_21->offset;

  *VAR_20 = VAR_23;
  return VAR_15;
}
