
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct p9_wstat {int size; int qid; int name; } ;
struct p9_rdir {int head; int tail; int mutex; int * buf; } ;
struct p9_fid {TYPE_5__* clnt; void* rdir; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {int f_pos; TYPE_4__* f_dentry; struct p9_fid* private_data; TYPE_3__ f_path; } ;
typedef int (* filldir_t ) (void*,int ,int ,int,int ,int ) ;
struct TYPE_10__ {int msize; int dotu; } ;
struct TYPE_9__ {int d_lock; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct p9_wstat*) ;
 int FUNC_2 (struct p9_rdir*) ;
 struct p9_rdir* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct p9_wstat*) ;
 int FUNC_8 (int *,int,struct p9_wstat*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct file*,int *,int *,int,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_5, void *VAR_6, filldir_t VAR_7)
{
 int VAR_8;
 struct p9_wstat VAR_9;
 int VAR_10 = 0;
 struct p9_fid *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 struct p9_rdir *VAR_14;

 FUNC_0(VAR_3, "name %s\n", VAR_5->f_path.dentry->d_name.name);
 VAR_11 = VAR_5->private_data;

 VAR_12 = VAR_11->clnt->msize - VAR_4;


 if (!VAR_11->rdir) {
  VAR_14 = FUNC_3(sizeof(struct p9_rdir) + VAR_12, VAR_2);

  if (VAR_14 == ((void*)0)) {
   VAR_10 = -VAR_1;
   goto exit;
  }
  FUNC_9(&VAR_5->f_dentry->d_lock);
  if (!VAR_11->rdir) {
   VAR_14->buf = (uint8_t *)VAR_14 + sizeof(struct p9_rdir);
   FUNC_4(&VAR_14->mutex);
   VAR_14->head = VAR_14->tail = 0;
   VAR_11->rdir = (void *) VAR_14;
   VAR_14 = ((void*)0);
  }
  FUNC_10(&VAR_5->f_dentry->d_lock);
  FUNC_2(VAR_14);
 }
 VAR_14 = (struct p9_rdir *) VAR_11->rdir;

 VAR_10 = FUNC_5(&VAR_14->mutex);
 while (VAR_10 == 0) {
  if (VAR_14->tail == VAR_14->head) {
   VAR_10 = FUNC_12(VAR_5, VAR_14->buf, ((void*)0),
       VAR_12, VAR_5->f_pos);
   if (VAR_10 <= 0)
    goto unlock_and_exit;

   VAR_14->head = 0;
   VAR_14->tail = VAR_10;
  }

  while (VAR_14->head < VAR_14->tail) {
   VAR_10 = FUNC_8(VAR_14->buf + VAR_14->head,
      VAR_12 - VAR_14->head, &VAR_9,
      VAR_11->clnt->dotu);
   if (VAR_10) {
    FUNC_0(VAR_3, "returned %d\n", VAR_10);
    VAR_10 = -VAR_0;
    FUNC_7(&VAR_9);
    goto unlock_and_exit;
   }
   VAR_13 = VAR_9.size+2;

   VAR_8 = VAR_7(VAR_6, VAR_9.name, FUNC_11(VAR_9.name),
       VAR_5->f_pos, FUNC_13(&VAR_9.qid), FUNC_1(&VAR_9));

   FUNC_7(&VAR_9);

   if (VAR_8) {
    VAR_10 = 0;
    goto unlock_and_exit;
   }
   VAR_14->head += VAR_13;
   VAR_5->f_pos += VAR_13;
  }
 }

unlock_and_exit:
 FUNC_6(&VAR_14->mutex);
exit:
 return VAR_10;
}
