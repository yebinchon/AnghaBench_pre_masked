
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tx_packets; int tx_time_us; int rx_packets; int rx_time_us; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct TYPE_4__ {TYPE_3__ normal; int flags; } ;
struct netxen_adapter {TYPE_1__ coal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct netxen_adapter *VAR_5)
{
 VAR_5->coal.flags = VAR_4;
 VAR_5->coal.normal.data.rx_time_us =
  VAR_1;
 VAR_5->coal.normal.data.rx_packets =
  VAR_0;
 VAR_5->coal.normal.data.tx_time_us =
  VAR_3;
 VAR_5->coal.normal.data.tx_packets =
  VAR_2;
}
