
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const* const,char* const,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char* const,char const* const,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int const) ;

int FUNC_5(const char *const VAR_1, int VAR_2, char *const VAR_3, int VAR_4) {

  if (VAR_1[0] == 1) {

    const int VAR_5 = FUNC_0(VAR_1 + 1, VAR_3, VAR_2 - 1, VAR_4);
    if (VAR_5 < 0) {
      char VAR_6[128] = {0};
      FUNC_4(VAR_6, "decomp_size:%d, Error decompress in LZ4 algorithm!\n", VAR_5);
      FUNC_3(VAR_6);
      FUNC_1(VAR_0);
    }

    return VAR_5;
  } else if (VAR_1[0] == 0) {

    FUNC_2(VAR_3, VAR_1 + 1, VAR_2 - 1);
    return VAR_2 - 1;
  } else {
    FUNC_3("Wrong compressed string indicator!\n");
    FUNC_1(VAR_0);
  }
}
