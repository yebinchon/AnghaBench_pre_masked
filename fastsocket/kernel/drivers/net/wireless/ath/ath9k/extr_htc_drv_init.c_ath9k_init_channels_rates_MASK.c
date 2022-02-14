
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_3__* sbands; TYPE_2__* ah; } ;
struct TYPE_6__ {size_t band; void* n_bitrates; void* bitrates; void* n_channels; void* channels; } ;
struct TYPE_4__ {int hw_caps; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void FUNC_1(struct ath9k_htc_priv *VAR_7)
{
 if (VAR_7->ah->caps.hw_caps & VAR_0) {
  VAR_7->sbands[VAR_2].channels =
   VAR_4;
  VAR_7->sbands[VAR_2].band = VAR_2;
  VAR_7->sbands[VAR_2].n_channels =
   FUNC_0(VAR_4);
  VAR_7->sbands[VAR_2].bitrates = VAR_6;
  VAR_7->sbands[VAR_2].n_bitrates =
   FUNC_0(VAR_6);
 }

 if (VAR_7->ah->caps.hw_caps & VAR_1) {
  VAR_7->sbands[VAR_3].channels = VAR_5;
  VAR_7->sbands[VAR_3].band = VAR_3;
  VAR_7->sbands[VAR_3].n_channels =
   FUNC_0(VAR_5);
  VAR_7->sbands[VAR_3].bitrates =
   VAR_6 + 4;
  VAR_7->sbands[VAR_3].n_bitrates =
   FUNC_0(VAR_6) - 4;
 }
}
