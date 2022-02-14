
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng {int hvapi_major; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_2(struct n2rng *VAR_1,
           unsigned long VAR_2,
           unsigned long VAR_3,
           unsigned long VAR_4,
           unsigned long *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_1->hvapi_major == 1) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 } else {
  VAR_6 = FUNC_1(VAR_3, VAR_4,
           VAR_2, VAR_5);
  if (!*VAR_5)
   *VAR_5 = VAR_0;
 }
 return VAR_6;
}
