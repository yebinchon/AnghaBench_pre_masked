
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_keys {int client_random_len; int server_random_len; int * server_random; int * client_random; int * master_key; } ;
struct eap_ssl_data {int conn; } ;
struct eap_sm {int ssl_ctx; } ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ,struct tls_keys*) ;

u8 * FUNC_3(struct eap_sm *VAR_0,
        struct eap_ssl_data *VAR_1, u8 VAR_2,
        size_t *VAR_3)
{
 struct tls_keys VAR_4;
 u8 *VAR_5;





 if (FUNC_2(VAR_0->ssl_ctx, VAR_1->conn, &VAR_4))
  return ((void*)0);

 if (VAR_4.client_random == ((void*)0) || VAR_4.server_random == ((void*)0) ||
     VAR_4.master_key == ((void*)0))
  return ((void*)0);

 *VAR_3 = 1 + VAR_4.client_random_len + VAR_4.server_random_len;
 VAR_5 = FUNC_0(*VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);


 VAR_5[0] = VAR_2;
 FUNC_1(VAR_5 + 1, VAR_4.client_random, VAR_4.client_random_len);
 FUNC_1(VAR_5 + 1 + VAR_4.client_random_len, VAR_4.server_random,
           VAR_4.server_random_len);

 return VAR_5;
}
