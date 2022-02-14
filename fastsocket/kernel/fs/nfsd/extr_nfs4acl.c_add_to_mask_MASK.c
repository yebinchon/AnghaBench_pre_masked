
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allow; } ;
struct posix_acl_state {TYPE_1__ mask; } ;
struct posix_ace_state {int allow; } ;



__attribute__((used)) static inline void FUNC_0(struct posix_acl_state *VAR_0, struct posix_ace_state *VAR_1)
{
 VAR_0->mask.allow |= VAR_1->allow;
}
