
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_pipe_msg {int len; int im_status; int im_id; struct rpc_pipe_msg* data; int im_conv; int im_type; int im_name; } ;
struct idmap_msg {int len; int im_status; int im_id; struct idmap_msg* data; int im_conv; int im_type; int im_name; } ;
struct idmap_hashtable {int h_type; } ;
struct idmap_hashent {int ih_id; } ;
struct idmap {int idmap_lock; int idmap_im_lock; int idmap_wq; TYPE_1__* idmap_dentry; struct rpc_pipe_msg idmap_im; } ;
typedef int msg ;
typedef int __u32 ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_7 ;
 struct idmap_hashent* FUNC_3 (struct idmap_hashtable*,char const*,size_t) ;
 int FUNC_4 (int ,char const*,size_t) ;
 int FUNC_5 (struct rpc_pipe_msg*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ,struct rpc_pipe_msg*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_12(struct idmap *VAR_9, struct idmap_hashtable *VAR_10,
  const char *VAR_11, size_t VAR_12, __u32 *VAR_13)
{
 struct rpc_pipe_msg VAR_14;
 struct idmap_msg *VAR_15;
 struct idmap_hashent *VAR_16;
 FUNC_0(VAR_8, VAR_7);
 int VAR_17 = -VAR_1;

 VAR_15 = &VAR_9->idmap_im;





 for (;;) {
  if (VAR_12 == 0)
   return -VAR_0;
  if (VAR_11[VAR_12-1] != '\0')
   break;
  VAR_12--;
 }
 if (VAR_12 >= VAR_3)
  return -VAR_0;

 FUNC_6(&VAR_9->idmap_lock);
 FUNC_6(&VAR_9->idmap_im_lock);

 VAR_16 = FUNC_3(VAR_10, VAR_11, VAR_12);
 if (VAR_16 != ((void*)0)) {
  *VAR_13 = VAR_16->ih_id;
  VAR_17 = 0;
  goto out;
 }

 FUNC_5(VAR_15, 0, sizeof(*VAR_15));
 FUNC_4(VAR_15->im_name, VAR_11, VAR_12);

 VAR_15->im_type = VAR_10->h_type;
 VAR_15->im_conv = VAR_2;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.data = VAR_15;
 VAR_14.len = sizeof(*VAR_15);

 FUNC_2(&VAR_9->idmap_wq, &VAR_8);
 if (FUNC_9(VAR_9->idmap_dentry->d_inode, &VAR_14) < 0) {
  FUNC_8(&VAR_9->idmap_wq, &VAR_8);
  goto out;
 }

 FUNC_11(VAR_6);
 FUNC_7(&VAR_9->idmap_im_lock);
 FUNC_10();
 FUNC_1(VAR_5);
 FUNC_8(&VAR_9->idmap_wq, &VAR_8);
 FUNC_6(&VAR_9->idmap_im_lock);

 if (VAR_15->im_status & VAR_4) {
  *VAR_13 = VAR_15->im_id;
  VAR_17 = 0;
 }

 out:
 FUNC_5(VAR_15, 0, sizeof(*VAR_15));
 FUNC_7(&VAR_9->idmap_im_lock);
 FUNC_7(&VAR_9->idmap_lock);
 return VAR_17;
}
