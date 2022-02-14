
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(u64 VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_0((u32)VAR_0);
 if (VAR_1 >= 0)
  return VAR_1;
 VAR_1 = FUNC_0((u32)(VAR_0>>32));

 if (VAR_1 != 0)
  return 32 + VAR_1;

 return -1;
}
