
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mbuf {scalar_t__ m_data; } ;
struct ifnet {int dummy; } ;
typedef int packet_buffer_ref ;
typedef TYPE_2__* la_marker_pdu_ref ;
typedef TYPE_3__* bondport_ref ;
struct TYPE_8__ {scalar_t__ po_enabled; TYPE_1__* po_bond; } ;
struct TYPE_7__ {scalar_t__ lm_marker_tlv_type; } ;
struct TYPE_6__ {scalar_t__ ifb_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 TYPE_3__* FUNC_1 (struct ifnet*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct mbuf * VAR_5, struct ifnet * VAR_6)
{
    la_marker_pdu_ref VAR_7;
    bondport_ref VAR_8;

    VAR_7 = (la_marker_pdu_ref)(VAR_5->m_data + VAR_0);
    if (VAR_7->lm_marker_tlv_type != VAR_3) {
 goto failed;
    }
    FUNC_0();
    if ((FUNC_4(VAR_6) & VAR_1) == 0) {
 FUNC_2();
 goto failed;
    }
    VAR_8 = FUNC_1(VAR_6);
    if (VAR_8 == ((void*)0) || VAR_8->po_enabled == 0
 || VAR_8->po_bond->ifb_mode != VAR_2) {
 FUNC_2();
 goto failed;
    }

    VAR_7->lm_marker_tlv_type = VAR_4;
    FUNC_3(VAR_8, (packet_buffer_ref)VAR_5);
    FUNC_2();
    return;

 failed:
    FUNC_5(VAR_5);
    return;
}
