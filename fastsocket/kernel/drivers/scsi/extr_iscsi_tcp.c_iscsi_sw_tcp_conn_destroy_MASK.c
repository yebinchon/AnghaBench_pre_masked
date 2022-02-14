
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct TYPE_4__ {scalar_t__ tfm; } ;
struct TYPE_3__ {scalar_t__ tfm; } ;
struct iscsi_sw_tcp_conn {TYPE_2__ rx_hash; TYPE_1__ tx_hash; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_cls_conn*) ;

__attribute__((used)) static void FUNC_3(struct iscsi_cls_conn *VAR_0)
{
 struct iscsi_conn *VAR_1 = VAR_0->dd_data;
 struct iscsi_tcp_conn *VAR_2 = VAR_1->dd_data;
 struct iscsi_sw_tcp_conn *VAR_3 = VAR_2->dd_data;

 FUNC_1(VAR_1);

 if (VAR_3->tx_hash.tfm)
  FUNC_0(VAR_3->tx_hash.tfm);
 if (VAR_3->rx_hash.tfm)
  FUNC_0(VAR_3->rx_hash.tfm);

 FUNC_2(VAR_0);
}
