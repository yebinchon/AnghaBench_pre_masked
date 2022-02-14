
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnttab_map_grant_ref {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gnttab_map_grant_ref*) ;
 int FUNC_1 (unsigned int,void*,unsigned int) ;

int
FUNC_2(unsigned int VAR_1, void *VAR_2, unsigned int VAR_3)
{
 if (VAR_1 == VAR_0) {
  unsigned int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   FUNC_0(
    (struct gnttab_map_grant_ref *)VAR_2 + VAR_4);
  }
 }
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
