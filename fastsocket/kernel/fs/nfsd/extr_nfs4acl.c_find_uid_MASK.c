
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_5__ {int deny; int allow; } ;
struct posix_acl_state {TYPE_2__ everyone; } ;
struct posix_ace_state_array {int n; TYPE_3__* aces; } ;
struct TYPE_4__ {int deny; int allow; } ;
struct TYPE_6__ {scalar_t__ uid; TYPE_1__ perms; } ;



__attribute__((used)) static int FUNC_0(struct posix_acl_state *VAR_0, struct posix_ace_state_array *VAR_1, uid_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->n; VAR_3++)
  if (VAR_1->aces[VAR_3].uid == VAR_2)
   return VAR_3;

 VAR_1->n++;
 VAR_1->aces[VAR_3].uid = VAR_2;
 VAR_1->aces[VAR_3].perms.allow = VAR_0->everyone.allow;
 VAR_1->aces[VAR_3].perms.deny = VAR_0->everyone.deny;

 return VAR_3;
}
