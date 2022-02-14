
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef scalar_t__ uchar ;
typedef int PortAddr ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(PortAddr VAR_0, ushort VAR_1, uchar VAR_2)
{
 ushort VAR_3;

 if (FUNC_2(VAR_1)) {
  VAR_1--;
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  VAR_3 &= 0x00FF;
  VAR_3 |= (((ushort)VAR_2 << 8) & 0xFF00);
 } else {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  VAR_3 &= 0xFF00;
  VAR_3 |= ((ushort)VAR_2 & 0x00FF);
 }
 FUNC_1(VAR_0, VAR_1, VAR_3);
}
