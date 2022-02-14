
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_primary_config {int pinned_key; int cipher_list13; int cipher_list; int egdsocket; int random_file; int clientcert; int CAfile; int CApath; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ssl_primary_config* VAR_0)
{
  FUNC_0(VAR_0->CApath);
  FUNC_0(VAR_0->CAfile);
  FUNC_0(VAR_0->clientcert);
  FUNC_0(VAR_0->random_file);
  FUNC_0(VAR_0->egdsocket);
  FUNC_0(VAR_0->cipher_list);
  FUNC_0(VAR_0->cipher_list13);
  FUNC_0(VAR_0->pinned_key);
}
