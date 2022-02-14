
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_bo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline uint32_t
FUNC_0(struct nouveau_bo *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6 = 0;

 if (VAR_5 & VAR_1)
  VAR_6 |= VAR_3;
 if (VAR_5 & VAR_0)
  VAR_6 |= VAR_2;

 return VAR_6;
}
