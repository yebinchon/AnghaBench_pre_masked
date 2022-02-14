
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipaddr {int proto; int type; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 struct qeth_ipaddr* FUNC_0 (int,int ) ;

struct qeth_ipaddr *FUNC_1(
    enum qeth_prot_versions VAR_2)
{
 struct qeth_ipaddr *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct qeth_ipaddr), VAR_0);
 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_3->type = VAR_1;
 VAR_3->proto = VAR_2;
 return VAR_3;
}
