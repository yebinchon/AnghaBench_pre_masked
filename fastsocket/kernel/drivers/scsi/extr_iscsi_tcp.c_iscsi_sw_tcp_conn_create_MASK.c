
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct iscsi_tcp_conn {TYPE_1__* rx_hash; struct iscsi_sw_tcp_conn* dd_data; } ;
struct TYPE_4__ {void* tfm; scalar_t__ flags; } ;
struct TYPE_3__ {void* tfm; scalar_t__ flags; } ;
struct iscsi_sw_tcp_conn {TYPE_2__ tx_hash; TYPE_1__ rx_hash; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 void* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,struct iscsi_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_4 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_5 (struct iscsi_cls_conn*) ;

__attribute__((used)) static struct iscsi_cls_conn *
FUNC_6(struct iscsi_cls_session *VAR_2,
    uint32_t VAR_3)
{
 struct iscsi_conn *VAR_4;
 struct iscsi_cls_conn *VAR_5;
 struct iscsi_tcp_conn *VAR_6;
 struct iscsi_sw_tcp_conn *VAR_7;

 VAR_5 = FUNC_4(VAR_2, sizeof(*VAR_7),
     VAR_3);
 if (!VAR_5)
  return ((void*)0);
 VAR_4 = VAR_5->dd_data;
 VAR_6 = VAR_4->dd_data;
 VAR_7 = VAR_6->dd_data;

 VAR_7->tx_hash.tfm = FUNC_1("crc32c", 0,
           VAR_0);
 VAR_7->tx_hash.flags = 0;
 if (FUNC_0(VAR_7->tx_hash.tfm))
  goto free_conn;

 VAR_7->rx_hash.tfm = FUNC_1("crc32c", 0,
           VAR_0);
 VAR_7->rx_hash.flags = 0;
 if (FUNC_0(VAR_7->rx_hash.tfm))
  goto free_tx_tfm;
 VAR_6->rx_hash = &VAR_7->rx_hash;

 return VAR_5;

free_tx_tfm:
 FUNC_2(VAR_7->tx_hash.tfm);
free_conn:
 FUNC_3(VAR_1, VAR_4,
     "Could not create connection due to crc32c "
     "loading error. Make sure the crc32c "
     "module is built as a module or into the "
     "kernel\n");
 FUNC_5(VAR_5);
 return ((void*)0);
}
