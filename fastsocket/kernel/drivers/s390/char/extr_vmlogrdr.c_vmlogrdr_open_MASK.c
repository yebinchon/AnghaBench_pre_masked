
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {int dev_in_use; int buffer_free; int * path; int autopurge; scalar_t__ autorecording; scalar_t__ iucv_path_severed; scalar_t__ connection_established; int system_service; int priv_lock; int receive_ready; } ;
struct inode {int dummy; } ;
struct file {int f_flags; int * f_op; struct vmlogrdr_priv_t* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct inode*) ;
 int * FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int *,int *,struct vmlogrdr_priv_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*,struct file*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct vmlogrdr_priv_t* VAR_8 ;
 int FUNC_11 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct vmlogrdr_priv_t*,int,int ) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int FUNC_14 (struct inode *VAR_11, struct file *VAR_12)
{
 int VAR_13 = 0;
 struct vmlogrdr_priv_t * VAR_14 = ((void*)0);
 int VAR_15 = 0;
 int VAR_16;

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13 > VAR_5)
  return -VAR_2;
 VAR_14 = &VAR_8[VAR_13];




 if (VAR_12->f_flags & VAR_6)
  return -VAR_3;


 FUNC_5();
 FUNC_9(&VAR_14->priv_lock);
 if (VAR_14->dev_in_use) {
  FUNC_10(&VAR_14->priv_lock);
  FUNC_11();
  return -VAR_0;
 }
 VAR_14->dev_in_use = 1;
 VAR_14->connection_established = 0;
 VAR_14->iucv_path_severed = 0;
 FUNC_0(&VAR_14->receive_ready, 0);
 VAR_14->buffer_free = 1;
 FUNC_10(&VAR_14->priv_lock);


 VAR_12->private_data = VAR_14;
 VAR_12->f_op = &VAR_9;


 if (VAR_14->autorecording) {
  VAR_16 = FUNC_12(VAR_14,1,VAR_14->autopurge);
  if (VAR_16)
   FUNC_8("vmlogrdr: failed to start "
       "recording automatically\n");
 }


 VAR_14->path = FUNC_2(10, 0, VAR_4);
 if (!VAR_14->path)
  goto out_dev;
 VAR_15 = FUNC_3(VAR_14->path, &VAR_10,
           VAR_14->system_service, ((void*)0), ((void*)0),
           VAR_14);
 if (VAR_15) {
  FUNC_7("vmlogrdr: iucv connection to %s "
         "failed with rc %i \n",
         VAR_14->system_service, VAR_15);
  goto out_path;
 }





 FUNC_13(VAR_7, (VAR_14->connection_established)
     || (VAR_14->iucv_path_severed));
 if (VAR_14->iucv_path_severed)
  goto out_record;
  VAR_16 = FUNC_6(VAR_11, VAR_12);
 FUNC_11();
 return VAR_16;

out_record:
 if (VAR_14->autorecording)
  FUNC_12(VAR_14,0,VAR_14->autopurge);
out_path:
 FUNC_4(VAR_14->path);
 VAR_14->path = ((void*)0);
out_dev:
 VAR_14->dev_in_use = 0;
 FUNC_11();
 return -VAR_1;
}
