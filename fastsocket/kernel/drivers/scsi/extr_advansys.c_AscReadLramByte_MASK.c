
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef unsigned char uchar ;
typedef int PortAddr ;


 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static uchar FUNC_3(PortAddr VAR_0, ushort VAR_1)
{
 unsigned char VAR_2;
 unsigned short VAR_3;

 if (FUNC_2(VAR_1)) {
  FUNC_1(VAR_0, VAR_1 - 1);
  VAR_3 = FUNC_0(VAR_0);
  VAR_2 = (VAR_3 >> 8) & 0xFF;
 } else {
  FUNC_1(VAR_0, VAR_1);
  VAR_3 = FUNC_0(VAR_0);
  VAR_2 = VAR_3 & 0xFF;
 }
 return VAR_2;
}
