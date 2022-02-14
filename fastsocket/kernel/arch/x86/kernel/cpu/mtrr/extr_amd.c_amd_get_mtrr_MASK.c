
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mtrr_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_4, unsigned long *VAR_5,
      unsigned long *VAR_6, mtrr_type *VAR_7)
{
 unsigned long VAR_8, VAR_9;

 FUNC_0(VAR_0, VAR_8, VAR_9);

 if (VAR_4 == 1)
  VAR_8 = VAR_9;

 *VAR_5 = (VAR_8 & 0xFFFE0000) >> VAR_3;
 *VAR_7 = 0;
 if (VAR_8 & 1)
  *VAR_7 = VAR_1;
 if (VAR_8 & 2)
  *VAR_7 = VAR_2;
 if (!(VAR_8 & 3)) {
  *VAR_6 = 0;
  return;
 }
 VAR_8 = (~VAR_8) & 0x1FFFC;
 *VAR_6 = (VAR_8 + 4) << (15 - VAR_3);
}
