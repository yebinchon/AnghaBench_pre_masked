
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 unsigned long VAR_0 ;
 void* FUNC_0 (unsigned long) ;

__attribute__((used)) static void *FUNC_1(u64 VAR_1)
{
 if (VAR_1 & (1UL << 63))
  return (void *) (VAR_0 | VAR_1);

 return FUNC_0(VAR_1);
}
