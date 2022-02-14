
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void *FUNC_1(void)
{
 unsigned int VAR_3;
 void *VAR_4;


 VAR_3 = VAR_2->flags & VAR_1;
 VAR_2->flags |= VAR_1;
 VAR_4 = (void *)FUNC_0(VAR_0);
 VAR_2->flags &= (~VAR_1 | VAR_3);
 return VAR_4;
}
