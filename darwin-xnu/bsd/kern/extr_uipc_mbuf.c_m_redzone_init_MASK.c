
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int redzone; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct mbuf *VAR_2)
{
 FUNC_0(VAR_2->m_flags & VAR_0);




 VAR_2->m_pkthdr.redzone = ((u_int32_t)(uintptr_t)VAR_2) ^ VAR_1;
}
