
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_ptr {int member_1; int member_0; } ;



__attribute__((used)) static void FUNC_0(void)
{
 static const struct gdt_ptr VAR_0 = {0, 0};
 asm volatile("lidtl %0" : : "m" (VAR_0));
}
