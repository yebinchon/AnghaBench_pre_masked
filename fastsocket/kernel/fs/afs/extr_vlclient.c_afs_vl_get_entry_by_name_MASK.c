
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct in_addr {int dummy; } ;
struct afs_wait_mode {int dummy; } ;
struct afs_call {int * request; int port; int service_id; struct afs_cache_vlocation* reply; struct key* key; } ;
struct afs_cache_vlocation {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 struct afs_call* FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (struct in_addr*,struct afs_call*,int ,struct afs_wait_mode const*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (void*,int ,size_t) ;
 size_t FUNC_7 (char const*) ;

int FUNC_8(struct in_addr *VAR_6,
        struct key *VAR_7,
        const char *VAR_8,
        struct afs_cache_vlocation *VAR_9,
        const struct afs_wait_mode *VAR_10)
{
 struct afs_call *VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 __be32 *VAR_15;

 FUNC_0("");

 VAR_12 = FUNC_7(VAR_8);
 VAR_14 = (4 - (VAR_12 & 3)) & 3;
 VAR_13 = 8 + VAR_12 + VAR_14;

 VAR_11 = FUNC_1(&VAR_5, VAR_13, 384);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->key = VAR_7;
 VAR_11->reply = VAR_9;
 VAR_11->service_id = VAR_4;
 VAR_11->port = FUNC_4(VAR_0);


 VAR_15 = VAR_11->request;
 *VAR_15++ = FUNC_3(VAR_3);
 *VAR_15++ = FUNC_3(VAR_12);
 FUNC_5(VAR_15, VAR_8, VAR_12);
 if (VAR_14 > 0)
  FUNC_6((void *) VAR_15 + VAR_12, 0, VAR_14);


 return FUNC_2(VAR_6, VAR_11, VAR_2, VAR_10);
}
