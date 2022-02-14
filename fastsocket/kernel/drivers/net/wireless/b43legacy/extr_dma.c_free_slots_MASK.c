
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_dmaring {int nr_slots; int used_slots; } ;



__attribute__((used)) static inline int FUNC_0(struct b43legacy_dmaring *VAR_0)
{
 return (VAR_0->nr_slots - VAR_0->used_slots);
}
