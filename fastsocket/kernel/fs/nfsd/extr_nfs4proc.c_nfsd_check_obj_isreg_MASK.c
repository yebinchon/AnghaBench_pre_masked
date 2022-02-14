
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct svc_fh {TYPE_2__* fh_dentry; } ;
typedef int __be32 ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_2(struct svc_fh *VAR_3)
{
 umode_t VAR_4 = VAR_3->fh_dentry->d_inode->i_mode;

 if (FUNC_1(VAR_4))
  return VAR_0;
 if (FUNC_0(VAR_4))
  return VAR_1;







 return VAR_2;
}
