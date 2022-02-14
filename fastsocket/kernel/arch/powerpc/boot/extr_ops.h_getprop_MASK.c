
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* getprop ) (void*,char const*,void*,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void*,char const*,void*,int) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1, const char *VAR_2, void *VAR_3, int VAR_4)
{
 return (VAR_0.getprop) ? VAR_0.getprop(VAR_1, VAR_2, VAR_3, VAR_4) : -1;
}
