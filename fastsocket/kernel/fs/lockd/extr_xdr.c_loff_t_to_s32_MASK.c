
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;
typedef int __s32 ;


 int VAR_0 ;

__attribute__((used)) static inline __s32
FUNC_0(loff_t VAR_1)
{
 __s32 VAR_2;
 if (VAR_1 >= VAR_0)
  VAR_2 = VAR_0;
 else if (VAR_1 <= -VAR_0)
  VAR_2 = -VAR_0;
 else
  VAR_2 = VAR_1;
 return VAR_2;
}
