
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfsmount {int * plane_root; } ;
typedef int devdirent_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;

void
FUNC_3(struct devfsmount *VAR_1)
{
 devdirent_t * VAR_2;

 VAR_2 = VAR_1->plane_root;
 if (VAR_2) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
 VAR_1->plane_root = ((void*)0);
 VAR_0--;

 if (VAR_0 > (VAR_0+1)) {
  FUNC_2("plane count wrapped around.\n");
 }
}
