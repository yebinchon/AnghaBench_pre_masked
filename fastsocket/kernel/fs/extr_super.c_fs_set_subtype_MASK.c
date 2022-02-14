
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct TYPE_2__ {int s_subtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct vfsmount*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static struct vfsmount *FUNC_4(struct vfsmount *VAR_3, const char *VAR_4)
{
 int VAR_5;
 const char *VAR_6 = FUNC_3(VAR_4, '.');
 if (VAR_6) {
  VAR_6++;
  VAR_5 = -VAR_0;
  if (!VAR_6[0])
   goto err;
 } else
  VAR_6 = "";

 VAR_3->mnt_sb->s_subtype = FUNC_1(VAR_6, VAR_2);
 VAR_5 = -VAR_1;
 if (!VAR_3->mnt_sb->s_subtype)
  goto err;
 return VAR_3;

 err:
 FUNC_2(VAR_3);
 return FUNC_0(VAR_5);
}
