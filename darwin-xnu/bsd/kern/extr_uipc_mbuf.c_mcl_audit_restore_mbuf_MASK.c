
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {scalar_t__ m_flags; int m_type; struct mbuf* m_next; } ;
struct TYPE_4__ {scalar_t__ mca_contents_size; } ;
typedef TYPE_1__ mcache_audit_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,struct mbuf*,int ) ;
 int * FUNC_5 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct mbuf *VAR_3, mcache_audit_t *VAR_4, boolean_t VAR_5)
{
 struct mbuf *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5) {
  struct mbuf *VAR_7 = VAR_3->m_next;
  FUNC_2(VAR_6->m_flags == VAR_2 && FUNC_5(VAR_6) != ((void*)0) &&
      FUNC_0(VAR_6));
  FUNC_2(VAR_4->mca_contents_size == VAR_0);






  FUNC_4(VAR_6, VAR_3, VAR_1);
  VAR_3->m_next = VAR_7;
 } else {





  VAR_3->m_type = VAR_6->m_type;
 }
 FUNC_3(VAR_3);
}
