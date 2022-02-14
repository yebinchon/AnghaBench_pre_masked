
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; } ;
typedef int int32_t ;



__attribute__((used)) static struct mbuf *
FUNC_0(struct mbuf * VAR_0, int32_t * VAR_1)
{
    int VAR_2;

    VAR_2 = VAR_0->m_len;
    while (*VAR_1 >= VAR_2) {
 *VAR_1 -= VAR_2;
 VAR_0 = VAR_0->m_next;
 if (VAR_0 == ((void*)0)) {
     break;
 }
 VAR_2 = VAR_0->m_len;
    }
    return (VAR_0);
}
