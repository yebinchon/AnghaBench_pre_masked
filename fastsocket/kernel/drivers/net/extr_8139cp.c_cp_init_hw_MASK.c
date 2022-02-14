
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dev_addr; } ;
struct cp_private {int ring_dma; scalar_t__ wol_enabled; struct net_device* dev; } ;
struct cp_desc {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9 (struct cp_private *VAR_21)
{
 struct net_device *VAR_22 = VAR_21->dev;
 dma_addr_t VAR_23;

 FUNC_1(VAR_21);

 FUNC_7 (VAR_1, VAR_3);


 FUNC_5 (VAR_10 + 0, FUNC_8 (*(__le32 *) (VAR_22->dev_addr + 0)));
 FUNC_5 (VAR_10 + 4, FUNC_8 (*(__le32 *) (VAR_22->dev_addr + 4)));

 FUNC_2(VAR_21);
 FUNC_6(VAR_20, 0x06);

 FUNC_0(VAR_22);
 FUNC_5 (VAR_17, VAR_9 | (VAR_16 << VAR_18));

 FUNC_6(VAR_4, FUNC_3(VAR_4) | VAR_7 | VAR_14);

 FUNC_6(VAR_5, VAR_12);
 VAR_21->wol_enabled = 0;

 FUNC_6(VAR_6, FUNC_3(VAR_6) & VAR_13);

 FUNC_5(VAR_8, 0);
 FUNC_5(VAR_8 + 4, 0);

 VAR_23 = VAR_21->ring_dma;
 FUNC_5(VAR_15, VAR_23 & 0xffffffff);
 FUNC_5(VAR_15 + 4, (VAR_23 >> 16) >> 16);

 VAR_23 += sizeof(struct cp_desc) * VAR_0;
 FUNC_5(VAR_19, VAR_23 & 0xffffffff);
 FUNC_5(VAR_19 + 4, (VAR_23 >> 16) >> 16);

 FUNC_4(VAR_11, 0);

 FUNC_7(VAR_1, VAR_2);
}
