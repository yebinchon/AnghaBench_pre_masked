
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* del_node ) (void const*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void const*) ;

__attribute__((used)) static inline int FUNC_1(const void *VAR_1)
{
 return VAR_0.del_node ? VAR_0.del_node(VAR_1) : -1;
}
