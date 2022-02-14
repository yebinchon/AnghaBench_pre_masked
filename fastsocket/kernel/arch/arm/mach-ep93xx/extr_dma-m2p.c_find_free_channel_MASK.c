
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {struct ep93xx_dma_m2p_client* client; scalar_t__ base; } ;
struct ep93xx_dma_m2p_client {int flags; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct m2p_channel* FUNC_0 (int ) ;
 struct m2p_channel* VAR_4 ;
 struct m2p_channel* VAR_5 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static struct m2p_channel *FUNC_2(struct ep93xx_dma_m2p_client *VAR_6)
{
 struct m2p_channel *VAR_7;
 int VAR_8;

 if (VAR_6->flags & VAR_3)
  VAR_7 = VAR_4;
 else
  VAR_7 = VAR_5;

 for (VAR_8 = 0; VAR_7[VAR_8].base; VAR_8++) {
  struct ep93xx_dma_m2p_client *VAR_9;

  VAR_9 = VAR_7[VAR_8].client;
  if (VAR_9 != ((void*)0)) {
   int VAR_10;

   VAR_10 = VAR_6->flags & VAR_2;
   if (VAR_10 == (VAR_9->flags &
         VAR_2)) {
    FUNC_1("DMA channel already used by %s\n",
        VAR_6->name ? : "unknown client");
    return FUNC_0(-VAR_0);
   }
  }
 }

 for (VAR_8 = 0; VAR_7[VAR_8].base; VAR_8++) {
  if (VAR_7[VAR_8].client == ((void*)0))
   return VAR_7 + VAR_8;
 }

 FUNC_1("No free DMA channel for %s\n",
     VAR_6->name ? : "unknown client");
 return FUNC_0(-VAR_1);
}
