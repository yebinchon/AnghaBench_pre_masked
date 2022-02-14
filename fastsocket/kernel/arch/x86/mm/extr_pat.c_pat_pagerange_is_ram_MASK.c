
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long resource_size_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(resource_size_t VAR_2, resource_size_t VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6;

 for (VAR_6 = (VAR_2 >> VAR_1); VAR_6 < (VAR_3 >> VAR_1);
      ++VAR_6) {







  if (VAR_6 >= (VAR_0 >> VAR_1) &&
      FUNC_0(VAR_6))
   VAR_4 = 1;
  else
   VAR_5 = 1;

  if (VAR_4 == VAR_5)
   return -1;
 }

 return VAR_4;
}
