
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum uart { ____Placeholder_uart } uart ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static enum uart FUNC_8(unsigned int VAR_5)
{
 unsigned char VAR_6,VAR_7,VAR_8;
 enum uart VAR_9;
 enum uart VAR_10[] =
  { VAR_0, VAR_4, VAR_1, VAR_2 };

 VAR_6 = FUNC_6(FUNC_2(VAR_5));
 FUNC_7(VAR_6 | 0x10, FUNC_2(VAR_5));
 VAR_7 = FUNC_6(FUNC_3(VAR_5));
 FUNC_7(0x1a, FUNC_2(VAR_5));
 VAR_8 = FUNC_6(FUNC_3(VAR_5)) & 0xf0;
 FUNC_7(VAR_6, FUNC_2(VAR_5));
 FUNC_7(VAR_7, FUNC_3(VAR_5));
 if (VAR_8 != 0x90)
  return VAR_4;
 FUNC_6(FUNC_4(VAR_5));
 FUNC_6(FUNC_4(VAR_5));
 FUNC_7(0x01, FUNC_0(VAR_5));
 VAR_9 = VAR_10[(FUNC_6(FUNC_1(VAR_5)) >> 6) & 3];
 if (VAR_9 == VAR_0) {
  FUNC_7(0x5a, FUNC_5(VAR_5));
  VAR_6 = FUNC_6(FUNC_5(VAR_5));
  FUNC_7(0xa5, FUNC_5(VAR_5));
  VAR_7 = FUNC_6(FUNC_5(VAR_5));
  if ((VAR_6 != 0x5a) || (VAR_7 != 0xa5))
   VAR_9 = VAR_3;
 }
 return VAR_9;
}
