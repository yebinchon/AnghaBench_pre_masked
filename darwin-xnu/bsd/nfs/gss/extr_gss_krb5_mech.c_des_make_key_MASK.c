
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static void
FUNC_2(const uint8_t VAR_0[7], uint8_t VAR_1[8])
{
 uint8_t VAR_2 = 0;

 FUNC_1(VAR_1, VAR_0, 7);
 for (int VAR_3 = 0; VAR_3 < 7; VAR_3++)
  VAR_2 |= ((VAR_1[VAR_3] & 1) << (VAR_3+1));
 VAR_1[7] = VAR_2;
 FUNC_0(VAR_1, 8);
}
