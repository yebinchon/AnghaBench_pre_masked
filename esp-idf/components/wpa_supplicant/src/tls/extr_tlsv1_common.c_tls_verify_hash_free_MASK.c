
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_verify_hash {int * sha256_cert; int * sha256_server; int * sha256_client; int * sha1_cert; int * sha1_server; int * sha1_client; int * md5_cert; int * md5_server; int * md5_client; } ;


 int FUNC_0 (int *,int *,int *) ;

void FUNC_1(struct tls_verify_hash *VAR_0)
{
 FUNC_0(VAR_0->md5_client, ((void*)0), ((void*)0));
 FUNC_0(VAR_0->md5_server, ((void*)0), ((void*)0));
 FUNC_0(VAR_0->md5_cert, ((void*)0), ((void*)0));
 FUNC_0(VAR_0->sha1_client, ((void*)0), ((void*)0));
 FUNC_0(VAR_0->sha1_server, ((void*)0), ((void*)0));
 FUNC_0(VAR_0->sha1_cert, ((void*)0), ((void*)0));
 VAR_0->md5_client = ((void*)0);
 VAR_0->md5_server = ((void*)0);
 VAR_0->md5_cert = ((void*)0);
 VAR_0->sha1_client = ((void*)0);
 VAR_0->sha1_server = ((void*)0);
 VAR_0->sha1_cert = ((void*)0);
}
