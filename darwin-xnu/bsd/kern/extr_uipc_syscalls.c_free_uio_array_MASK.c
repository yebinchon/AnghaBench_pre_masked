
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uio {int dummy; } ;


 int FUNC_0 (struct uio*) ;

void
FUNC_1(struct uio **VAR_0, u_int VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] != ((void*)0))
   FUNC_0(VAR_0[VAR_2]);
 }
}
