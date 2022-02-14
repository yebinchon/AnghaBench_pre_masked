
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thingie {int define; } ;



__attribute__((used)) static int FUNC_0(struct thingie *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].define != -1; VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].define)
   break;
 }
 if (VAR_0[VAR_2].define == -1)
  return -1;
 else
  return VAR_2;
}
