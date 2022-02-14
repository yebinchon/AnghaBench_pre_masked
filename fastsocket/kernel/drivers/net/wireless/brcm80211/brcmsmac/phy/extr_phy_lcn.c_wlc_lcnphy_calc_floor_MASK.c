
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s16 ;



__attribute__((used)) static int FUNC_0(s16 VAR_0, int VAR_1)
{
 int VAR_2;
 VAR_2 = 0;
 if (VAR_1 == 0) {
  if (VAR_0 < 0)
   VAR_2 = (VAR_0 - 1) / 2;
  else
   VAR_2 = VAR_0 / 2;
 }

 if (VAR_1 == 1) {
  if ((VAR_0 + 1) < 0)
   VAR_2 = (VAR_0) / 2;
  else
   VAR_2 = (VAR_0 + 1) / 2;
 }
 return VAR_2;
}
