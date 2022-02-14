
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconv_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char**,size_t*,char**,size_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_1, size_t VAR_2, int VAR_3,
        const char *VAR_4, int VAR_5, int VAR_6)

{
  int VAR_7;
  iconv_t VAR_8;
  size_t VAR_9;
  if(VAR_6 == 65535)
    VAR_6 = VAR_0;

  if(VAR_3 == 65535)
    VAR_3 = VAR_0;

  if(VAR_6 == VAR_3) {
    VAR_9 = VAR_5 >= 0? VAR_5: FUNC_5(VAR_4) + 1;
    VAR_7 = VAR_9 < VAR_2? VAR_9: VAR_2;

    if(VAR_4 != VAR_1 && VAR_7 > 0)
      FUNC_4(VAR_1, VAR_4, VAR_7);

    return VAR_7;
    }

  if(VAR_5 < 0) {
    VAR_9 = 0;
    VAR_8 = FUNC_3(VAR_3, VAR_6, 1);
    }
  else {
    VAR_9 = (size_t) VAR_5;
    VAR_8 = FUNC_3(VAR_3, VAR_6, 0);
    }

  if(FUNC_0(VAR_8))
    return -1;

  VAR_7 = VAR_2;

  if((int) FUNC_1(VAR_8, (char * *) &VAR_4, &VAR_9, &VAR_1, &VAR_2) < 0)
    VAR_7 = -1;
  else
    VAR_7 -= VAR_2;

  FUNC_2(VAR_8);
  return VAR_7;
}
