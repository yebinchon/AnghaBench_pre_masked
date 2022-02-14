
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 int * VAR_36 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char*,int) ;
 size_t FUNC_3 (char*,size_t) ;

uint32_t FUNC_4(char* VAR_37, uint32_t* VAR_38) {
  uint32_t VAR_39;
  switch (*VAR_37) {
    case ' ':
    case '\t':
    case '\n':
    case '\f':
    case '\r': {
      for (VAR_39 = 1; FUNC_1(VAR_37[VAR_39]); VAR_39++) {
      }
      *VAR_38 = VAR_32;
      return VAR_39;
    }
    case ':': {
      *VAR_38 = VAR_5;
      return 1;
    }
    case '-': {
      if (VAR_37[1] == '-') {
        for (VAR_39 = 2; VAR_37[VAR_39] && VAR_37[VAR_39] != '\n'; VAR_39++) {
        }
        *VAR_38 = VAR_7;
        return VAR_39;
      }
      *VAR_38 = VAR_23;
      return 1;
    }
    case '(': {
      *VAR_38 = VAR_20;
      return 1;
    }
    case ')': {
      *VAR_38 = VAR_28;
      return 1;
    }
    case ';': {
      *VAR_38 = VAR_30;
      return 1;
    }
    case '+': {
      *VAR_38 = VAR_25;
      return 1;
    }
    case '*': {
      *VAR_38 = VAR_33;
      return 1;
    }
    case '/': {
      if (VAR_37[1] != '*' || VAR_37[2] == 0) {
        *VAR_38 = VAR_31;
        return 1;
      }
      for (VAR_39 = 3; VAR_37[VAR_39] && (VAR_37[VAR_39] != '/' || VAR_37[VAR_39 - 1] != '*'); VAR_39++) {
      }
      if (VAR_37[VAR_39]) VAR_39++;
      *VAR_38 = VAR_7;
      return VAR_39;
    }
    case '%': {
      *VAR_38 = VAR_27;
      return 1;
    }
    case '=': {
      *VAR_38 = VAR_10;
      return 1 + (VAR_37[1] == '=');
    }
    case '<': {
      if (VAR_37[1] == '=') {
        *VAR_38 = VAR_19;
        return 2;
      } else if (VAR_37[1] == '>') {
        *VAR_38 = VAR_24;
        return 2;
      } else if (VAR_37[1] == '<') {
        *VAR_38 = VAR_21;
        return 2;
      } else {
        *VAR_38 = VAR_22;
        return 1;
      }
    }
    case '>': {
      if (VAR_37[1] == '=') {
        *VAR_38 = VAR_12;
        return 2;
      } else if (VAR_37[1] == '>') {
        *VAR_38 = VAR_29;
        return 2;
      } else {
        *VAR_38 = VAR_13;
        return 1;
      }
    }
    case '!': {
      if (VAR_37[1] != '=') {
        *VAR_38 = VAR_16;
        return 2;
      } else {
        *VAR_38 = VAR_24;
        return 2;
      }
    }
    case '|': {
      if (VAR_37[1] != '|') {
        *VAR_38 = VAR_3;
        return 1;
      } else {
        *VAR_38 = VAR_8;
        return 2;
      }
    }
    case ',': {
      *VAR_38 = VAR_6;
      return 1;
    }
    case '&': {
      *VAR_38 = VAR_1;
      return 1;
    }
    case '~': {
      *VAR_38 = VAR_2;
      return 1;
    }
    case '?': {
      *VAR_38 = VAR_26;
      return 1;
    }
    case '\'':
    case '"': {
      int VAR_40 = VAR_37[0];
      bool VAR_41 = 0;
      for (VAR_39 = 1; VAR_37[VAR_39]; VAR_39++) {
        if (VAR_37[VAR_39] == VAR_40) {
          if (VAR_37[VAR_39 + 1] == VAR_40) {
            VAR_39++;
          } else {
            VAR_41 = 1;
            break;
          }
        }
      }
      if (VAR_37[VAR_39]) VAR_39++;

      if (VAR_41) {
        *VAR_38 = VAR_34;
        return VAR_39;
      }

      break;
    }
    case '.': {





      if (FUNC_0(VAR_37[1])) {
        for (VAR_39 = 2; FUNC_0(VAR_37[VAR_39]); VAR_39++) {
        }

        if ((VAR_37[VAR_39] == 'e' || VAR_37[VAR_39] == 'E') &&
            (FUNC_0(VAR_37[VAR_39 + 1]) || ((VAR_37[VAR_39 + 1] == '+' || VAR_37[VAR_39 + 1] == '-') && FUNC_0(VAR_37[VAR_39 + 2])))) {
          VAR_39 += 2;
          while (FUNC_0(VAR_37[VAR_39])) {
            VAR_39++;
          }
        }

        *VAR_38 = VAR_11;
        return VAR_39;
      } else {
        *VAR_38 = VAR_9;
        return 1;
      }
    }

    case '0': {
      char VAR_42 = VAR_37[1];

      if (VAR_42 == 'b') {
        *VAR_38 = VAR_0;
        for (VAR_39 = 2; (VAR_37[VAR_39] == '0' || VAR_37[VAR_39] == '1'); ++VAR_39) {
        }

        if (VAR_39 == 2) {
          break;
        }

        return VAR_39;
      } else if (VAR_42 == 'x') {
        *VAR_38 = VAR_14;
        for (VAR_39 = 2; FUNC_0(VAR_37[VAR_39]) || (VAR_37[VAR_39] >= 'a' && VAR_37[VAR_39] <= 'f') || (VAR_37[VAR_39] >= 'A' && VAR_37[VAR_39] <= 'F'); ++VAR_39) {
        }

        if (VAR_39 == 2) {
          break;
        }

        return VAR_39;
      }
    }
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': {
      *VAR_38 = VAR_17;
      for (VAR_39 = 1; FUNC_0(VAR_37[VAR_39]); VAR_39++) {
      }


      if ((VAR_37[VAR_39] == 'a' || VAR_37[VAR_39] == 's' || VAR_37[VAR_39] == 'm' || VAR_37[VAR_39] == 'h' || VAR_37[VAR_39] == 'd' || VAR_37[VAR_39] == 'n' || VAR_37[VAR_39] == 'y' ||
          VAR_37[VAR_39] == 'w' || VAR_37[VAR_39] == 'A' || VAR_37[VAR_39] == 'S' || VAR_37[VAR_39] == 'M' || VAR_37[VAR_39] == 'H' || VAR_37[VAR_39] == 'D' || VAR_37[VAR_39] == 'N' ||
          VAR_37[VAR_39] == 'Y' || VAR_37[VAR_39] == 'W') &&
          (VAR_36[VAR_37[VAR_39 + 1]] == 0)) {
        *VAR_38 = VAR_35;
        VAR_39 += 1;
        return VAR_39;
      }

      int32_t VAR_43 = 1;
      while (VAR_37[VAR_39] == '.' && FUNC_0(VAR_37[VAR_39 + 1])) {
        VAR_39 += 2;
        while (FUNC_0(VAR_37[VAR_39])) {
          VAR_39++;
        }
        *VAR_38 = VAR_11;
        VAR_43++;
      }

      if (VAR_43 == 4) {
        *VAR_38 = VAR_18;
        return VAR_39;
      }

      if ((VAR_37[VAR_39] == 'e' || VAR_37[VAR_39] == 'E') &&
          (FUNC_0(VAR_37[VAR_39 + 1]) || ((VAR_37[VAR_39 + 1] == '+' || VAR_37[VAR_39 + 1] == '-') && FUNC_0(VAR_37[VAR_39 + 2])))) {
        VAR_39 += 2;
        while (FUNC_0(VAR_37[VAR_39])) {
          VAR_39++;
        }
        *VAR_38 = VAR_11;
      }
      return VAR_39;
    }
    case '[': {
      for (VAR_39 = 1; VAR_37[VAR_39] && VAR_37[VAR_39 - 1] != ']'; VAR_39++) {
      }
      *VAR_38 = VAR_15;
      return VAR_39;
    }
    case 'T':
    case 't':
    case 'F':
    case 'f': {
      for (VAR_39 = 1; ((VAR_37[VAR_39] & 0x80) == 0) && VAR_36[VAR_37[VAR_39]]; VAR_39++) {
      }

      if ((VAR_39 == 4 && FUNC_2(VAR_37, "true", 4) == 0) || (VAR_39 == 5 && FUNC_2(VAR_37, "false", 5) == 0)) {
        *VAR_38 = VAR_4;
        return VAR_39;
      }
    }
    default: {
      if (((*VAR_37 & 0x80) != 0) || !VAR_36[*VAR_37]) {
        break;
      }
      for (VAR_39 = 1; ((VAR_37[VAR_39] & 0x80) == 0) && VAR_36[VAR_37[VAR_39]]; VAR_39++) {
      }
      *VAR_38 = FUNC_3(VAR_37, VAR_39);
      return VAR_39;
    }
  }

  *VAR_38 = VAR_16;
  return 0;
}
