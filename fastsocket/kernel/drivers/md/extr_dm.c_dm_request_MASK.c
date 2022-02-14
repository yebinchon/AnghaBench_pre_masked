
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mapped_device* queuedata; } ;
struct mapped_device {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct bio*) ;
 int FUNC_1 (struct request_queue*,struct bio*) ;
 scalar_t__ FUNC_2 (struct mapped_device*) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_0, struct bio *VAR_1)
{
 struct mapped_device *VAR_2 = VAR_0->queuedata;

 if (FUNC_2(VAR_2))
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}
