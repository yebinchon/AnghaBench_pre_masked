
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dum_ch_setup {scalar_t__ ymin; scalar_t__ ymax; } ;



__attribute__((used)) static u32 FUNC_0(struct dum_ch_setup *VAR_0)
{
 return (VAR_0->ymax - VAR_0->ymin + 1);
}
