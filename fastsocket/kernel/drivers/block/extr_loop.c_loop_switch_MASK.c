
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_request {int wait; struct file* file; } ;
struct loop_device {int lo_queue; } ;
struct file {int dummy; } ;
struct bio {int * bi_bdev; struct switch_request* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct bio*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct loop_device *VAR_2, struct file *VAR_3)
{
 struct switch_request VAR_4;
 struct bio *VAR_5 = FUNC_0(VAR_1, 0);
 if (!VAR_5)
  return -VAR_0;
 FUNC_1(&VAR_4.wait);
 VAR_4.file = VAR_3;
 VAR_5->bi_private = &VAR_4;
 VAR_5->bi_bdev = ((void*)0);
 FUNC_2(VAR_2->lo_queue, VAR_5);
 FUNC_3(&VAR_4.wait);
 return 0;
}
