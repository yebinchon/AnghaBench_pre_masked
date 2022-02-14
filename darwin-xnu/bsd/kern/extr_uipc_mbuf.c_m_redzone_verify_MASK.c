
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
 int FUNC_1 (char*,struct mbuf*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_2)
{
 u_int32_t VAR_3;

 FUNC_0(VAR_2->m_flags & VAR_0);

 VAR_3 = ((u_int32_t)(uintptr_t)VAR_2) ^ VAR_1;
 if (VAR_2->m_pkthdr.redzone != VAR_3) {
  FUNC_1("mbuf %p redzone violation with value 0x%x "
      "(instead of 0x%x, using cookie 0x%x)\n",
      VAR_2, VAR_2->m_pkthdr.redzone, VAR_3, VAR_1);

 }
}
