
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int ar_posix_acl; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct posix_acl*) ;
 struct posix_acl* FUNC_4 (int ,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct posix_acl*) ;
 int FUNC_7 (struct posix_acl*,void*,size_t) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, const char *VAR_3,
     void *VAR_4, size_t VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_1(VAR_2);
 struct posix_acl *VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_6->sd_args.ar_posix_acl)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_4(FUNC_0(VAR_2), VAR_8);
 if (FUNC_2(VAR_7))
  return FUNC_3(VAR_7);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_7(VAR_7, VAR_4, VAR_5);
 FUNC_6(VAR_7);

 return VAR_9;
}
