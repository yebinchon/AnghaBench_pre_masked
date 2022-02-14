
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct pkthdr {int pkt_flags; int pkt_mpriv; } ;
struct mbuf {int m_flags; struct pkthdr m_pkthdr; } ;
typedef int mcache_obj_t ;
struct TYPE_4__ {int mca_uflags; } ;
typedef TYPE_1__ mcache_audit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,struct mbuf*,int) ;

u_int32_t
FUNC_6(struct mbuf *VAR_6, u_int8_t **VAR_7)
{
 struct pkthdr *VAR_8 = &VAR_6->m_pkthdr;

 FUNC_0(VAR_6->m_flags & VAR_2);


 if (VAR_8->pkt_flags & VAR_3) {
  FUNC_5("Invalid attempt to access guarded module-private "
      "area: mbuf %p, pkt_flags 0x%x\n", VAR_6, VAR_8->pkt_flags);

 }

 if (VAR_5) {
  mcache_audit_t *VAR_9;

  FUNC_1(VAR_4);
  VAR_9 = FUNC_3(VAR_1, (mcache_obj_t *)VAR_6);
  if (VAR_9->mca_uflags & VAR_0)
   FUNC_4(VAR_9);
  FUNC_2(VAR_4);
 }

 *VAR_7 = (u_int8_t *)&VAR_8->pkt_mpriv;
 return (sizeof (VAR_8->pkt_mpriv));
}
