
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ino_t ;



__attribute__((used)) static inline ino_t
FUNC_0(u64 VAR_0)
{
 ino_t VAR_1 = (ino_t) VAR_0;
 if (sizeof(ino_t) < sizeof(u64))
  VAR_1 ^= VAR_0 >> (sizeof(u64)-sizeof(ino_t)) * 8;
 return VAR_1;
}
