
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int physical_reg_addr; int virtual_reg_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct wl1251 *VAR_4, int VAR_5)
{



 if (VAR_5 < VAR_2) {

  if (VAR_5 >= VAR_0) {
   FUNC_0("address out of range (%d)", VAR_5);
   return -VAR_1;
  }
  VAR_5 = VAR_3[VAR_5];
 }

 return VAR_5 - VAR_4->physical_reg_addr + VAR_4->virtual_reg_addr;
}
