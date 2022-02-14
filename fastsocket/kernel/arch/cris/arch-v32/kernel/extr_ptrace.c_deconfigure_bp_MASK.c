
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (long,scalar_t__) ;
 int FUNC_1 (long,scalar_t__,unsigned long) ;

void FUNC_2(long VAR_3)
{
 int VAR_4;


 if (VAR_2 != VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  unsigned long VAR_5;

  FUNC_1(VAR_3, VAR_0 + 3 + (VAR_4 * 2), 0);
  FUNC_1(VAR_3, VAR_0 + 4 + (VAR_4 * 2), 0);


  VAR_5 = FUNC_0(VAR_3, VAR_1) & ~(3 << (2 + (VAR_4 * 4)));
  FUNC_1(VAR_3, VAR_1, VAR_5);
 }

 VAR_2 = 0;
}
