
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct devfsmount {int dummy; } ;
typedef int devnode_type_t ;
struct TYPE_9__ {struct devfsmount* dn_dvm; } ;
typedef TYPE_1__ devnode_t ;
typedef int devdirent_t ;


 int FUNC_0 (char const*,TYPE_1__*,int *,TYPE_1__*,int **) ;
 int FUNC_1 (int,int *,TYPE_1__*,TYPE_1__**,struct devfsmount*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char const*,int) ;

int
FUNC_4(const char *VAR_0, devnode_t * VAR_1, int VAR_2, devnode_type_t * VAR_3,
       devnode_t * VAR_4, struct devfsmount *VAR_5, devdirent_t * *VAR_6)
{
 devnode_t * VAR_7;
 int VAR_8 = 0;

 if ((VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_7,
   (VAR_1?VAR_1->dn_dvm:VAR_5))) != 0)
 {
  FUNC_3("devfs: %s: base node allocation failed (Errno=%d)\n",
   VAR_0,VAR_8);
  return VAR_8;
 }
 if ((VAR_8 = FUNC_0(VAR_0 ,VAR_1 ,((void*)0), VAR_7, VAR_6)) != 0)
 {
  FUNC_2(VAR_7);
  FUNC_3("devfs: %s: name slot allocation failed (Errno=%d)\n",
         VAR_0,VAR_8);

 }
 return VAR_8;
}
