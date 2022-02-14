
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* freep ) (TYPE_1__*,int) ;TYPE_2__* h; } ;
typedef TYPE_1__ m_pool_s ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ m_link_s ;
typedef int m_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(m_pool_s *VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = (1 << VAR_1);
 m_link_s *VAR_8;
 m_addr_t VAR_9, VAR_10;
 m_link_s *VAR_11 = VAR_3->h;





 if (VAR_5 > (VAR_2 << VAR_0))
  return;

 while (VAR_5 > VAR_7) {
  VAR_7 <<= 1;
  ++VAR_6;
 }

 VAR_9 = (m_addr_t) VAR_4;

 while (1) {






  VAR_10 = VAR_9 ^ VAR_7;
  VAR_8 = &VAR_11[VAR_6];
  while (VAR_8->next && VAR_8->next != (m_link_s *) VAR_10) {
   VAR_8 = VAR_8->next;
  }
  if (!VAR_8->next) {
   ((m_link_s *) VAR_9)->next = VAR_11[VAR_6].next;
   VAR_11[VAR_6].next = (m_link_s *) VAR_9;
   break;
  }
  VAR_8->next = VAR_8->next->next;
  VAR_9 = VAR_9 & VAR_10;
  VAR_7 <<= 1;
  ++VAR_6;
 }
}
