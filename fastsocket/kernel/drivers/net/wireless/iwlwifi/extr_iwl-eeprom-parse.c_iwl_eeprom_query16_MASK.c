
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u16 FUNC_2(const u8 *VAR_0, size_t VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_2 + sizeof(u16) > VAR_1))
  return 0;
 return FUNC_1((__le16 *)(VAR_0 + VAR_2));
}
