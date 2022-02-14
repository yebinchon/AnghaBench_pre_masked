
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {scalar_t__ baddr; struct TYPE_4__* next; scalar_t__ vaddr; } ;
typedef TYPE_1__ m_vtob_s ;
struct TYPE_5__ {TYPE_1__** vtob; } ;
typedef TYPE_2__ m_pool_s ;
typedef int m_bush_t ;
typedef scalar_t__ m_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static m_addr_t FUNC_4(m_bush_t VAR_2, void *VAR_3)
{
 u_long VAR_4;
 m_pool_s *VAR_5;
 int VAR_6 = FUNC_0(VAR_3);
 m_vtob_s *VAR_7 = ((void*)0);
 m_addr_t VAR_8 = ((m_addr_t) VAR_3) & ~VAR_0;

 FUNC_2(&VAR_1, VAR_4);
 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  VAR_7 = VAR_5->vtob[VAR_6];
  while (VAR_7 && (m_addr_t) VAR_7->vaddr != VAR_8)
   VAR_7 = VAR_7->next;
 }
 FUNC_3(&VAR_1, VAR_4);
 return VAR_7 ? VAR_7->baddr + (((m_addr_t) VAR_3) - VAR_8) : 0;
}
