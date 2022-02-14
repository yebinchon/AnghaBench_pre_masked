
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tocode ;
typedef int iconv_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static iconv_t
FUNC_3(unsigned int VAR_1, unsigned int VAR_2,
                                                        unsigned int VAR_3)

{
  char VAR_4[VAR_0];
  char VAR_5[VAR_0];
  FUNC_1(VAR_4, VAR_2);
  FUNC_1(VAR_5, VAR_1);
  FUNC_2(VAR_5 + 13, 0, sizeof(VAR_5) - 13);

  if(VAR_3)
    VAR_4[18] = '1';

  return FUNC_0(VAR_5, VAR_4);
}
