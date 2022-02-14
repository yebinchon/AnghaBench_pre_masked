
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct nfs_server {struct nfs_fscache_key* fscache_key; } ;
struct TYPE_2__ {int uniq_len; struct TYPE_2__* uniquifier; } ;
struct nfs_fscache_key {TYPE_1__ key; } ;


 int FUNC_0 (void*,TYPE_1__*,int) ;

__attribute__((used)) static uint16_t FUNC_1(const void *VAR_0,
      void *VAR_1, uint16_t VAR_2)
{
 const struct nfs_fscache_key *VAR_3;
 const struct nfs_server *VAR_4 = VAR_0;
 uint16_t VAR_5;

 VAR_3 = VAR_4->fscache_key;
 VAR_5 = sizeof(VAR_3->key) + VAR_3->key.uniq_len;
 if (VAR_5 > VAR_2) {
  VAR_5 = 0;
 } else {
  FUNC_0(VAR_1, &VAR_3->key, sizeof(VAR_3->key));
  FUNC_0(VAR_1 + sizeof(VAR_3->key),
         VAR_3->key.uniquifier, VAR_3->key.uniq_len);
 }

 return VAR_5;
}
