
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2, int VAR_3,
    unsigned long VAR_4)
{
 int VAR_5 = VAR_0 * (VAR_4 >> 12);

 VAR_4 &= 0x0fff;

 if (VAR_1) {
  FUNC_1(VAR_2 + VAR_5, VAR_4);
  FUNC_1(VAR_3, VAR_4 + 1);
  return 0;
 } else {
  FUNC_1(VAR_2 + VAR_5, VAR_4);
  return FUNC_0(VAR_4 + 1);
 }
}
