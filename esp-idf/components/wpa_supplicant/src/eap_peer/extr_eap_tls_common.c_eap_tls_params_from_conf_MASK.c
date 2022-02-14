
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int private_key_blob_len; int private_key_blob; int private_key; int client_cert_blob_len; int client_cert_blob; int client_cert; int ca_cert_blob_len; int ca_cert_blob; int ca_cert; int flags; } ;
struct eap_ssl_data {scalar_t__ eap_type; } ;
struct eap_sm {scalar_t__ workaround; } ;
struct eap_peer_config {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int *,int *,int *) ;
 int FUNC_1 (struct tls_connection_params*,struct eap_peer_config*) ;
 int FUNC_2 (struct tls_connection_params*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct eap_sm *VAR_4,
        struct eap_ssl_data *VAR_5,
        struct tls_connection_params *VAR_6,
        struct eap_peer_config *VAR_7)
{
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 if (VAR_4->workaround && VAR_5->eap_type != VAR_0) {
  VAR_6->flags |= VAR_3;
 }

 FUNC_3(VAR_1, "TLS: using phase1 config options");
 FUNC_1(VAR_6, VAR_7);





 if (FUNC_0(VAR_4, &VAR_6->ca_cert, &VAR_6->ca_cert_blob,
          &VAR_6->ca_cert_blob_len) ||
     FUNC_0(VAR_4, &VAR_6->client_cert,
          &VAR_6->client_cert_blob,
          &VAR_6->client_cert_blob_len) ||
     FUNC_0(VAR_4, &VAR_6->private_key,
          &VAR_6->private_key_blob,
          &VAR_6->private_key_blob_len)) {
  FUNC_3(VAR_2, "SSL: Failed to get configuration blobs");
  return -1;
 }

 return 0;
}
