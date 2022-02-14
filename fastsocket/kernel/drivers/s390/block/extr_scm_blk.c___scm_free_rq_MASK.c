
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {scalar_t__ aidaw; scalar_t__ aob; } ;
struct aob_rq_header {int dummy; } ;


 int FUNC_0 (struct scm_request*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct aob_rq_header*) ;
 struct aob_rq_header* FUNC_3 (struct scm_request*) ;

__attribute__((used)) static void FUNC_4(struct scm_request *VAR_0)
{
 struct aob_rq_header *VAR_1 = FUNC_3(VAR_0);

 FUNC_1((unsigned long) VAR_0->aob);
 FUNC_1((unsigned long) VAR_0->aidaw);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
