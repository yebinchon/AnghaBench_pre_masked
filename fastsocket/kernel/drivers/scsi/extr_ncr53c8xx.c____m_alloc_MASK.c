
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* getp ) (TYPE_1__*) ;TYPE_2__* h; } ;
typedef TYPE_1__ m_pool_s ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ m_link_s ;
typedef scalar_t__ m_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void *FUNC_2(m_pool_s *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = (1 << VAR_1);
 int VAR_7;
 m_addr_t VAR_8;
 m_link_s *VAR_9 = VAR_3->h;

 if (VAR_4 > (VAR_2 << VAR_0))
  return ((void*)0);

 while (VAR_4 > VAR_6) {
  VAR_6 <<= 1;
  ++VAR_5;
 }

 VAR_7 = VAR_5;
 while (!VAR_9[VAR_7].next) {
  if (VAR_6 == (VAR_2 << VAR_0)) {
   VAR_9[VAR_7].next = (m_link_s *)VAR_3->getp(VAR_3);
   if (VAR_9[VAR_7].next)
    VAR_9[VAR_7].next->next = ((void*)0);
   break;
  }
  ++VAR_7;
  VAR_6 <<= 1;
 }
 VAR_8 = (m_addr_t) VAR_9[VAR_7].next;
 if (VAR_8) {
  VAR_9[VAR_7].next = VAR_9[VAR_7].next->next;
  while (VAR_7 > VAR_5) {
   VAR_7 -= 1;
   VAR_6 >>= 1;
   VAR_9[VAR_7].next = (m_link_s *) (VAR_8+VAR_6);
   VAR_9[VAR_7].next->next = ((void*)0);
  }
 }



 return (void *) VAR_8;
}
