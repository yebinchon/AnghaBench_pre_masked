
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mapped_device* queuedata; } ;
struct request {int cmd_flags; struct request* special; } ;
struct mapped_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct request* FUNC_1 (struct request*,struct mapped_device*,int ) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_5, struct request *VAR_6)
{
 struct mapped_device *VAR_7 = VAR_5->queuedata;
 struct request *VAR_8;

 if (FUNC_2(VAR_6->special)) {
  FUNC_0("Already has something in rq->special.");
  return VAR_1;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_3);
 if (!VAR_8)
  return VAR_0;

 VAR_6->special = VAR_8;
 VAR_6->cmd_flags |= VAR_4;

 return VAR_2;
}
