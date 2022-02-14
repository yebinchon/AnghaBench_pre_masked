
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aty128fb_par {scalar_t__ regbase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(volatile unsigned int VAR_0,
          const struct aty128fb_par *VAR_1)
{
 return FUNC_0 (VAR_1->regbase + VAR_0);
}
