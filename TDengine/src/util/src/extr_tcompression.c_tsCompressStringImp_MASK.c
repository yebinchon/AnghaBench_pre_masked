
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const,char* const,int,int) ;
 int FUNC_1 (char* const,char const* const,int) ;

int FUNC_2(const char *const VAR_0, int VAR_1, char *const VAR_2, int VAR_3) {

  const int VAR_4 = FUNC_0(VAR_0, VAR_2 + 1, VAR_1, VAR_3-1);


  if (VAR_4 <= 0 || VAR_4 > VAR_1) {

    VAR_2[0] = 0;
    FUNC_1(VAR_2 + 1, VAR_0, VAR_1);
    return VAR_1 + 1;
  }

  VAR_2[0] = 1;
  return VAR_4 + 1;
}
