
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct TYPE_4__ {scalar_t__ s_magic; } ;
struct TYPE_3__ {scalar_t__ mnt_root; TYPE_2__* mnt_sb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct path*) ;
 int FUNC_1 (char const*,int ,struct path*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct path*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2,
        struct path *VAR_3,
        int VAR_4(struct path *VAR_5, void *VAR_6),
        void *VAR_7)
{
 struct path VAR_8;
 int VAR_9 = FUNC_1(VAR_2, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_9 = -VAR_1;
 while (VAR_8.dentry == VAR_8.mnt->mnt_root) {
  if (VAR_8.mnt->mnt_sb->s_magic == VAR_0) {
   if (VAR_4(&VAR_8, VAR_7)) {
    FUNC_2(&VAR_8);
    if (!VAR_9)
     FUNC_3(VAR_3);
    *VAR_3 = VAR_8;
    VAR_9 = 0;
   }
  }
  if (!FUNC_0(&VAR_8))
   break;
 }
 FUNC_3(&VAR_8);
 return VAR_9;
}
