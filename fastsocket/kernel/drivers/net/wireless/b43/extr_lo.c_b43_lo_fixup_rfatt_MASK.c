
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_rfatt {int att; int with_padmix; } ;



__attribute__((used)) static inline void FUNC_0(struct b43_rfatt *VAR_0)
{
 if (!VAR_0->with_padmix)
  return;
 if ((VAR_0->att != 1) && (VAR_0->att != 2) && (VAR_0->att != 3))
  VAR_0->att = 4;
}
