
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__ volatile*) ;
 int VAR_1 ;

__attribute__((used)) static inline boolean_t
FUNC_1(volatile uint32_t * VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5;
 boolean_t VAR_6;

 do {
  VAR_5 = VAR_4 = *VAR_2;

  if (++VAR_5 >= VAR_3) {
   VAR_6 = VAR_1;
   VAR_5 = 0;
  } else {
   VAR_6 = VAR_0;
  }

 } while (!FUNC_0(VAR_4, VAR_5, VAR_2));

 return VAR_6;
}
