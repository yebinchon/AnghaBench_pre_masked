
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 int VAR_2;
 unsigned VAR_3;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_3 = ((VAR_1 >> (VAR_2 * 4)) & 0xf);

  FUNC_0(VAR_3 + ((VAR_3 > 9) ? 55 : 48),
     VAR_0 + 0xe0 + ((7 - VAR_2) << 2));
 }
}
