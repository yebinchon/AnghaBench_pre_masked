
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m2p_channel {scalar_t__ base; int clk; struct ep93xx_dma_m2p_client* client; } ;
struct ep93xx_dma_m2p_client {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct m2p_channel*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct m2p_channel *VAR_5)
{
 struct ep93xx_dma_m2p_client *VAR_6 = VAR_5->client;
 u32 VAR_7;

 FUNC_0(VAR_5->clk);

 VAR_7 = VAR_6->flags & VAR_1;
 FUNC_2(VAR_7, VAR_5->base + VAR_4);

 VAR_7 = VAR_6->flags & VAR_0;
 VAR_7 |= VAR_2 | VAR_3;
 FUNC_1(VAR_5, VAR_7);
}
