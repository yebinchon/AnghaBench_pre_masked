
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpacpi_rfk {int rfkill; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct tpacpi_rfk** VAR_1 ;

__attribute__((used)) static void FUNC_1(bool VAR_2)
{
 unsigned int VAR_3;
 struct tpacpi_rfk *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_1[VAR_3];
  if (VAR_4) {
   if (FUNC_0(VAR_4->rfkill,
      VAR_2)) {

   }
  }
 }
}
