
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qib_user_info {int spu_userversion; unsigned int spu_port_alg; scalar_t__ spu_subctxt_cnt; } ;
struct qib_filedata {int rec_cpu_num; int pq; int subctxt; struct qib_ctxtdata* rcd; } ;
struct qib_devdata {int flags; TYPE_3__* pcidev; int unit; } ;
struct qib_ctxtdata {int ctxt; struct qib_devdata* dd; } ;
struct file {struct qib_filedata* private_data; TYPE_1__* f_dentry; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int pid; int comm; } ;
struct TYPE_5__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct file*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int,struct file*,struct qib_user_info const*) ;
 int FUNC_6 (struct file*,struct qib_user_info const*) ;
 int FUNC_7 (struct file*,struct qib_user_info const*,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (unsigned int,unsigned int) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_12 (TYPE_3__*,char*,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_13 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_12, const struct qib_user_info *VAR_13)
{
 int VAR_14;
 int VAR_15;
 unsigned VAR_16, VAR_17, VAR_18 = VAR_4;


 if (FUNC_3(VAR_12)) {
  VAR_14 = -VAR_0;
  goto done;
 }


 VAR_16 = VAR_13->spu_userversion >> 16;
 if (VAR_16 != VAR_7) {
  VAR_14 = -VAR_1;
  goto done;
 }

 VAR_17 = VAR_13->spu_userversion & 0xffff;

 if (VAR_17 >= 11 && VAR_13->spu_port_alg < VAR_5)
  VAR_18 = VAR_13->spu_port_alg;

 FUNC_9(&VAR_11);

 if (FUNC_11(VAR_16, VAR_17) &&
     VAR_13->spu_subctxt_cnt) {
  VAR_14 = FUNC_6(VAR_12, VAR_13);
  if (VAR_14) {
   if (VAR_14 > 0)
    VAR_14 = 0;
   goto done_chk_sdma;
  }
 }

 VAR_15 = FUNC_8(VAR_12->f_dentry->d_inode) - VAR_6;
 if (VAR_15)
  VAR_14 = FUNC_5(VAR_15 - 1, VAR_12, VAR_13);
 else
  VAR_14 = FUNC_7(VAR_12, VAR_13, VAR_18);

done_chk_sdma:
 if (!VAR_14) {
  struct qib_filedata *VAR_19 = VAR_12->private_data;
  const struct qib_ctxtdata *VAR_20 = VAR_19->rcd;
  const struct qib_devdata *VAR_21 = VAR_20->dd;
  unsigned int VAR_22;

  if (VAR_21->flags & VAR_3) {
   VAR_19->pq = FUNC_13(&VAR_21->pcidev->dev,
           VAR_21->unit,
           VAR_20->ctxt,
           VAR_19->subctxt);
   if (!VAR_19->pq)
    VAR_14 = -VAR_2;
  }
  VAR_22 = FUNC_2(FUNC_15(VAR_8));
  if (!VAR_14 && VAR_22 >= VAR_10) {
   int VAR_23;
   VAR_23 = FUNC_4(VAR_9,
        VAR_10);
   if (VAR_23 != VAR_10) {
    FUNC_0(VAR_23, VAR_9);
    VAR_19->rec_cpu_num = VAR_23;
   }
  } else if (VAR_22 == 1 &&
   FUNC_14(FUNC_1(FUNC_15(VAR_8)),
     VAR_9))
   FUNC_12(VAR_21->pcidev,
    "%s PID %u affinity set to cpu %d; already allocated\n",
    VAR_8->comm, VAR_8->pid,
    FUNC_1(FUNC_15(VAR_8)));
 }

 FUNC_10(&VAR_11);

done:
 return VAR_14;
}
