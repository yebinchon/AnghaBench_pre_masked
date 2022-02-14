
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_crypt_request {int dummy; } ;
struct crypt_config {int dmreq_start; } ;
struct ablkcipher_request {int dummy; } ;



__attribute__((used)) static struct ablkcipher_request *FUNC_0(struct crypt_config *VAR_0,
            struct dm_crypt_request *VAR_1)
{
 return (struct ablkcipher_request *)((char *)VAR_1 - VAR_0->dmreq_start);
}
