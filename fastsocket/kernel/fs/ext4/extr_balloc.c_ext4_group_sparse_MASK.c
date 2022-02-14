
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext4_group_t ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(ext4_group_t VAR_0)
{
 if (VAR_0 <= 1)
  return 1;
 if (!(VAR_0 & 1))
  return 0;
 return (FUNC_0(VAR_0, 7) || FUNC_0(VAR_0, 5) ||
  FUNC_0(VAR_0, 3));
}
