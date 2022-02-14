
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static int
FUNC_0(uint64_t * VAR_0)
{
 uint8_t VAR_1;

 asm volatile("rdrand %0; setc %1" : "=r"(*VAR_0), "=qm"(VAR_1));

 return (int)VAR_1;
}
