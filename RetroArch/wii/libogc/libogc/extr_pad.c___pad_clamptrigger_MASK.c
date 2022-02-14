
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_0(u8 *VAR_1)
{
 u8 VAR_2, VAR_3;

 VAR_2 = VAR_0[0];
 VAR_3 = VAR_0[1];
 if(VAR_2>*VAR_1) *VAR_1 = 0;
 else if(VAR_3<*VAR_1) *VAR_1 = (VAR_3 - VAR_2);
 else *VAR_1 -= VAR_2;
}
