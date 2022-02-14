
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kmem_cache {int dummy; } ;
struct TYPE_2__ {unsigned int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* FUNC_0 (struct kmem_cache*,int ) ;

__attribute__((used)) static inline void *FUNC_1(struct kmem_cache *VAR_3)
{
 unsigned int VAR_4;
 void *VAR_5;


 VAR_4 = VAR_2->flags & VAR_1;
 VAR_2->flags |= VAR_1;
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_2->flags &= (~VAR_1 | VAR_4);
 return VAR_5;
}
