
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long unw_hash_index_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline unw_hash_index_t
FUNC_0 (unsigned long VAR_2)
{


 return (VAR_2 >> 4)*0x9e3779b97f4a7c16UL >> (64 - VAR_0);

}
