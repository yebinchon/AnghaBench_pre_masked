
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSKextVersionStage ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static OSKextVersionStage FUNC_2(const char ** VAR_6) {
    const char * VAR_7;

    if (!VAR_6 || !*VAR_6) {
        return VAR_4;
    }

    VAR_7 = *VAR_6;

    if (FUNC_1(VAR_7[0]) || VAR_7[0] == '\0') {
        return VAR_5;
    } else {
        switch (VAR_7[0]) {
          case 'd':
              if (FUNC_0(VAR_7[1])) {
                  *VAR_6 = &VAR_7[1];
                  return VAR_3;
              }
              break;
          case 'a':
              if (FUNC_0(VAR_7[1])) {
                  *VAR_6 = &VAR_7[1];
                  return VAR_0;
              }
              break;
          case 'b':
              if (FUNC_0(VAR_7[1])) {
                  *VAR_6 = &VAR_7[1];
                  return VAR_1;
              }
              break;
          case 'f':
              if (FUNC_0(VAR_7[1])) {
                  *VAR_6 = &VAR_7[1];
                  return VAR_2;
              } else if (VAR_7[1] == 'c' && FUNC_0(VAR_7[2])) {
                  *VAR_6 = &VAR_7[2];
                  return VAR_2;
              } else {
                  return VAR_4;
              }
          default:
              return VAR_4;
        }
    }

    return VAR_4;
}
