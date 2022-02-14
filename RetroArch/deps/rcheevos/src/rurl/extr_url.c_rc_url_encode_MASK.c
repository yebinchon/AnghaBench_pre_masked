
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(char* VAR_0, size_t VAR_1, const char* VAR_2) {
  for (;;) {
    switch (*VAR_2) {
      case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j':
      case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't':
      case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
      case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J':
      case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T':
      case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
      case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
      case '-': case '_': case '.': case '~':
        if (VAR_1 >= 2) {
          *VAR_0++ = *VAR_2++;
          VAR_1--;
        }
        else {
          return -1;
        }

        break;

      default:
        if (VAR_1 >= 4) {
          FUNC_0(VAR_0, VAR_1, "%%%02x", (unsigned char)*VAR_2);
          VAR_0 += 3;
          VAR_2++;
          VAR_1 -= 3;
        }
        else {
          return -1;
        }

        break;

      case 0:
        *VAR_0 = 0;
        return 0;
    }
  }
}
