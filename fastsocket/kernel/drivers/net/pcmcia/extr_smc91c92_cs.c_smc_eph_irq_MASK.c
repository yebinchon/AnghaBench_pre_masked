
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct smc_private {int duplex; } ;
struct TYPE_2__ {int collisions; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 struct smc_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_8)
{
    struct smc_private *VAR_9 = FUNC_3(VAR_8);
    unsigned int VAR_10 = VAR_8->base_addr;
    u_short VAR_11, VAR_12;

    FUNC_1(0);
    VAR_12 = FUNC_2(VAR_10 + VAR_5);
    FUNC_0(2, "%s: Ethernet protocol handler interrupt, status"
   " %4.4x.\n", VAR_8->name, VAR_12);

    VAR_11 = FUNC_2(VAR_10 + VAR_1);

    VAR_8->stats.collisions += VAR_11 & 0xF;
    VAR_11 >>= 4;

    VAR_8->stats.collisions += VAR_11 & 0xF;





    FUNC_4(FUNC_2(VAR_10 + VAR_6) | VAR_7 | VAR_9->duplex, VAR_10 + VAR_6);


    FUNC_1(1);
    FUNC_4(VAR_2 | 0x0000, VAR_10 + VAR_0);
    FUNC_4(VAR_2 | VAR_4 | VAR_3,
  VAR_10 + VAR_0);
    FUNC_1(2);
}
