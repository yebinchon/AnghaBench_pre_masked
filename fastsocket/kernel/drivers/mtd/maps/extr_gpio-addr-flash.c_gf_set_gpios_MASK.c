
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_state {unsigned long win_size; size_t gpio_count; int* gpio_values; int * gpio_addrs; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct async_state *VAR_0, unsigned long VAR_1)
{
 size_t VAR_2 = 0;
 int VAR_3;
 VAR_1 /= VAR_0->win_size;
 do {
  VAR_3 = VAR_1 & (1 << VAR_2);
  if (VAR_0->gpio_values[VAR_2] != VAR_3) {
   FUNC_0(VAR_0->gpio_addrs[VAR_2], VAR_3);
   VAR_0->gpio_values[VAR_2] = VAR_3;
  }
 } while (++VAR_2 < VAR_0->gpio_count);
}
