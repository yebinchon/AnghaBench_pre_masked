
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct ether_header {scalar_t__ ether_type; int ether_shost; } ;
typedef int protocol_family_t ;
typedef TYPE_1__* mbuf_t ;
typedef int ifnet_t ;
typedef int errno_t ;
struct TYPE_9__ {struct TYPE_9__* m_nextpkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ifnet*,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct ether_header* FUNC_6 (TYPE_1__*) ;
 struct ifnet* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;

__attribute__((used)) static errno_t
FUNC_9(ifnet_t VAR_6, protocol_family_t VAR_7,
    mbuf_t VAR_8)
{
#pragma unused(ifp, protocol_family)
 mbuf_t VAR_9;
 mbuf_t *VAR_10 = &VAR_8;
 mbuf_t VAR_11;


 for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_11) {
  struct ether_header *VAR_12 = FUNC_6(VAR_9);
  struct ifnet *VAR_13;
  VAR_13 = FUNC_7(VAR_9);

  VAR_11 = VAR_9->m_nextpkt;

  if (VAR_12->ether_type == FUNC_3(VAR_2)) {




   if (FUNC_1(VAR_12->ether_shost, VAR_5,
       VAR_3) != 0) {
    FUNC_0(VAR_13, VAR_12->ether_shost,
        VAR_3);
   }

   *VAR_10 = VAR_9;
   VAR_10 = &VAR_9->m_nextpkt;
  } else {

   VAR_9->m_nextpkt = ((void*)0);
   if (VAR_12->ether_type == FUNC_3(VAR_1))
    FUNC_2(VAR_13, VAR_9);
   else
    FUNC_4(VAR_9);
  }
 }

 *VAR_10 = ((void*)0);


 if (VAR_8 != ((void*)0) && FUNC_8(VAR_4, VAR_8) != 0) {
  FUNC_5(VAR_8);
 }

 return (VAR_0);
}
