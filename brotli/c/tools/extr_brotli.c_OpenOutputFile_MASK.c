
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (char const*,int,int) ;
 int VAR_10 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_6(const char* VAR_11, FILE** VAR_12,
                                  BROTLI_BOOL VAR_13) {
  int VAR_14;
  *VAR_12 = ((void*)0);
  if (!VAR_11) {
    *VAR_12 = FUNC_2(FUNC_0(VAR_6), "wb");
    return VAR_1;
  }
  VAR_14 = FUNC_4(VAR_11, VAR_2 | (VAR_13 ? 0 : VAR_3) | VAR_5 | VAR_4,
            VAR_7 | VAR_8);
  if (VAR_14 < 0) {
    FUNC_3(VAR_10, "failed to open output file [%s]: %s\n",
            FUNC_1(VAR_11), FUNC_5(VAR_9));
    return VAR_0;
  }
  *VAR_12 = FUNC_2(VAR_14, "wb");
  if (!*VAR_12) {
    FUNC_3(VAR_10, "failed to open output file [%s]: %s\n",
            FUNC_1(VAR_11), FUNC_5(VAR_9));
    return VAR_0;
  }
  return VAR_1;
}
