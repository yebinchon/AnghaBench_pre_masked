
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_3, ushort * VAR_4, ushort * VAR_5)
{
 unsigned int VAR_6 = VAR_1;
 ushort *VAR_7;

 for (VAR_7 = VAR_4; VAR_7 <= VAR_5; VAR_7++) {
  while (!(FUNC_1(VAR_3 + VAR_2) & VAR_0)) {
   FUNC_3(1L);
   if (--VAR_6 == 0)
    return 1;
  }
  VAR_6 = VAR_1;
  *VAR_7 = FUNC_0(FUNC_2(VAR_3));
 }

 return 0;
}
