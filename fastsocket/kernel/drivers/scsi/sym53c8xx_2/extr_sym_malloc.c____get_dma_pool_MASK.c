
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* m_pool_p ;
typedef int m_pool_ident_t ;
struct TYPE_5__ {TYPE_1__* next; } ;
struct TYPE_4__ {struct TYPE_4__* next; int dev_dmat; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline m_pool_p FUNC_1(m_pool_ident_t VAR_1)
{
 m_pool_p VAR_2;
 for (VAR_2 = VAR_0;
  VAR_2 && !FUNC_0(VAR_2->dev_dmat, VAR_1);
   VAR_2 = VAR_2->next);
 return VAR_2;
}
