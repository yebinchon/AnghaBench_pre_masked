
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ s64 ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int ,int *,int *) ;

int64_t FUNC_1(u64 VAR_0, u64 *VAR_1, u64 *VAR_2, u64 *VAR_3)
{
 u64 VAR_4[2];
 s64 VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, (u8 *)VAR_4);
 if (VAR_5 == 0) {
  *VAR_2 = VAR_4[0];
  *VAR_3 = VAR_4[1];
 }
 return VAR_5;
}
