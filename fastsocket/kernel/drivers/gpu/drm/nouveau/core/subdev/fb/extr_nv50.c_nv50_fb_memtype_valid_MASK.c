
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_fb {int dummy; } ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct nouveau_fb *VAR_1, u32 VAR_2)
{
 return VAR_0[(VAR_2 & 0xff00) >> 8] != 0;
}
