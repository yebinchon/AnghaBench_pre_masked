
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct loop_device* queuedata; } ;
struct loop_device {TYPE_1__* lo_backing_file; } ;
struct TYPE_2__ {int f_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct request_queue*) ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_1)
{
 struct loop_device *VAR_2 = VAR_1->queuedata;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2->lo_backing_file->f_mapping);
}
