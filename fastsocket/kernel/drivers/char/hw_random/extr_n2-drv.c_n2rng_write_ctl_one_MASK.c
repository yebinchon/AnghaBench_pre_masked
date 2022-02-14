
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng {int hvapi_major; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct n2rng*,int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_3(struct n2rng *VAR_2, int VAR_3,
      unsigned long VAR_4,
      unsigned long VAR_5,
      unsigned long VAR_6,
      unsigned long *VAR_7)
{
 unsigned long VAR_8;

 if (VAR_2->hvapi_major == 1) {
  VAR_8 = FUNC_1(VAR_5, VAR_4,
      VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_2(VAR_5, VAR_4,
      VAR_6, VAR_3);
  if (VAR_8 == VAR_0)
   VAR_8 = FUNC_0(VAR_2, VAR_3);
  *VAR_7 = VAR_1;
 }

 return VAR_8;
}
