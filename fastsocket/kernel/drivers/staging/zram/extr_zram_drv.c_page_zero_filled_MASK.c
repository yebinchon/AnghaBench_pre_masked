
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1)
{
 unsigned int VAR_2;
 unsigned long *VAR_3;

 VAR_3 = (unsigned long *)VAR_1;

 for (VAR_2 = 0; VAR_2 != VAR_0 / sizeof(*VAR_3); VAR_2++) {
  if (VAR_3[VAR_2])
   return 0;
 }

 return 1;
}
