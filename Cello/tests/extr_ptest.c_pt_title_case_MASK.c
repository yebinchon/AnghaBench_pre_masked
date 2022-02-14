
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 unsigned int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char* VAR_0, const char* VAR_1) {

  int VAR_2 = 1;
  unsigned int VAR_3;

  FUNC_0(VAR_0, VAR_1);

  for(VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {

    if (VAR_0[VAR_3] == '_' || VAR_0[VAR_3] == ' ') {
      VAR_2 = 1;
      VAR_0[VAR_3] = ' ';
      continue;
    }

    if (VAR_2 && VAR_0[VAR_3] >= 'a' && VAR_0[VAR_3] <= 'z') {
      VAR_2 = 0;
      VAR_0[VAR_3] = VAR_0[VAR_3] - 32;
      continue;
    }

    VAR_2 = 0;

  }

}
