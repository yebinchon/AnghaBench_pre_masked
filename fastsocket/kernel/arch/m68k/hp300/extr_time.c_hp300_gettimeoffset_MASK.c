
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned short VAR_2 ;
 unsigned char FUNC_0 (scalar_t__) ;

unsigned long FUNC_1(void)
{

  unsigned char VAR_3, VAR_4, VAR_5;
  unsigned short VAR_6;

  VAR_4 = FUNC_0(VAR_0 + 5);
  VAR_3 = FUNC_0(VAR_0 + 7);
  VAR_5 = FUNC_0(VAR_0 + 5);
  if (VAR_4 != VAR_5)

    VAR_3 = FUNC_0(VAR_0 + 7);
  VAR_6 = VAR_1 - ((VAR_5 << 8) | VAR_3);
  return (VAR_2 * VAR_6) / VAR_1;
}
