
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfsmount {int * plane_root; } ;
typedef int devdirent_t ;


 int FUNC_0 (int *,int ,int **,struct devfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(struct devfsmount *VAR_2)
{
 devdirent_t * VAR_3;
 int VAR_4 = 0;

 if ((VAR_4 = FUNC_0(((void*)0), VAR_0, &VAR_3, VAR_2)))
         return VAR_4;
 VAR_2->plane_root = VAR_3;
 VAR_1++;
 return VAR_4;
}
