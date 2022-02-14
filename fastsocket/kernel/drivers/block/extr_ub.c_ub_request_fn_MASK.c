
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_lun {int dummy; } ;
struct request_queue {struct ub_lun* queuedata; } ;
struct request {int dummy; } ;


 struct request* FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (struct ub_lun*,struct request*) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_0)
{
 struct ub_lun *VAR_1 = VAR_0->queuedata;
 struct request *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_0)) != ((void*)0)) {
  if (FUNC_2(VAR_1, VAR_2) != 0) {
   FUNC_1(VAR_0);
   break;
  }
 }
}
