
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_tab {int read; int real; } ;



__attribute__((used)) static int FUNC_0(const struct stb0899_tab *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0, VAR_5;

 if (VAR_2 < VAR_0[VAR_4].read)
  VAR_3 = VAR_0[VAR_4].real;
 else if (VAR_2 >= VAR_0[VAR_1].read)
  VAR_3 = VAR_0[VAR_1].real;
 else {
  while ((VAR_1 - VAR_4) > 1) {
   VAR_5 = (VAR_1 + VAR_4) / 2;
   if (VAR_2 >= VAR_0[VAR_4].read && VAR_2 < VAR_0[VAR_5].read)
    VAR_1 = VAR_5;
   else
    VAR_4 = VAR_5;
  }
  VAR_3 = ((VAR_2 - VAR_0[VAR_4].read) *
         (VAR_0[VAR_1].real - VAR_0[VAR_4].real) /
         (VAR_0[VAR_1].read - VAR_0[VAR_4].read)) +
   VAR_0[VAR_4].real;
 }

 return VAR_3;
}
