
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxio_rdev {struct cxio_hal_resource* rscp; } ;
struct cxio_hal_resource {int tpt_fifo; int qpid_fifo; int cqid_fifo; int pdid_fifo_lock; int pdid_fifo; int cqid_fifo_lock; int tpt_fifo_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxio_rdev*) ;
 int FUNC_1 (int *,int *,int ,int,int ) ;
 int FUNC_2 (int *,int *,int ,int,int ) ;
 int FUNC_3 (int ) ;
 struct cxio_hal_resource* FUNC_4 (int,int ) ;

int FUNC_5(struct cxio_rdev *VAR_2,
      u32 VAR_3, u32 VAR_4,
      u32 VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9 = 0;
 struct cxio_hal_resource *VAR_10;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_2->rscp = VAR_10;
 VAR_9 = FUNC_2(&VAR_10->tpt_fifo,
          &VAR_10->tpt_fifo_lock,
          VAR_3, 1, 0);
 if (VAR_9)
  goto tpt_err;
 VAR_9 = FUNC_0(VAR_2);
 if (VAR_9)
  goto qpid_err;
 VAR_9 = FUNC_1(&VAR_10->cqid_fifo, &VAR_10->cqid_fifo_lock,
          VAR_7, 1, 0);
 if (VAR_9)
  goto cqid_err;
 VAR_9 = FUNC_1(&VAR_10->pdid_fifo, &VAR_10->pdid_fifo_lock,
          VAR_8, 1, 0);
 if (VAR_9)
  goto pdid_err;
 return 0;
pdid_err:
 FUNC_3(VAR_10->cqid_fifo);
cqid_err:
 FUNC_3(VAR_10->qpid_fifo);
qpid_err:
 FUNC_3(VAR_10->tpt_fifo);
tpt_err:
 return -VAR_0;
}
