
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ate_resource {int num_ate; int * ate; } ;



__attribute__((used)) static int FUNC_0(struct ate_resource *VAR_0, int VAR_1,
    int VAR_2)
{
 u64 *VAR_3 = VAR_0->ate;
 int VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0->num_ate;) {
  if (!VAR_3[VAR_4]) {
   int VAR_6;
   int VAR_7;
   VAR_7 = 0;
   VAR_5 = VAR_4;
   for (VAR_6 = VAR_5; VAR_6 < VAR_0->num_ate; VAR_6++) {
    if (!VAR_3[VAR_6]) {
     if (++VAR_7 == VAR_2)
      return VAR_5;
    } else {
     VAR_4 = VAR_6 + 1;
     break;
    }
   }
   if (VAR_6 >= VAR_0->num_ate)
    return -1;
  } else
   VAR_4++;
 }

 return -1;
}
