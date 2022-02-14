
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;


 int VAR_0 ;
 void** VAR_1 ;

__attribute__((used)) static void FUNC_0(u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = (VAR_4 - VAR_3);

 VAR_1[0] = VAR_2;

 for (VAR_6 = 1; VAR_6 < (VAR_0 / 16); ++VAR_6)
  VAR_1[VAR_6] = VAR_3;

 VAR_7 = VAR_0 * 15 / 16;
 for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5)
  VAR_1[VAR_6 + VAR_5] = VAR_3 + (VAR_8 * (VAR_5 + 1) / VAR_7);
}
