
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct in_addr {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct afs_call {void** request; int port; int service_id; struct afs_cache_vlocation* reply; struct key* key; } ;
struct afs_cache_vlocation {int dummy; } ;
typedef int afs_voltype_t ;
typedef int afs_volid_t ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct in_addr*,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct in_addr *VAR_6,
      struct key *VAR_7,
      afs_volid_t VAR_8,
      afs_voltype_t VAR_9,
      struct afs_cache_vlocation *VAR_10,
      const struct afs_wait_mode *VAR_11)
{
 struct afs_call *VAR_12;
 __be32 *VAR_13;

 FUNC_0("");

 VAR_12 = FUNC_1(&VAR_5, 12, 384);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->key = VAR_7;
 VAR_12->reply = VAR_10;
 VAR_12->service_id = VAR_4;
 VAR_12->port = FUNC_4(VAR_0);


 VAR_13 = VAR_12->request;
 *VAR_13++ = FUNC_3(VAR_3);
 *VAR_13++ = FUNC_3(VAR_8);
 *VAR_13 = FUNC_3(VAR_9);


 return FUNC_2(VAR_6, VAR_12, VAR_2, VAR_11);
}
