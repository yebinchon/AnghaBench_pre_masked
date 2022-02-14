
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {TYPE_1__* int_ops; } ;
struct videobuf_buffer {int dummy; } ;
struct TYPE_2__ {void* (* vaddr ) (struct videobuf_buffer*) ;} ;


 void* FUNC_0 (struct videobuf_buffer*) ;

void *FUNC_1(struct videobuf_queue *VAR_0,
         struct videobuf_buffer *VAR_1)
{
 if (VAR_0->int_ops->vaddr)
  return VAR_0->int_ops->vaddr(VAR_1);
 return ((void*)0);
}
