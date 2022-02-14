
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_primary_config {scalar_t__ version; scalar_t__ version_max; scalar_t__ verifypeer; scalar_t__ verifyhost; scalar_t__ verifystatus; int pinned_key; int cipher_list13; int cipher_list; int egdsocket; int random_file; int clientcert; int CAfile; int CApath; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool
FUNC_1(struct ssl_primary_config* VAR_2,
                        struct ssl_primary_config* VAR_3)
{
  if((VAR_2->version == VAR_3->version) &&
     (VAR_2->version_max == VAR_3->version_max) &&
     (VAR_2->verifypeer == VAR_3->verifypeer) &&
     (VAR_2->verifyhost == VAR_3->verifyhost) &&
     (VAR_2->verifystatus == VAR_3->verifystatus) &&
     FUNC_0(VAR_2->CApath, VAR_3->CApath) &&
     FUNC_0(VAR_2->CAfile, VAR_3->CAfile) &&
     FUNC_0(VAR_2->clientcert, VAR_3->clientcert) &&
     FUNC_0(VAR_2->random_file, VAR_3->random_file) &&
     FUNC_0(VAR_2->egdsocket, VAR_3->egdsocket) &&
     FUNC_0(VAR_2->cipher_list, VAR_3->cipher_list) &&
     FUNC_0(VAR_2->cipher_list13, VAR_3->cipher_list13) &&
     FUNC_0(VAR_2->pinned_key, VAR_3->pinned_key))
    return VAR_1;

  return VAR_0;
}
