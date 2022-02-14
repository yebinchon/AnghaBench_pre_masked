
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct carm_request {struct request* rq; } ;
struct carm_host {int lock; int oob_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct request* FUNC_0 (int ,int ,int ) ;
 struct carm_request* FUNC_1 (struct carm_host*) ;
 int FUNC_2 (struct carm_host*,struct carm_request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct carm_request *FUNC_6(struct carm_host *VAR_2)
{
 unsigned long VAR_3;
 struct carm_request *VAR_4 = ((void*)0);
 struct request *VAR_5;
 int VAR_6 = 5000;

 while (VAR_6-- > 0) {
  FUNC_4(&VAR_2->lock, VAR_3);
  VAR_4 = FUNC_1(VAR_2);
  FUNC_5(&VAR_2->lock, VAR_3);

  if (VAR_4)
   break;
  FUNC_3(10);
 }

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_2->oob_q, VAR_1 , VAR_0);
 if (!VAR_5) {
  FUNC_4(&VAR_2->lock, VAR_3);
  FUNC_2(VAR_2, VAR_4);
  FUNC_5(&VAR_2->lock, VAR_3);
  return ((void*)0);
 }

 VAR_4->rq = VAR_5;
 return VAR_4;
}
