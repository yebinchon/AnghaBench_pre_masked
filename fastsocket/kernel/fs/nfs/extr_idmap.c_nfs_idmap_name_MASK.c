
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_pipe_msg {int len; int im_status; int im_name; struct rpc_pipe_msg* data; int im_id; int im_conv; int im_type; } ;
struct idmap_msg {int len; int im_status; int im_name; struct idmap_msg* data; int im_id; int im_conv; int im_type; } ;
struct idmap_hashtable {int h_type; } ;
struct idmap_hashent {unsigned int ih_namelen; int ih_name; } ;
struct idmap {int idmap_lock; int idmap_im_lock; int idmap_wq; TYPE_1__* idmap_dentry; struct rpc_pipe_msg idmap_im; } ;
typedef int msg ;
typedef int __u32 ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 struct idmap_hashent* FUNC_3 (struct idmap_hashtable*,int ) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 int FUNC_5 (struct rpc_pipe_msg*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ,struct rpc_pipe_msg*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 unsigned int FUNC_12 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_13(struct idmap *VAR_8, struct idmap_hashtable *VAR_9,
  __u32 VAR_10, char *VAR_11)
{
 struct rpc_pipe_msg VAR_12;
 struct idmap_msg *VAR_13;
 struct idmap_hashent *VAR_14;
 FUNC_0(VAR_7, VAR_6);
 int VAR_15 = -VAR_0;
 unsigned int VAR_16;

 VAR_13 = &VAR_8->idmap_im;

 FUNC_6(&VAR_8->idmap_lock);
 FUNC_6(&VAR_8->idmap_im_lock);

 VAR_14 = FUNC_3(VAR_9, VAR_10);
 if (VAR_14) {
  FUNC_4(VAR_11, VAR_14->ih_name, VAR_14->ih_namelen);
  VAR_15 = VAR_14->ih_namelen;
  goto out;
 }

 FUNC_5(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->im_type = VAR_9->h_type;
 VAR_13->im_conv = VAR_1;
 VAR_13->im_id = VAR_10;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.data = VAR_13;
 VAR_12.len = sizeof(*VAR_13);

 FUNC_2(&VAR_8->idmap_wq, &VAR_7);

 if (FUNC_9(VAR_8->idmap_dentry->d_inode, &VAR_12) < 0) {
  FUNC_8(&VAR_8->idmap_wq, &VAR_7);
  goto out;
 }

 FUNC_11(VAR_5);
 FUNC_7(&VAR_8->idmap_im_lock);
 FUNC_10();
 FUNC_1(VAR_4);
 FUNC_8(&VAR_8->idmap_wq, &VAR_7);
 FUNC_6(&VAR_8->idmap_im_lock);

 if (VAR_13->im_status & VAR_3) {
  if ((VAR_16 = FUNC_12(VAR_13->im_name, VAR_2)) == 0)
   goto out;
  FUNC_4(VAR_11, VAR_13->im_name, VAR_16);
  VAR_15 = VAR_16;
 }

 out:
 FUNC_5(VAR_13, 0, sizeof(*VAR_13));
 FUNC_7(&VAR_8->idmap_im_lock);
 FUNC_7(&VAR_8->idmap_lock);
 return VAR_15;
}
