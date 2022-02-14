
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __le16 FUNC_2(int VAR_0, int VAR_1)
{
 uint16_t VAR_2;
 int VAR_3 = FUNC_1(VAR_0);
 if (VAR_1)
  VAR_2 = (0x1fef >> (12 - VAR_3));
 else
  VAR_2 = (1 << VAR_3);
 return FUNC_0(VAR_2);
}
