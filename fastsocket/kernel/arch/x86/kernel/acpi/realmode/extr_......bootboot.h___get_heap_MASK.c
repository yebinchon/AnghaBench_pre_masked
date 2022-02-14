
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

__attribute__((used)) static inline char *FUNC_0(size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 char *VAR_4;

 VAR_0 = (char *)(((size_t)VAR_0+(VAR_2-1)) & ~(VAR_2-1));
 VAR_4 = VAR_0;
 VAR_0 += VAR_1*VAR_3;
 return VAR_4;
}
