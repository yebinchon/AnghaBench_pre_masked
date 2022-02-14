
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {char* ca_cert; char* ca_path; char* client_cert; char* private_key; char* private_key_passwd; int flags; } ;
struct eap_peer_config {int phase1; scalar_t__ private_key_passwd; scalar_t__ private_key; scalar_t__ client_cert; scalar_t__ ca_path; scalar_t__ ca_cert; } ;


 int VAR_0 ;
 int FUNC_0 (struct tls_connection_params*,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct tls_connection_params *VAR_1,
          struct eap_peer_config *VAR_2)
{
 VAR_1->ca_cert = (char *) VAR_2->ca_cert;
 VAR_1->ca_path = (char *) VAR_2->ca_path;
 VAR_1->client_cert = (char *) VAR_2->client_cert;
 VAR_1->private_key = (char *) VAR_2->private_key;
 VAR_1->private_key_passwd = (char *) VAR_2->private_key_passwd;
 FUNC_0(VAR_1, VAR_2->phase1);
 if (FUNC_1())
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= (~VAR_0);
}
