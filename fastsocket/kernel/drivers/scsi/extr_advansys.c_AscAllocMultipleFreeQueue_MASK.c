
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar ;
typedef int PortAddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static uchar
FUNC_1(PortAddr VAR_1, uchar VAR_2, uchar VAR_3)
{
 uchar VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2 = FUNC_0(VAR_1, VAR_2);
  if (VAR_2 == VAR_0)
   break;
 }
 return VAR_2;
}
