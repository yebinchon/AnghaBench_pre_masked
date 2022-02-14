
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overlay {int name; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(const struct overlay *VAR_0,
      const char *VAR_1, size_t VAR_2)
{
   size_t VAR_3;

   if (!VAR_0)
      return -1;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      if (FUNC_0(VAR_0[VAR_3].name, VAR_1))
         return VAR_3;
   }

   return -1;
}
