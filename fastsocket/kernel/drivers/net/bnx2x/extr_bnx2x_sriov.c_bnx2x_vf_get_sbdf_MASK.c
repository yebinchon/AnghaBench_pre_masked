
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_virtf {int devfn; int bus; } ;
struct bnx2x {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct bnx2x *VAR_0,
         struct bnx2x_virtf *VAR_1, u32 *VAR_2)
{
 *VAR_2 = VAR_1->devfn | (VAR_1->bus << 8);
}
