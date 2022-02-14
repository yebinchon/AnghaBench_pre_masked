
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0 (char **VAR_5, int *VAR_6) {
  int VAR_7 = 0;
  int VAR_8;
  for (VAR_8 = 1; VAR_5[VAR_8] != ((void*)0); VAR_8++) {
    *VAR_6 = VAR_8;
    if (VAR_5[VAR_8][0] != '-')
        return VAR_7;
    switch (VAR_5[VAR_8][1]) {
      case '-':
        if (VAR_5[VAR_8][2] != '\0')
          return VAR_2;
        *VAR_6 = VAR_8 + 1;
        return VAR_7;
      case '\0':
        return VAR_7;
      case 'E':
        if (VAR_5[VAR_8][2] != '\0')
          return VAR_2;
        VAR_7 |= VAR_0;
        break;
      case 'i':
        VAR_7 |= VAR_3;
      case 'v':
        if (VAR_5[VAR_8][2] != '\0')
          return VAR_2;
        VAR_7 |= VAR_4;
        break;
      case 'e':
        VAR_7 |= VAR_1;
      case 'l':
        if (VAR_5[VAR_8][2] == '\0') {
          VAR_8++;
          if (VAR_5[VAR_8] == ((void*)0) || VAR_5[VAR_8][0] == '-')
            return VAR_2;
        }
        break;
      default:
        return VAR_2;
    }
  }
  *VAR_6 = VAR_8;
  return VAR_7;
}
