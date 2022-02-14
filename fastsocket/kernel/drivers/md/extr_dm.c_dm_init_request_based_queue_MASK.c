
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ elevator; } ;
struct mapped_device {struct request_queue* queue; } ;


 struct request_queue* FUNC_0 (struct request_queue*,int ,int *) ;
 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct mapped_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct request_queue*) ;

__attribute__((used)) static int FUNC_6(struct mapped_device *VAR_4)
{
 struct request_queue *VAR_5 = ((void*)0);

 if (VAR_4->queue->elevator)
  return 1;


 VAR_5 = FUNC_0(VAR_4->queue, VAR_2, ((void*)0));
 if (!VAR_5)
  return 0;

 VAR_4->queue = VAR_5;
 FUNC_4(VAR_4);
 FUNC_3(VAR_4->queue, VAR_3);
 FUNC_2(VAR_4->queue, VAR_1);
 FUNC_1(VAR_4->queue, VAR_0);

 FUNC_5(VAR_4->queue);

 return 1;
}
