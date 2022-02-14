
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_map {int len; TYPE_1__* scan; } ;
struct TYPE_2__ {unsigned int scancode; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct rc_map *VAR_0,
       unsigned int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = VAR_0->len - 1;
 int VAR_4;

 while (VAR_2 <= VAR_3) {
  VAR_4 = (VAR_2 + VAR_3) / 2;
  if (VAR_0->scan[VAR_4].scancode < VAR_1)
   VAR_2 = VAR_4 + 1;
  else if (VAR_0->scan[VAR_4].scancode > VAR_1)
   VAR_3 = VAR_4 - 1;
  else
   return VAR_4;
 }

 return -1U;
}
