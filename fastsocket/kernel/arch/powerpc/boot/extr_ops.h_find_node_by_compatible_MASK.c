
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* find_node_by_compatible ) (void const*,char const*) ;} ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (void const*,char const*) ;

__attribute__((used)) static inline void *FUNC_1(const void *VAR_1,
                                            const char *VAR_2)
{
 if (VAR_0.find_node_by_compatible)
  return VAR_0.find_node_by_compatible(VAR_1, VAR_2);

 return ((void*)0);
}
