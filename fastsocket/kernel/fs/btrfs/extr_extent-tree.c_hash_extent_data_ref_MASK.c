
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int lenum ;
typedef int __le64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_0, u64 VAR_1, u64 VAR_2)
{
 u32 VAR_3 = ~(u32)0;
 u32 VAR_4 = ~(u32)0;
 __le64 VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5));
 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_4, &VAR_5, sizeof(VAR_5));
 VAR_5 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_4, &VAR_5, sizeof(VAR_5));

 return ((u64)VAR_3 << 31) ^ (u64)VAR_4;
}
