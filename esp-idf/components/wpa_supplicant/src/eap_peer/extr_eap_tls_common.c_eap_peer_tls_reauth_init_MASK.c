
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ssl_data {int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (struct eap_ssl_data*) ;
 int FUNC_1 (struct eap_ssl_data*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct eap_sm *VAR_0, struct eap_ssl_data *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 return FUNC_2(VAR_1->ssl_ctx, VAR_1->conn);
}
