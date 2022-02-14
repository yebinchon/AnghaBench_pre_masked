
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng {int num_units; } ;


 int FUNC_0 (struct n2rng*,int) ;

__attribute__((used)) static int FUNC_1(struct n2rng *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_units; VAR_1++) {
  int VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
