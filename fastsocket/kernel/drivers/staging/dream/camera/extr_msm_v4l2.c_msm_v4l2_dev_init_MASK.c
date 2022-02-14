
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_v4l2_device {int read_queue; int read_queue_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct msm_v4l2_device *VAR_0)
{
 VAR_0->read_queue_lock =
     FUNC_1(VAR_0->read_queue_lock);
 FUNC_0(&VAR_0->read_queue);
}
