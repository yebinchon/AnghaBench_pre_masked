
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipath_user_info {int spu_userversion; scalar_t__ spu_subport_cnt; } ;
struct ipath_portdata {int port_port; struct ipath_devdata* port_dd; } ;
struct ipath_filedata {int pq; int subport; struct ipath_portdata* pd; } ;
struct ipath_devdata {int ipath_unit; TYPE_3__* pcidev; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {struct ipath_filedata* private_data; TYPE_2__ f_path; } ;
struct TYPE_8__ {scalar_t__ i_rdev; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {TYPE_4__* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct file*,struct ipath_user_info const*) ;
 int FUNC_1 (int,struct file*,struct ipath_user_info const*) ;
 int FUNC_2 (struct file*,struct ipath_user_info const*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*,long,int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (char*,unsigned int,unsigned int) ;
 int VAR_7 ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_8,
         const struct ipath_user_info *VAR_9)
{
 int VAR_10;
 int VAR_11;
 unsigned VAR_12, VAR_13;


 if (FUNC_10(VAR_8)) {
  VAR_10 = -VAR_0;
  goto done;
 }


 VAR_12 = VAR_9->spu_userversion >> 16;
 if (VAR_12 != VAR_4) {
  FUNC_6("User major version %d not same as driver "
     "major %d\n", VAR_9->spu_userversion >> 16,
     VAR_4);
  VAR_10 = -VAR_1;
  goto done;
 }

 VAR_13 = VAR_9->spu_userversion & 0xffff;
 if (VAR_13 != VAR_5)
  FUNC_6("User minor version %d not same as driver "
     "minor %d\n", VAR_13, VAR_5);

 FUNC_8(&VAR_7);

 if (FUNC_5(VAR_12, VAR_13) &&
     VAR_9->spu_subport_cnt &&
     (VAR_10 = FUNC_2(VAR_8, VAR_9))) {
  if (VAR_10 > 0)
   VAR_10 = 0;
  goto done_chk_sdma;
 }

 VAR_11 = FUNC_3(VAR_8->f_path.dentry->d_inode) - VAR_3;
 FUNC_4(VAR_6, "open on dev %lx (minor %d)\n",
     (long)VAR_8->f_path.dentry->d_inode->i_rdev, VAR_11);

 if (VAR_11)
  VAR_10 = FUNC_1(VAR_11 - 1, VAR_8, VAR_9);
 else
  VAR_10 = FUNC_0(VAR_8, VAR_9);

done_chk_sdma:
 if (!VAR_10) {
  struct ipath_filedata *VAR_14 = VAR_8->private_data;
  const struct ipath_portdata *VAR_15 = VAR_14->pd;
  const struct ipath_devdata *VAR_16 = VAR_15->port_dd;

  VAR_14->pq = FUNC_7(&VAR_16->pcidev->dev,
            VAR_16->ipath_unit,
            VAR_15->port_port,
            VAR_14->subport);

  if (!VAR_14->pq)
   VAR_10 = -VAR_2;
 }

 FUNC_9(&VAR_7);

done:
 return VAR_10;
}
