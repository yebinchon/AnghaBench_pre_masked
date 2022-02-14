
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_bbatt {scalar_t__ att; } ;



__attribute__((used)) static inline bool FUNC_0(const struct b43_bbatt *VAR_0,
         const struct b43_bbatt *VAR_1)
{
 return (VAR_0->att == VAR_1->att);
}
