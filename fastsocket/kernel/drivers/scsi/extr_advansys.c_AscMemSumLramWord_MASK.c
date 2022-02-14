
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int PortAddr ;
typedef long ASC_DCNT ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static ASC_DCNT FUNC_1(PortAddr VAR_0, ushort VAR_1, int VAR_2)
{
 ASC_DCNT VAR_3;
 int VAR_4;

 VAR_3 = 0L;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1 += 2) {
  VAR_3 += FUNC_0(VAR_0, VAR_1);
 }
 return (VAR_3);
}
