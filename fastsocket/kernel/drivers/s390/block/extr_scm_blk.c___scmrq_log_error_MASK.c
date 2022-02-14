
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int error; scalar_t__ retries; struct aob* aob; } ;
struct aob {int response; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int *,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct scm_request *VAR_1)
{
 struct aob *VAR_2 = VAR_1->aob;

 if (VAR_1->error == -VAR_0)
  FUNC_0(1, "Request timeout");
 else {
  FUNC_0(1, "Request error");
  FUNC_1(1, &VAR_2->response, sizeof(VAR_2->response));
 }
 if (VAR_1->retries)
  FUNC_0(1, "Retry request");
 else
  FUNC_2("An I/O operation to SCM failed with rc=%d\n",
         VAR_1->error);
}
