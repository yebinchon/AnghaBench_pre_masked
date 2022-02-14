
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* ist; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (int ,unsigned int) ;
 char** VAR_5 ;

__attribute__((used)) static unsigned long *FUNC_1(unsigned VAR_6, unsigned long VAR_7,
      unsigned *VAR_8, char **VAR_9)
{
 unsigned VAR_10;





 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  unsigned long VAR_11 = FUNC_0(VAR_4, VAR_6).ist[VAR_10];




  if (VAR_7 >= VAR_11)
   continue;




  if (VAR_7 >= VAR_11 - VAR_2) {






   if (*VAR_8 & (1U << VAR_10))
    break;
   *VAR_8 |= 1U << VAR_10;
   *VAR_9 = VAR_5[VAR_10];
   return (unsigned long *)VAR_11;
  }
 }
 return ((void*)0);
}
