
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const,int,int) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static void FUNC_4(int VAR_6, int VAR_7)
{
 const u32 VAR_8[] = { VAR_1,
    VAR_2 + VAR_5,
           VAR_3 + VAR_5 };
 const u32 VAR_9[] = { VAR_0,
    VAR_2 + VAR_4,
    VAR_3 + VAR_4 };
 int VAR_10, VAR_11;
 u32 VAR_12;

 FUNC_0(VAR_6 > 2);

 VAR_12 = FUNC_3(VAR_9[VAR_6]);
 VAR_12 &= FUNC_1(0, 11);
 if (VAR_7) {
  VAR_10 = VAR_12 * 3 / 4;
  VAR_11 = VAR_12;
 } else {
  VAR_10 = VAR_12 / 4;
  VAR_11 = VAR_12 * 3 / 4;
 }
 FUNC_2(VAR_8[VAR_6], FUNC_1(16, 12) | FUNC_1(0, 12),
   (VAR_11 << 16) | VAR_10);
}
