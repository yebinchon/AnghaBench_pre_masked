
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int tx_aborted_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;


 int FUNC_0 (int,char*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 unsigned int VAR_5 = VAR_4->base_addr;
 int VAR_6;


 for (VAR_6 = 32; VAR_6 > 0; VAR_6--) {
  u_char VAR_7 = FUNC_1(VAR_5 + VAR_3);
  if (!(VAR_7 & 0x84))
   break;

  if (VAR_7 & 0x30)
   FUNC_4(VAR_4, VAR_2);
  if (VAR_7 & 0x38) {
   FUNC_0(1, "%s: transmit error: status 0x%02x\n",
      VAR_4->name, VAR_7);
   FUNC_3(VAR_1, VAR_5 + VAR_0);
   VAR_4->stats.tx_aborted_errors++;
  }
  FUNC_2(0x00, VAR_5 + VAR_3);
 }
}
