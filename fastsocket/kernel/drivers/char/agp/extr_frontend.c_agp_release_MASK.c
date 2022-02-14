
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct agp_file_private* private_data; } ;
struct agp_file_private {int my_pid; int access_flags; } ;
struct agp_controller {int dummy; } ;
struct TYPE_2__ {int agp_mutex; struct agp_controller* current_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct agp_file_private*) ;
 int FUNC_1 (struct agp_controller*,struct agp_file_private*) ;
 TYPE_1__ VAR_2 ;
 struct agp_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct agp_controller*) ;
 int FUNC_5 (struct agp_file_private*) ;
 int FUNC_6 (struct agp_file_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, struct file *VAR_4)
{
 struct agp_file_private *VAR_5 = VAR_4->private_data;

 FUNC_7(&(VAR_2.agp_mutex));

 FUNC_0("priv=%p", VAR_5);

 if (FUNC_9(VAR_1, &VAR_5->access_flags)) {
  struct agp_controller *VAR_6;

  VAR_6 = FUNC_2(VAR_5->my_pid);

  if (VAR_6 != ((void*)0)) {
   if (VAR_6 == VAR_2.current_controller)
    FUNC_1(VAR_6, VAR_5);
   FUNC_4(VAR_6);
   VAR_6 = ((void*)0);
  }
 }

 if (FUNC_9(VAR_0, &VAR_5->access_flags))
  FUNC_3(VAR_5->my_pid);

 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 VAR_4->private_data = ((void*)0);
 FUNC_8(&(VAR_2.agp_mutex));
 return 0;
}
