
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3)
{
 int VAR_4;
 u16 VAR_5 = 0;
 u16 *VAR_6, *VAR_7;

 VAR_2 = &VAR_1;

 VAR_6 = (u16 *) VAR_0;
 for (VAR_4 = 0; VAR_4 < 31; VAR_4++)
  VAR_5 += *VAR_6++;
 *VAR_6 = VAR_5;
 FUNC_1(VAR_3);

 VAR_6 = (u16 *) VAR_0;
 VAR_7 = (u16 *) VAR_2;
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++, VAR_6++, VAR_7++) {
  if (*VAR_6 != *VAR_7)
   FUNC_2(VAR_3, VAR_4, *VAR_6);
 }
 FUNC_0(VAR_3);
}
