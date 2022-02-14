
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int protocol_family_t ;
typedef TYPE_1__* mbuf_t ;
struct TYPE_5__ {int * m_nextpkt; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(protocol_family_t VAR_0, mbuf_t VAR_1)
{
#pragma unused(protocol)

 if (VAR_1->m_nextpkt != ((void*)0)) {
  FUNC_1(VAR_1);
 } else {




  FUNC_0(VAR_1);
 }
}
