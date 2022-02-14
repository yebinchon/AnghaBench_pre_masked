
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct controller* i_private; } ;
struct file {struct ctrl_dbg* private_data; } ;
struct ctrl_dbg {void* data; int size; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ctrl_dbg*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct controller*,void*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct controller *VAR_5 = VAR_3->i_private;
 struct ctrl_dbg *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_2();
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  goto exit;
 VAR_6->data = FUNC_1(VAR_2, VAR_1);
 if (!VAR_6->data) {
  FUNC_0(VAR_6);
  goto exit;
 }
 VAR_6->size = FUNC_3(VAR_5, VAR_6->data, VAR_2);
 VAR_4->private_data = VAR_6;
 VAR_7 = 0;
exit:
 FUNC_4();
 return VAR_7;
}
