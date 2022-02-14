
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int dummy; } ;
struct request_queue {scalar_t__ queuedata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,struct tape_device*) ;
 int FUNC_2 (struct tape_device*) ;

__attribute__((used)) static void
FUNC_3(struct request_queue *VAR_0)
{
 struct tape_device *VAR_1;

 VAR_1 = (struct tape_device *) VAR_0->queuedata;
 FUNC_1(6, "tapeblock_request_fn(device=%p)\n", VAR_1);
 FUNC_0(VAR_1 == ((void*)0));
 FUNC_2(VAR_1);
}
