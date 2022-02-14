
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct rx_ring {int dummy; } ;
struct ql_adapter {int dummy; } ;
struct ib_mac_iocb_rsp {int flags2; int flags4; int flags3; int flags1; int vlan_id; int data_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ib_mac_iocb_rsp*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ql_adapter*,struct rx_ring*,struct ib_mac_iocb_rsp*,scalar_t__,int) ;
 int FUNC_4 (struct ql_adapter*,struct rx_ring*,struct ib_mac_iocb_rsp*,scalar_t__,int) ;
 int FUNC_5 (struct ql_adapter*,struct rx_ring*,struct ib_mac_iocb_rsp*,scalar_t__,int) ;
 int FUNC_6 (struct ql_adapter*,struct rx_ring*,struct ib_mac_iocb_rsp*,int) ;

__attribute__((used)) static unsigned long FUNC_7(struct ql_adapter *VAR_7,
     struct rx_ring *VAR_8,
     struct ib_mac_iocb_rsp *VAR_9)
{
 u32 VAR_10 = FUNC_2(VAR_9->data_len);
 u16 VAR_11 = (VAR_9->flags2 & VAR_5) ?
   ((FUNC_1(VAR_9->vlan_id) &
   VAR_6)) : 0xffff;

 FUNC_0(VAR_9);

 if (VAR_9->flags4 & VAR_3) {



  FUNC_6(VAR_7, VAR_8, VAR_9,
      VAR_11);
 } else if (VAR_9->flags3 & VAR_2) {




  FUNC_5(VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11);
 } else if ((VAR_9->flags3 & VAR_1) &&
  !(VAR_9->flags1 & VAR_0) &&
  (VAR_9->flags2 & VAR_4)) {



  FUNC_3(VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11);
 } else if (VAR_9->flags3 & VAR_1) {



  FUNC_4(VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11);
 } else {



  FUNC_6(VAR_7, VAR_8, VAR_9,
      VAR_11);
 }

 return (unsigned long)VAR_10;
}
