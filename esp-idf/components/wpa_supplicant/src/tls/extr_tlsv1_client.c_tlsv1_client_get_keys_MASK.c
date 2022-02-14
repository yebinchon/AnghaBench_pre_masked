
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_client {scalar_t__ state; int master_secret; int server_random; int client_random; } ;
struct tls_keys {int master_key_len; int master_key; void* server_random_len; int server_random; void* client_random_len; int client_random; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct tls_keys*,int ,int) ;

int FUNC_1(struct tlsv1_client *VAR_4, struct tls_keys *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 if (VAR_4->state == VAR_0)
  return -1;

 VAR_5->client_random = VAR_4->client_random;
 VAR_5->client_random_len = VAR_3;

 if (VAR_4->state != VAR_1) {
  VAR_5->server_random = VAR_4->server_random;
  VAR_5->server_random_len = VAR_3;
  VAR_5->master_key = VAR_4->master_secret;
  VAR_5->master_key_len = VAR_2;
 }

 return 0;
}
