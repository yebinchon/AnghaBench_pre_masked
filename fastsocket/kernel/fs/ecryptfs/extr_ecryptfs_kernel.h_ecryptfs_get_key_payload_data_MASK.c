
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_key_payload {scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct key {TYPE_1__ payload; } ;
struct ecryptfs_auth_tok {int dummy; } ;



__attribute__((used)) static inline struct ecryptfs_auth_tok *
FUNC_0(struct key *VAR_0)
{
 return (struct ecryptfs_auth_tok *)
  (((struct user_key_payload*)VAR_0->payload.data)->data);
}
