
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static inline s64
FUNC_0(loff_t VAR_1)
{
 s64 VAR_2;
 if (VAR_1 > VAR_0)
  VAR_2 = VAR_0;
 else if (VAR_1 < -VAR_0)
  VAR_2 = -VAR_0;
 else
  VAR_2 = VAR_1;
 return VAR_2;
}
