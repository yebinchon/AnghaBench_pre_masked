
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  int VAR_7;
  int VAR_8;
  UWORD VAR_9 = VAR_1[(VAR_2 + VAR_6) % VAR_0];
  UBYTE VAR_10[3];
  VAR_7 = VAR_4[(VAR_2 + VAR_6) % VAR_0];
  FUNC_2("%3d %3d ", VAR_7 >> 8, VAR_7 & 0xff);
  for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
   VAR_10[VAR_8] = FUNC_0(VAR_9 + VAR_8);
   FUNC_1(VAR_9 + VAR_8, VAR_3[(VAR_2 + VAR_6) % VAR_0][VAR_8]);
  }
  FUNC_3(VAR_5, VAR_1[(VAR_2 + VAR_6) % VAR_0]);
  for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
   FUNC_1(VAR_9 + VAR_8, VAR_10[VAR_8]);
  }
 }
}
