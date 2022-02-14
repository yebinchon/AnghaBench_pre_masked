
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct cxgbi_sock {int dummy; } ;
struct cxgbi_endpoint {struct cxgbi_sock* csk; } ;


 int FUNC_0 (struct cxgbi_sock*) ;

int FUNC_1(struct iscsi_endpoint *VAR_0, int VAR_1)
{
 struct cxgbi_endpoint *VAR_2 = VAR_0->dd_data;
 struct cxgbi_sock *VAR_3 = VAR_2->csk;

 if (!FUNC_0(VAR_3))
  return 0;
 return 1;
}
