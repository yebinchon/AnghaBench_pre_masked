
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; } ;
struct eap_ssl_data {int * conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {int ocsp; int * pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,struct tls_connection_params*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_5,
       struct eap_ssl_data *VAR_6,
       struct eap_peer_config *VAR_7,
       struct tls_connection_params *VAR_8)
{
 int VAR_9;

 if (VAR_7->ocsp)
  VAR_8->flags |= VAR_1;
 if (VAR_7->ocsp == 2)
  VAR_8->flags |= VAR_2;
 VAR_6->conn = FUNC_2(VAR_6->ssl_ctx);
 if (VAR_6->conn == ((void*)0)) {
  FUNC_4(VAR_0, "SSL: Failed to initialize new TLS "
      "connection");
  return -1;
 }

 VAR_9 = FUNC_3(VAR_6->ssl_ctx, VAR_6->conn, VAR_8);

 if (VAR_9 == VAR_3) {





  FUNC_0(VAR_7->pin);
  VAR_7->pin = ((void*)0);
 } else if (VAR_9 == VAR_4) {
  FUNC_4(VAR_0, "TLS: Failed to load private key");




  FUNC_0(VAR_7->pin);
  VAR_7->pin = ((void*)0);
  FUNC_1(VAR_6->ssl_ctx, VAR_6->conn);
  VAR_6->conn = ((void*)0);
  return -1;
 } else if (VAR_9) {
  FUNC_4(VAR_0, "TLS: Failed to set TLS connection "
      "parameters");
  FUNC_1(VAR_6->ssl_ctx, VAR_6->conn);
  VAR_6->conn = ((void*)0);
  return -1;
 }

 return 0;
}
