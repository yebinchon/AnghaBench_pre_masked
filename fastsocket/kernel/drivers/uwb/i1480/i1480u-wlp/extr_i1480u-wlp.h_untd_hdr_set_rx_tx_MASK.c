
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untd_hdr {int type; } ;



__attribute__((used)) static inline void FUNC_0(struct untd_hdr *VAR_0, int VAR_1)
{
 VAR_0->type = (VAR_0->type & ~0x04) | (VAR_1 << 2);
}
