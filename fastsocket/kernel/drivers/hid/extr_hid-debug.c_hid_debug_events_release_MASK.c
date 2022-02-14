
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hid_debug_list {struct hid_debug_list* hid_debug_buf; int node; } ;
struct file {struct hid_debug_list* private_data; } ;


 int FUNC_0 (struct hid_debug_list*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct hid_debug_list *VAR_2 = VAR_1->private_data;

 FUNC_1(&VAR_2->node);
 FUNC_0(VAR_2->hid_debug_buf);
 FUNC_0(VAR_2);

 return 0;
}
