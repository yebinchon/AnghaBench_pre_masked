
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef scalar_t__ __u16 ;
typedef int __le16 ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(__u16 VAR_0, __u16 VAR_1, __u8 VAR_2[6])
{
 __le16 *VAR_3 = (__le16 *) VAR_2;
 VAR_3[1] = FUNC_0(VAR_0);
 VAR_3[2] = FUNC_0(VAR_1);
 VAR_3[0] = FUNC_0(VAR_0 + 1);
 return;
}
