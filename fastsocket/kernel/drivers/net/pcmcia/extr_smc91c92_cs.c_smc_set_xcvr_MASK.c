
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct smc_private {int cfg; scalar_t__ manfid; scalar_t__ cardid; int media_status; } ;
struct net_device {unsigned int base_addr; scalar_t__ if_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct smc_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_7, int VAR_8)
{
    struct smc_private *VAR_9 = FUNC_3(VAR_7);
    unsigned int VAR_10 = VAR_7->base_addr;
    u_short VAR_11;

    VAR_11 = FUNC_1(VAR_10 + VAR_0);
    FUNC_0(1);
    if (VAR_8 == 2) {
 FUNC_4(VAR_9->cfg | VAR_1, VAR_10 + VAR_2);
 if ((VAR_9->manfid == VAR_3) &&
     (VAR_9->cardid != VAR_6))
     FUNC_5(VAR_5, VAR_10 - 0x10 + VAR_4);
 VAR_9->media_status = ((VAR_7->if_port == 0) ? 0x0001 : 0x0002);
    } else {
 FUNC_4(VAR_9->cfg, VAR_10 + VAR_2);
 if ((VAR_9->manfid == VAR_3) &&
     (VAR_9->cardid != VAR_6))
     FUNC_2(~VAR_5, VAR_10 - 0x10 + VAR_4);
 VAR_9->media_status = ((VAR_7->if_port == 0) ? 0x0012 : 0x4001);
    }
    FUNC_0(VAR_11);
}
