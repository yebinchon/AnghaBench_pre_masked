
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_time; } ;
struct TYPE_3__ {int flags; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 1;
 if (FUNC_1(VAR_1)->flags & VAR_0)
  return 0;
 if (!FUNC_3(VAR_1, VAR_2->d_time))
  return 0;

 if (FUNC_2(FUNC_1(VAR_1), VAR_1) < 0)
  return 0;
 if (!FUNC_3(VAR_1, VAR_2->d_time))
  return 0;
 return 1;
}
