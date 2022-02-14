
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_dmaring {int nr_slots; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct b43_dmaring *VAR_0, int VAR_1)
{
 FUNC_0(!(VAR_1 >= -1 && VAR_1 <= VAR_0->nr_slots - 1));
 if (VAR_1 == VAR_0->nr_slots - 1)
  return 0;
 return VAR_1 + 1;
}
