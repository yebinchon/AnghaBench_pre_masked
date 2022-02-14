
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_dentry; } ;
struct cifs_fattr {scalar_t__ cf_uniqueid; int cf_mode; int cf_flags; } ;
struct TYPE_2__ {scalar_t__ uniqueid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2, void *VAR_3)
{
 struct cifs_fattr *VAR_4 = (struct cifs_fattr *) VAR_3;


 if (FUNC_0(VAR_2)->uniqueid != VAR_4->cf_uniqueid)
  return 0;


 if ((VAR_2->i_mode & VAR_1) != (VAR_4->cf_mode & VAR_1))
  return 0;


 if (FUNC_1(VAR_2->i_mode) && !FUNC_2(&VAR_2->i_dentry))
  VAR_4->cf_flags |= VAR_0;

 return 1;
}
