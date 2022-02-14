
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_rej_msg {int offset9; } ;



__attribute__((used)) static inline void FUNC_0(struct cm_rej_msg *VAR_0,
           u8 VAR_1)
{
 VAR_0->offset9 = (u8) ((VAR_0->offset9 & 0x1) | (VAR_1 << 1));
}
