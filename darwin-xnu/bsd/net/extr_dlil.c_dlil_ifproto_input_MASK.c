
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int (* input ) (int ,int ,TYPE_5__*) ;} ;
struct TYPE_12__ {int (* input ) (int ,int ,TYPE_5__*,char*) ;} ;
struct TYPE_14__ {TYPE_3__ v2; TYPE_2__ v1; } ;
struct if_proto {scalar_t__ proto_kpi; int protocol_family; int ifp; TYPE_4__ kpi; } ;
typedef TYPE_5__* mbuf_t ;
struct TYPE_11__ {char* pkt_hdr; } ;
struct TYPE_15__ {TYPE_1__ m_pkthdr; struct TYPE_15__* m_nextpkt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,TYPE_5__*,char*) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_4(struct if_proto * VAR_3, mbuf_t VAR_4)
{
 int VAR_5;

 if (VAR_3->proto_kpi == VAR_1) {

  while (VAR_4 != ((void*)0)) {
   char * VAR_6;
   mbuf_t VAR_7;

   VAR_7 = VAR_4->m_nextpkt;
   VAR_4->m_nextpkt = ((void*)0);
   VAR_6 = VAR_4->m_pkthdr.pkt_hdr;
   VAR_4->m_pkthdr.pkt_hdr = ((void*)0);
   VAR_5 = (*VAR_3->kpi.v1.input)(VAR_3->ifp,
       VAR_3->protocol_family, VAR_4, VAR_6);
   if (VAR_5 != 0 && VAR_5 != VAR_0)
    FUNC_0(VAR_4);
   VAR_4 = VAR_7;
  }
 } else if (VAR_3->proto_kpi == VAR_2) {

  VAR_5 = (*VAR_3->kpi.v2.input)(VAR_3->ifp,
      VAR_3->protocol_family, VAR_4);
  if (VAR_5 != 0 && VAR_5 != VAR_0)
   FUNC_1(VAR_4);
 }
}
