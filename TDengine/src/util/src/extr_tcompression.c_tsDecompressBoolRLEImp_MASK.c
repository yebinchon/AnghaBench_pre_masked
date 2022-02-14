
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int) ;
 int FUNC_1 (char* const,char,unsigned int) ;

int FUNC_2(const char *const VAR_0, const int VAR_1, char *const VAR_2) {
  int VAR_3 = 0, VAR_4 = 0;
  while (1) {
    char VAR_5 = VAR_0[VAR_3++];
    unsigned VAR_6 = (VAR_5 >> 1) & FUNC_0(7);
    char VAR_7 = VAR_5 & FUNC_0(1);

    FUNC_1(VAR_2 + VAR_4, VAR_7, VAR_6);
    VAR_4 += VAR_6;
    if (VAR_4 >= VAR_1) {
      return VAR_1;
    }
  }
}
