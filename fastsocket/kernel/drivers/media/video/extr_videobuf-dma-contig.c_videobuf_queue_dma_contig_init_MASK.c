
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue_ops {int dummy; } ;
struct videobuf_queue {int dummy; } ;
struct device {int dummy; } ;
typedef int spinlock_t ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (struct videobuf_queue*,struct videobuf_queue_ops*,struct device*,int *,int,int,unsigned int,void*,int *) ;

void FUNC_1(struct videobuf_queue *VAR_1,
        struct videobuf_queue_ops *VAR_2,
        struct device *VAR_3,
        spinlock_t *VAR_4,
        enum v4l2_buf_type VAR_5,
        enum v4l2_field VAR_6,
        unsigned int VAR_7,
        void *VAR_8)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, &VAR_0);
}
