
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_client {scalar_t__ state; int master_secret; TYPE_1__ rl; int server_random; int client_random; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int ,char const*,int *,int,int *,size_t) ;

int FUNC_2(struct tlsv1_client *VAR_3, const char *VAR_4,
       int VAR_5, u8 *VAR_6, size_t VAR_7)
{
 u8 VAR_8[2 * VAR_2];

 if (VAR_3->state != VAR_0)
  return -1;

 if (VAR_5) {
  FUNC_0(VAR_8, VAR_3->server_random, VAR_2);
  FUNC_0(VAR_8 + VAR_2, VAR_3->client_random,
     VAR_2);
 } else {
  FUNC_0(VAR_8, VAR_3->client_random, VAR_2);
  FUNC_0(VAR_8 + VAR_2, VAR_3->server_random,
     VAR_2);
 }

 return FUNC_1(VAR_3->rl.tls_version,
         VAR_3->master_secret, VAR_1,
         VAR_4, VAR_8, 2 * VAR_2, VAR_6, VAR_7);
}
