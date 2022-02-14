
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int s64 ;
typedef int b ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int *,int) ;

__attribute__((used)) static inline s64 FUNC_2(u64 VAR_2, u64 VAR_3, u8 *VAR_4)
{
 u64 VAR_5[6];

 if (VAR_3 > VAR_0)
  return -1;
 FUNC_1(VAR_5, VAR_4, sizeof(VAR_5));
 return FUNC_0(VAR_1, VAR_2, VAR_3,
  VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5]);
}
