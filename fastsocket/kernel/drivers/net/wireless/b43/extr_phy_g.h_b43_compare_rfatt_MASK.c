
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_rfatt {scalar_t__ att; scalar_t__ with_padmix; } ;



__attribute__((used)) static inline bool FUNC_0(const struct b43_rfatt *VAR_0,
         const struct b43_rfatt *VAR_1)
{
 return ((VAR_0->att == VAR_1->att) &&
  (VAR_0->with_padmix == VAR_1->with_padmix));
}
