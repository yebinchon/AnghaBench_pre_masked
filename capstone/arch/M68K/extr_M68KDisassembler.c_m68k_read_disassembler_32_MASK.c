
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* code; } ;
typedef TYPE_1__ m68k_info ;



__attribute__((used)) static unsigned int FUNC_0(const m68k_info *VAR_0, const uint64_t VAR_1)
{
 const uint32_t VAR_2 = VAR_0->code[VAR_1 + 0];
 const uint32_t VAR_3 = VAR_0->code[VAR_1 + 1];
 const uint32_t VAR_4 = VAR_0->code[VAR_1 + 2];
 const uint32_t VAR_5 = VAR_0->code[VAR_1 + 3];
 return (VAR_2 << 24) | (VAR_3 << 16) | (VAR_4 << 8) | VAR_5;
}
