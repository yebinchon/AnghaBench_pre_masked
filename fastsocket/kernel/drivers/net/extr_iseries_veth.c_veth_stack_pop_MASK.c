
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_msg {struct veth_msg* next; } ;
struct veth_lpar_connection {struct veth_msg* msg_stack_head; } ;



__attribute__((used)) static inline struct veth_msg *FUNC_0(struct veth_lpar_connection *VAR_0)
{
 struct veth_msg *VAR_1;

 VAR_1 = VAR_0->msg_stack_head;
 if (VAR_1)
  VAR_0->msg_stack_head = VAR_0->msg_stack_head->next;

 return VAR_1;
}
