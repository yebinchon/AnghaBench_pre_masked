
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*,int ,int) ;
 int FUNC_2 (int ,unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_3 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  unsigned char VAR_6[2];
  int VAR_7;


  VAR_7 = FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5);
  if (VAR_7 != VAR_0)
    return VAR_7;


  VAR_7 = FUNC_2(VAR_2,VAR_6,VAR_4,2);
  if (VAR_7 != VAR_0) {
    if (VAR_7 != 2) FUNC_0();
    if (VAR_5 < 2)
      return VAR_1;
    VAR_3[0] = VAR_6[0];
    VAR_3[1] = VAR_6[1];
    return 2;
  }

  return VAR_0;
}
