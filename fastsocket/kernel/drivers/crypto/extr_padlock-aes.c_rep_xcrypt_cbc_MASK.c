
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cword {int dummy; } ;



__attribute__((used)) static inline u8 *FUNC_0(const u8 *VAR_0, u8 *VAR_1, void *VAR_2,
     u8 *VAR_3, struct cword *VAR_4, int VAR_5)
{
 asm volatile (".byte 0xf3,0x0f,0xa7,0xd0"
        : "+S" (VAR_0), "+D" (VAR_1), "+a" (VAR_3)
        : "d" (VAR_4), "b" (VAR_2), "c" (VAR_5));
 return VAR_3;
}
