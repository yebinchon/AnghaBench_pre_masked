
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_glock {TYPE_1__* gl_ops; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int go_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct address_space *FUNC_0(struct gfs2_glock *VAR_1)
{
 if (VAR_1->gl_ops->go_flags & VAR_0)
  return (struct address_space *)(VAR_1 + 1);
 return ((void*)0);
}
