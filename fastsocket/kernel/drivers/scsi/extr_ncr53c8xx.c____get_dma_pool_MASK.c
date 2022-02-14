
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bush; struct TYPE_4__* next; } ;
typedef TYPE_1__ m_pool_s ;
typedef scalar_t__ m_bush_t ;
struct TYPE_5__ {TYPE_1__* next; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline m_pool_s *FUNC_0(m_bush_t VAR_1)
{
 m_pool_s *VAR_2;
 for (VAR_2 = VAR_0; VAR_2 && VAR_2->bush != VAR_1; VAR_2 = VAR_2->next);
 return VAR_2;
}
