
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {TYPE_4__* ki_filp; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_8__ {TYPE_3__ f_path; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long long,unsigned long) ;

ssize_t FUNC_1(int VAR_1, struct kiocb *VAR_2, const struct iovec *VAR_3, loff_t VAR_4, unsigned long VAR_5)
{
 FUNC_0("NFS: nfs_direct_IO (%s) off/no(%Ld/%lu) EINVAL\n",
   VAR_2->ki_filp->f_path.dentry->d_name.name,
   (long long) VAR_4, VAR_5);

 return -VAR_0;
}
