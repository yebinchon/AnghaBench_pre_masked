
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_credentials {int dummy; } ;
struct tls_global {int server; struct tlsv1_credentials* server_cred; } ;
struct tls_connection_params {int dh_blob_len; int dh_blob; int dh_file; int private_key_blob_len; int private_key_blob; int private_key_passwd; int private_key; int client_cert_blob_len; int client_cert_blob; int client_cert; int ca_path; int ca_cert_blob_len; int ca_cert_blob; int ca_cert; } ;


 int VAR_0 ;
 struct tlsv1_credentials* FUNC_0 () ;
 int FUNC_1 (struct tlsv1_credentials*) ;
 scalar_t__ FUNC_2 (struct tlsv1_credentials*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct tlsv1_credentials*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct tlsv1_credentials*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct tlsv1_credentials*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(void *VAR_1,
     const struct tls_connection_params *VAR_2)
{
 return -1;

}
