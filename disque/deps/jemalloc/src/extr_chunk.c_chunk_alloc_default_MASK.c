
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dss_prec; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (void*,size_t) ;
 void* FUNC_1 (TYPE_1__*,void*,size_t,size_t,int*,int*,int ) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void *
FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3, bool *VAR_4,
    bool *VAR_5, unsigned VAR_6)
{
 void *VAR_7;
 arena_t *VAR_8;

 VAR_8 = FUNC_2(VAR_6);
 VAR_7 = FUNC_1(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_8->dss_prec);
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 if (VAR_0)
  FUNC_0(VAR_7, VAR_2);

 return (VAR_7);
}
