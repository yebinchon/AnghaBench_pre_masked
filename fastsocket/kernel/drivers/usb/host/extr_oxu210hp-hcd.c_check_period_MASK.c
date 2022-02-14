
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {unsigned int periodic_size; } ;


 int FUNC_0 (struct oxu_hcd*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct oxu_hcd *VAR_0,
   unsigned VAR_1, unsigned VAR_2,
   unsigned VAR_3, unsigned VAR_4)
{
 int VAR_5;




 if (VAR_2 >= 8)
  return 0;





 VAR_4 = 100 - VAR_4;




 if (FUNC_1(VAR_3 == 0)) {
  do {
   for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_5 > VAR_4)
     return 0;
   }
  } while ((VAR_1 += 1) < VAR_0->periodic_size);


 } else {
  do {
   VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
   if (VAR_5 > VAR_4)
    return 0;
  } while ((VAR_1 += VAR_3) < VAR_0->periodic_size);
 }

 return 1;
}
