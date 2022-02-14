
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct hid_device {int debug_list; } ;
struct hid_debug_list {struct hid_device* hdev; int node; int read_mutex; void* hid_debug_buf; } ;
struct file {struct hid_debug_list* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_debug_list*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5 = 0;
 struct hid_debug_list *VAR_6;

 if (!(VAR_6 = FUNC_1(sizeof(struct hid_debug_list), VAR_1))) {
  VAR_5 = -VAR_0;
  goto out;
 }

 if (!(VAR_6->hid_debug_buf = FUNC_1(sizeof(char) * VAR_2, VAR_1))) {
  VAR_5 = -VAR_0;
  FUNC_0(VAR_6);
  goto out;
 }
 VAR_6->hdev = (struct hid_device *) VAR_3->i_private;
 VAR_4->private_data = VAR_6;
 FUNC_3(&VAR_6->read_mutex);

 FUNC_2(&VAR_6->node, &VAR_6->hdev->debug_list);

out:
 return VAR_5;
}
