
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection_params {int dummy; } ;
struct eap_ssl_data {int include_tls_length; int tls_out_limit; int ssl_ctx; int eap_type; struct eap_sm* eap; } ;
struct eap_sm {int ssl_ctx; } ;
struct eap_peer_config {scalar_t__ phase1; int fragment_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_ssl_data*,struct eap_peer_config*,struct tls_connection_params*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_ssl_data*,struct tls_connection_params*,struct eap_peer_config*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct eap_sm *VAR_1, struct eap_ssl_data *VAR_2,
     struct eap_peer_config *VAR_3, u8 VAR_4)
{
 struct tls_connection_params VAR_5;

 if (VAR_3 == ((void*)0))
  return -1;

 VAR_2->eap = VAR_1;
 VAR_2->eap_type = VAR_4;
 VAR_2->ssl_ctx = VAR_1->ssl_ctx;
 if (FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3) < 0)
  return -1;

 if (FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5) < 0)
  return -1;

 VAR_2->tls_out_limit = VAR_3->fragment_size;

 if (VAR_3->phase1 &&
     FUNC_2(VAR_3->phase1, "include_tls_length=1")) {
  FUNC_3(VAR_0, "TLS: Include TLS Message Length in "
      "unfragmented packets");
  VAR_2->include_tls_length = 1;
 }

 return 0;
}
