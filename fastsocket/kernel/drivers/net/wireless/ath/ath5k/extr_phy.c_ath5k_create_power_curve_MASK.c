
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int const,int const,int const,int const) ;

__attribute__((used)) static void
FUNC_1(s16 VAR_2, s16 VAR_3,
   const s16 *VAR_4, const u8 *VAR_5,
   u8 VAR_6,
   u8 *VAR_7, u8 VAR_8)
{
 u8 VAR_9[2] = { 0, 1 };
 s16 VAR_10 = 2 * VAR_2;
 int VAR_11;

 if (VAR_6 < 2)
  return;





 if (VAR_8 == VAR_1) {
  VAR_10 = VAR_2;
  VAR_2 = 0;
  VAR_3 = 63;
 }



 for (VAR_11 = 0; (VAR_11 <= (u16) (VAR_3 - VAR_2)) &&
 (VAR_11 < VAR_0); VAR_11++) {




  if ((VAR_10 > VAR_4[VAR_9[1]]) && (VAR_9[1] < VAR_6 - 1)) {
   VAR_9[0]++;
   VAR_9[1]++;
  }

  VAR_7[VAR_11] = (u8) FUNC_0(VAR_10,
      VAR_4[VAR_9[0]], VAR_4[VAR_9[1]],
      VAR_5[VAR_9[0]], VAR_5[VAR_9[1]]);



  VAR_10 += 2;
 }
}
