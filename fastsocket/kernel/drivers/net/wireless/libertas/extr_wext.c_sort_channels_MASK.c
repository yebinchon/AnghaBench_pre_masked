
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_freq {scalar_t__ i; int m; } ;



__attribute__((used)) static inline void FUNC_0(struct iw_freq *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 struct iw_freq VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1; VAR_3++)
   if (VAR_0[VAR_2].i > VAR_0[VAR_3].i) {
    VAR_4.i = VAR_0[VAR_2].i;
    VAR_4.m = VAR_0[VAR_2].m;

    VAR_0[VAR_2].i = VAR_0[VAR_3].i;
    VAR_0[VAR_2].m = VAR_0[VAR_3].m;

    VAR_0[VAR_3].i = VAR_4.i;
    VAR_0[VAR_3].m = VAR_4.m;
   }
}
