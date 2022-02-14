
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {TYPE_1__* dma_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_11__ {int dev_flags; int name; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_9__ {int (* dma_host_set ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_3__*,int const) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_7, const u8 VAR_8)
{
 ide_hwif_t *VAR_9 = VAR_7->hwif;
 int VAR_10 = -1;




 switch (VAR_8) {
  case 200: VAR_10 = VAR_4; break;
  case 201: VAR_10 = VAR_5; break;
  case 202: VAR_10 = VAR_6; break;
  case 100: VAR_10 = VAR_1; break;
  case 101: VAR_10 = VAR_2; break;
  case 102: VAR_10 = VAR_3; break;
 }
 if (VAR_10 != -1) {
  FUNC_2("SC1200: %s: changing (U)DMA mode\n", VAR_7->name);
  FUNC_0(VAR_7);
  if (FUNC_1(VAR_7, VAR_10) == 0 &&
      (VAR_7->dev_flags & VAR_0))
   VAR_9->dma_ops->dma_host_set(VAR_7, 1);
  return;
 }

 FUNC_3(VAR_7, VAR_8);
}
