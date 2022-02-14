
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pdi {int * data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pdi const*) ;
 size_t FUNC_1 (struct pdi const*) ;

__attribute__((used)) static const struct pdi *
FUNC_2(const struct pdi *VAR_1, u32 VAR_2, const void *VAR_3)
{
 const struct pdi *VAR_4 = VAR_1;

 VAR_3 -= sizeof(struct pdi);

 while (((void *) VAR_4 <= VAR_3) &&
        (FUNC_0(VAR_4) != VAR_0)) {


  if (FUNC_0(VAR_4) == VAR_2)
   return VAR_4;

  VAR_4 = (struct pdi *) &VAR_4->data[FUNC_1(VAR_4)];
 }
 return ((void*)0);
}
