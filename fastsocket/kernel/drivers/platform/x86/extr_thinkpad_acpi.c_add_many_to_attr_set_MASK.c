
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attribute_set {int dummy; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (struct attribute_set*,struct attribute*) ;

__attribute__((used)) static int FUNC_1(struct attribute_set *VAR_0,
   struct attribute **VAR_1,
   unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
