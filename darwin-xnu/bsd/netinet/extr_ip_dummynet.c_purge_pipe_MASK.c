
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_pipe {int idle_heap; int not_eligible_heap; int scheduler_heap; struct mbuf* head; int fs; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(struct dn_pipe *VAR_0)
{
    struct mbuf *VAR_1, *VAR_2;

    FUNC_2( &(VAR_0->fs), 1 );

    VAR_2 = VAR_0->head;
    while ((VAR_1 = VAR_2) != ((void*)0)) {
 VAR_2 = VAR_1->m_nextpkt;
 FUNC_0(VAR_1);
    }

    FUNC_1( &(VAR_0->scheduler_heap) );
    FUNC_1( &(VAR_0->not_eligible_heap) );
    FUNC_1( &(VAR_0->idle_heap) );
}
