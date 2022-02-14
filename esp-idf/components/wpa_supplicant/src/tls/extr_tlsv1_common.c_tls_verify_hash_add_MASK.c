
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_verify_hash {scalar_t__ sha256_cert; scalar_t__ sha256_server; scalar_t__ sha256_client; scalar_t__ sha1_cert; scalar_t__ md5_cert; scalar_t__ sha1_server; scalar_t__ md5_server; scalar_t__ sha1_client; scalar_t__ md5_client; } ;


 int FUNC_0 (scalar_t__,int const*,size_t) ;

void FUNC_1(struct tls_verify_hash *VAR_0, const u8 *VAR_1,
    size_t VAR_2)
{
 if (VAR_0->md5_client && VAR_0->sha1_client) {
  FUNC_0(VAR_0->md5_client, VAR_1, VAR_2);
  FUNC_0(VAR_0->sha1_client, VAR_1, VAR_2);
 }
 if (VAR_0->md5_server && VAR_0->sha1_server) {
  FUNC_0(VAR_0->md5_server, VAR_1, VAR_2);
  FUNC_0(VAR_0->sha1_server, VAR_1, VAR_2);
 }
 if (VAR_0->md5_cert && VAR_0->sha1_cert) {
  FUNC_0(VAR_0->md5_cert, VAR_1, VAR_2);
  FUNC_0(VAR_0->sha1_cert, VAR_1, VAR_2);
 }
}
