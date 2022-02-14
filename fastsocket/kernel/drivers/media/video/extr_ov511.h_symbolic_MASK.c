
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbolic_list {char* name; int num; } ;


 char* VAR_0 ;

__attribute__((used)) static inline char *
FUNC_0(struct symbolic_list VAR_1[], int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].name != ((void*)0); VAR_3++)
   if (VAR_1[VAR_3].num == VAR_2)
    return (VAR_1[VAR_3].name);

 return (VAR_0);
}
