
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isowbuf_t {int read; } ;



__attribute__((used)) static inline int FUNC_0(struct isowbuf_t *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 if (VAR_1 == VAR_2)
  return 0;
 VAR_3 = VAR_0->read;
 if (VAR_1 < VAR_2) {
  if (VAR_1 < VAR_3 && VAR_3 <= VAR_2)
   return +1;
  else
   return -1;
 } else {
  if (VAR_2 < VAR_3 && VAR_3 <= VAR_1)
   return -1;
  else
   return +1;
 }
}
