
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct net_device {int num_tx_queues; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7, u32 VAR_8,
                              u8 *VAR_9)
{
 char *VAR_10 = (char *)VAR_9;
 int VAR_11;

 switch (VAR_8) {
 case 128:
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   FUNC_0(VAR_9, VAR_6[VAR_11], VAR_0);
   VAR_9 += VAR_0;
  }
  break;
 case 129:
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   FUNC_0(VAR_10, VAR_5[VAR_11].stat_string,
          VAR_0);
   VAR_10 += VAR_0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_7->num_tx_queues; VAR_11++) {
   FUNC_1(VAR_10, "tx_queue_%u_packets", VAR_11);
   VAR_10 += VAR_0;
   FUNC_1(VAR_10, "tx_queue_%u_bytes", VAR_11);
   VAR_10 += VAR_0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   FUNC_1(VAR_10, "rx_queue_%u_packets", VAR_11);
   VAR_10 += VAR_0;
   FUNC_1(VAR_10, "rx_queue_%u_bytes", VAR_11);
   VAR_10 += VAR_0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   FUNC_1(VAR_10, "tx_pb_%u_pxon", VAR_11);
   VAR_10 += VAR_0;
   FUNC_1(VAR_10, "tx_pb_%u_pxoff", VAR_11);
   VAR_10 += VAR_0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   FUNC_1(VAR_10, "rx_pb_%u_pxon", VAR_11);
   VAR_10 += VAR_0;
   FUNC_1(VAR_10, "rx_pb_%u_pxoff", VAR_11);
   VAR_10 += VAR_0;
  }

  break;
 }
}
