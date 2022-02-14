
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_pcb {int dummy; } ;
typedef int mbuf_t ;
typedef int ifnet_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct ipsec_pcb* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(ifnet_t VAR_0)
{
 mbuf_t VAR_1;
 struct ipsec_pcb *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2 != ((void*)0));
 for (;;) {
  if (FUNC_1(VAR_0, &VAR_1) != 0)
   break;
  if (FUNC_3(VAR_0, VAR_1) != 0)
   break;
 }
}
