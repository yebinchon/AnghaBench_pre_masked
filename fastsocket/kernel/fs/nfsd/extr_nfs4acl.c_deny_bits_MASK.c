
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct posix_ace_state {int deny; int allow; } ;



__attribute__((used)) static inline void FUNC_0(struct posix_ace_state *VAR_0, u32 VAR_1)
{

 VAR_0->deny |= VAR_1 & ~VAR_0->allow;
}
