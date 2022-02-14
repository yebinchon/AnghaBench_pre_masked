
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct l2t_entry {int const* addr; scalar_t__ v6; } ;



__attribute__((used)) static int FUNC_0(const struct l2t_entry *VAR_0, const u32 *VAR_1)
{
 if (VAR_0->v6)
  return (VAR_0->addr[0] ^ VAR_1[0]) | (VAR_0->addr[1] ^ VAR_1[1]) |
         (VAR_0->addr[2] ^ VAR_1[2]) | (VAR_0->addr[3] ^ VAR_1[3]);
 return VAR_0->addr[0] ^ VAR_1[0];
}
