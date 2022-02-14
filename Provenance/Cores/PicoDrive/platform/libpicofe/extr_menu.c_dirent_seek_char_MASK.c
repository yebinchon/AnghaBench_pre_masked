
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int * d_name; } ;


 char FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dirent **VAR_0, int VAR_1, int VAR_2, char VAR_3)
{
 int VAR_4;

 VAR_2++;
 for (VAR_4 = VAR_2 + 1; ; VAR_4++) {
  if (VAR_4 >= VAR_1)
   VAR_4 = 1;
  if (VAR_4 == VAR_2)
   break;

  if (FUNC_0(VAR_0[VAR_4]->d_name[0]) == VAR_3)
   break;
 }

 return VAR_4 - 1;
}
