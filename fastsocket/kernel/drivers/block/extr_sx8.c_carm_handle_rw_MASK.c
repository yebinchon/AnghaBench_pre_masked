
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_request {int n_elem; int * sg; int rq; } ;
struct carm_host {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct carm_host*,struct carm_request*,int) ;
 int FUNC_2 (int ,int *,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct carm_host *VAR_3,
      struct carm_request *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0("ENTER\n");

 if (FUNC_3(VAR_4->rq) == VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 FUNC_2(VAR_3->pdev, &VAR_4->sg[0], VAR_4->n_elem, VAR_6);

 FUNC_1(VAR_3, VAR_4, VAR_5);
}
