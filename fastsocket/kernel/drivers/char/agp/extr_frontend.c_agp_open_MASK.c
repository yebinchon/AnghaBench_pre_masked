
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct agp_file_private {int access_flags; int my_pid; } ;
struct agp_client {int dummy; } ;
struct TYPE_4__ {int agp_mutex; } ;
struct TYPE_3__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,struct agp_file_private*,struct agp_client*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 struct agp_client* FUNC_1 (int ) ;
 int FUNC_2 (struct agp_file_private*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_10 ;
 int FUNC_4 (struct inode*) ;
 struct agp_file_private* FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_11, struct file *VAR_12)
{
 int VAR_13 = FUNC_4(VAR_11);
 struct agp_file_private *VAR_14;
 struct agp_client *VAR_15;
 int VAR_16 = -VAR_7;

 FUNC_6();
 FUNC_7(&(VAR_9.agp_mutex));

 if (VAR_13 != VAR_0)
  goto err_out;

 VAR_14 = FUNC_5(sizeof(struct agp_file_private), VAR_8);
 if (VAR_14 == ((void*)0))
  goto err_out_nomem;

 FUNC_9(VAR_1, &VAR_14->access_flags);
 VAR_14->my_pid = VAR_10->pid;

 if (FUNC_3(VAR_5)) {

  FUNC_9(VAR_2, &VAR_14->access_flags);
 }
 VAR_15 = FUNC_1(VAR_10->pid);

 if (VAR_15 != ((void*)0)) {
  FUNC_9(VAR_3, &VAR_14->access_flags);
  FUNC_9(VAR_4, &VAR_14->access_flags);
 }
 VAR_12->private_data = (void *) VAR_14;
 FUNC_2(VAR_14);
 FUNC_0("private=%p, client=%p", VAR_14, VAR_15);
 FUNC_8(&(VAR_9.agp_mutex));
 FUNC_10();
 return 0;

err_out_nomem:
 VAR_16 = -VAR_6;
err_out:
 FUNC_8(&(VAR_9.agp_mutex));
 FUNC_10();
 return VAR_16;
}
