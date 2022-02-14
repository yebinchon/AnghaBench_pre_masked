
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (struct vfsmount*,struct path*,int) ;
 int FUNC_3 (int ) ;
 struct vfsmount* FUNC_4 (char*,int,char*,void*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct path *VAR_3, char *VAR_4, int VAR_5,
   int VAR_6, char *VAR_7, void *VAR_8)
{
 struct vfsmount *VAR_9;
 int VAR_10;

 if (!VAR_4)
  return -VAR_1;


 if (!FUNC_3(VAR_0))
  return -VAR_2;

 FUNC_5();
 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_7, VAR_8);
 FUNC_7();
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_2(VAR_9, VAR_3, VAR_6);
 if (VAR_10)
  FUNC_6(VAR_9);
 return VAR_10;
}
