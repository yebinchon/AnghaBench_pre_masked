
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(s16 VAR_0[], u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6;
 int VAR_7 = 5;

 if (VAR_1 > 192) {

  VAR_0 += (VAR_1-192);
  VAR_1 = 192;
 }

 VAR_6 = (VAR_3 - VAR_2) / (VAR_7 - 1);

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_5 += FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_2 += VAR_6;
 }

 return (u32)FUNC_1(VAR_5 / VAR_7);
}
