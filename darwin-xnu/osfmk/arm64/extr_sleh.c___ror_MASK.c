
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline unsigned
FUNC_0(unsigned VAR_1, unsigned VAR_2)
{
 return (((unsigned)(VAR_1) >> (unsigned)(VAR_2)) |
         (unsigned)(VAR_1) << ((unsigned)(sizeof(unsigned) * VAR_0) - (unsigned)(VAR_2)));
}
