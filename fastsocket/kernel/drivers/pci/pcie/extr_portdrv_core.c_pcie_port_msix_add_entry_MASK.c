
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msix_entry {int entry; } ;



__attribute__((used)) static int FUNC_0(
 struct msix_entry *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0[VAR_3].entry == VAR_1)
   return VAR_3;

 VAR_0[VAR_3].entry = VAR_1;
 return VAR_3;
}
