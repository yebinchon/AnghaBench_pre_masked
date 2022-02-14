
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline __u32 FUNC_2(umode_t VAR_2, __u32 VAR_3)
{
 if (FUNC_0(VAR_2))
  return VAR_3;
 else if (FUNC_1(VAR_2))
  return VAR_3 & VAR_1;
 else
  return VAR_3 & VAR_0;
}
