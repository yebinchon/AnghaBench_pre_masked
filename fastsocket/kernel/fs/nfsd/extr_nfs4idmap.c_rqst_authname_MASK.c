
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct auth_domain* rq_client; struct auth_domain* rq_gssclient; } ;
struct auth_domain {char* name; } ;



__attribute__((used)) static char *
FUNC_0(struct svc_rqst *VAR_0)
{
 struct auth_domain *VAR_1;

 VAR_1 = VAR_0->rq_gssclient ? VAR_0->rq_gssclient : VAR_0->rq_client;
 return VAR_1->name;
}
