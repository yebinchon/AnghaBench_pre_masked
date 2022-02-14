
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microcode_header_intel {int rev; } ;



__attribute__((used)) static inline int
FUNC_0(struct microcode_header_intel *VAR_0, int VAR_1)
{
 return (VAR_0->rev <= VAR_1) ? 0 : 1;
}
