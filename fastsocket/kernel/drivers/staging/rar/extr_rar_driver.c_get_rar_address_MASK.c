
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RAR_address_struct {int low; int high; } ;


 int VAR_0 ;
 struct RAR_address_struct* VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(int VAR_3,struct RAR_address_struct *VAR_4)
{
 if (VAR_2 && (VAR_3 < 3) && (VAR_3 >= 0)) {
  *VAR_4=VAR_1[VAR_3];

  VAR_4->low = VAR_4->low & 0xfffffff0;
  VAR_4->high = VAR_4->high & 0xfffffff0;
  return 0;
  }

 else {
  return -VAR_0;
  }
}
