
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 u8 VAR_3;
 asm("repe; cmpsb; setnz %0"
     : "=qm" (VAR_3), "+D" (VAR_0), "+S" (VAR_1), "+c" (VAR_2));
 return VAR_3;
}
