
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_2,
         loff_t VAR_3, size_t VAR_4)
{
 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;

 if ((VAR_4 != 8) || (VAR_3 & 0x7))
  return -VAR_0;

 return 0;
}
