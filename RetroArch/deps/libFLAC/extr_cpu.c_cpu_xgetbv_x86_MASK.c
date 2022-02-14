
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t
FUNC_1(void)
{



 uint32_t VAR_0, VAR_1;
 __asm__ volatile (".byte 0x0f, 0x01, 0xd0" : "=a"(VAR_0), "=d"(VAR_1) : "c" (0));
 return VAR_0;



}
