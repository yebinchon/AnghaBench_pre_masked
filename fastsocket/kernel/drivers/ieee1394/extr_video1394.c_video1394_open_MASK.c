
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {TYPE_1__* host; } ;
struct inode {int dummy; } ;
struct file_ctx {int * current_ctx; int context_list; struct ti_ohci* ohci; } ;
struct file {struct file_ctx* private_data; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 struct ti_ohci* FUNC_2 (int *,int) ;
 int FUNC_3 (struct file*) ;
 struct file_ctx* FUNC_4 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_6);
 struct ti_ohci *VAR_8;
 struct file_ctx *VAR_9;

 VAR_8 = FUNC_2(&VAR_4, VAR_7);
        if (VAR_8 == ((void*)0))
                return -VAR_0;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  FUNC_1(VAR_3, VAR_8->host->id, "Cannot malloc file_ctx");
  return -VAR_1;
 }

 VAR_9->ohci = VAR_8;
 FUNC_0(&VAR_9->context_list);
 VAR_9->current_ctx = ((void*)0);
 VAR_6->private_data = VAR_9;

 return 0;
}
