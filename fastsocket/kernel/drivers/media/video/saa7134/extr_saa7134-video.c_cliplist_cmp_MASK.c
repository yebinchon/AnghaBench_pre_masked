
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cliplist {scalar_t__ position; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct cliplist *VAR_2 = VAR_0;
 const struct cliplist *VAR_3 = VAR_1;
 if (VAR_2->position < VAR_3->position)
  return -1;
 if (VAR_2->position > VAR_3->position)
  return 1;
 return 0;
}
