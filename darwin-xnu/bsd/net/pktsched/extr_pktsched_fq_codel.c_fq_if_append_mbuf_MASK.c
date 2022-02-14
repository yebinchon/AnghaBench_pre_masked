
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
struct TYPE_2__ {struct TYPE_2__* m_nextpkt; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, void *VAR_1)
{
 ((mbuf_t)VAR_0)->m_nextpkt = (mbuf_t)VAR_1;
}
