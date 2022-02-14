
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int uchar ;
typedef scalar_t__ PortAddr ;


 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(PortAddr VAR_1, ushort VAR_2, uchar *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(2, "DvcPutScsiQ", VAR_3, 2 * VAR_4);
 FUNC_1(VAR_1, VAR_2);
 for (VAR_5 = 0; VAR_5 < 2 * VAR_4; VAR_5 += 2) {
  if (VAR_5 == 4 || VAR_5 == 20) {
   continue;
  }
  FUNC_2(VAR_1 + VAR_0,
        ((ushort)VAR_3[VAR_5 + 1] << 8) | VAR_3[VAR_5]);
 }
}
