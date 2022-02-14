
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_keys {size_t client_random_len; size_t server_random_len; int master_key_len; int * master_key; int * server_random; int * client_random; } ;
struct eap_ssl_data {int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ FUNC_3 (int ,int ,struct tls_keys*) ;
 scalar_t__ FUNC_4 (int ,int ,char const*,int ,int *,size_t) ;
 scalar_t__ FUNC_5 (int *,int ,char const*,int *,size_t,int *,size_t) ;

u8 * FUNC_6(struct eap_sm *VAR_0, struct eap_ssl_data *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct tls_keys VAR_4;
 u8 *VAR_5 = ((void*)0), *VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == ((void*)0))
  return ((void*)0);


 if (FUNC_4(VAR_1->ssl_ctx, VAR_1->conn, VAR_2, 0, VAR_6, VAR_3)
     == 0)
  return VAR_6;






 if (FUNC_3(VAR_1->ssl_ctx, VAR_1->conn, &VAR_4))
  goto fail;

 if (VAR_4.client_random == ((void*)0) || VAR_4.server_random == ((void*)0) ||
     VAR_4.master_key == ((void*)0))
  goto fail;

 VAR_5 = FUNC_1(VAR_4.client_random_len + VAR_4.server_random_len);
 if (VAR_5 == ((void*)0))
  goto fail;
 FUNC_2(VAR_5, VAR_4.client_random, VAR_4.client_random_len);
 FUNC_2(VAR_5 + VAR_4.client_random_len, VAR_4.server_random,
    VAR_4.server_random_len);

 if (FUNC_5(VAR_4.master_key, VAR_4.master_key_len,
        VAR_2, VAR_5, VAR_4.client_random_len +
        VAR_4.server_random_len, VAR_6, VAR_3)) {
  goto fail;
 }

 FUNC_0(VAR_5);
 return VAR_6;

fail:
 FUNC_0(VAR_6);
 FUNC_0(VAR_5);
 return ((void*)0);
}
