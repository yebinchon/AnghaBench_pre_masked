
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct carm_request {struct request* rq; } ;
struct carm_host {int dummy; } ;


 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct carm_host*,struct carm_request*) ;

__attribute__((used)) static inline void FUNC_3(struct carm_host *VAR_0,
        struct carm_request *VAR_1,
        int VAR_2)
{
 struct request *VAR_3 = VAR_1->rq;
 int VAR_4;

 FUNC_0(VAR_3, VAR_2);

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_4 == 0);
}
