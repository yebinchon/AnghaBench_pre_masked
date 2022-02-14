
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_data; int csum_flags; int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ether_header {int dummy; } ;
typedef int ifnet_t ;
typedef int iff_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,struct mbuf*,void*,int) ;
 int FUNC_1 (int ,int ,struct mbuf*,int *,int ) ;
 int FUNC_2 (int ,struct mbuf*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 void* FUNC_4 (struct mbuf*) ;
 scalar_t__ FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int) ;
 int FUNC_7 (struct mbuf*,void*) ;
 int FUNC_8 (struct mbuf*,int ) ;
 int FUNC_9 (struct mbuf*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(ifnet_t VAR_7, struct mbuf * VAR_8, ifnet_t VAR_9,
     iff_flags_t VAR_10)
{
 void * VAR_11;

 VAR_11 = FUNC_4(VAR_8);
 if ((VAR_10 & VAR_6) != 0) {
  VAR_8->m_pkthdr.csum_data = 0xffff;
  VAR_8->m_pkthdr.csum_flags =
   VAR_0 | VAR_3 |
   VAR_1 | VAR_2;
 }

 (void)FUNC_3(VAR_7, 1, VAR_8->m_pkthdr.len, 0);
 FUNC_1(VAR_7, VAR_4, VAR_8, ((void*)0), 0);

 (void)FUNC_8(VAR_8, VAR_9);
 FUNC_7(VAR_8, VAR_11);
 FUNC_6(VAR_8, - VAR_5);
 (void)FUNC_9(VAR_8, (char *)FUNC_4(VAR_8) + VAR_5,
      FUNC_5(VAR_8) - VAR_5);
 FUNC_0(VAR_9, VAR_4, VAR_8, VAR_11,
     sizeof(struct ether_header));
 FUNC_2(VAR_9, VAR_8);
}
