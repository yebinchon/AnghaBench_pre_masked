
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int list; void* aidaw; void* aob; } ;
struct aob_rq_header {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct scm_request*) ;
 int FUNC_2 (struct scm_request*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 struct aob_rq_header* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct aob_rq_header *VAR_5;
 struct scm_request *VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5) + sizeof(*VAR_6), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (void *) VAR_5->data;
 VAR_6->aidaw = (void *) FUNC_3(VAR_1);
 VAR_6->aob = (void *) FUNC_3(VAR_1);
 if (!VAR_6->aob || !VAR_6->aidaw) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 if (FUNC_1(VAR_6)) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 FUNC_0(&VAR_6->list);
 FUNC_6(&VAR_4);
 FUNC_5(&VAR_6->list, &VAR_3);
 FUNC_7(&VAR_4);

 return 0;
}
