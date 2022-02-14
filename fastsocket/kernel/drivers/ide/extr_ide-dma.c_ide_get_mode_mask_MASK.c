
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ide_port_ops {unsigned int (* udma_filter ) (TYPE_2__*) ;unsigned int (* mdma_filter ) (TYPE_2__*) ;} ;
struct TYPE_7__ {unsigned int ultra_mask; unsigned int mwdma_mask; unsigned int swdma_mask; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {int* id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;



 int VAR_7 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static unsigned int FUNC_5(ide_drive_t *VAR_8, u8 VAR_9, u8 VAR_10)
{
 u16 *VAR_11 = VAR_8->id;
 ide_hwif_t *VAR_12 = VAR_8->hwif;
 const struct ide_port_ops *VAR_13 = VAR_12->port_ops;
 unsigned int VAR_14 = 0;

 switch (VAR_9) {
 case 128:
  if ((VAR_11[VAR_1] & 4) == 0)
   break;
  VAR_14 = VAR_11[VAR_5];
  if (VAR_13 && VAR_13->udma_filter)
   VAR_14 &= VAR_13->udma_filter(VAR_8);
  else
   VAR_14 &= VAR_12->ultra_mask;




  if (VAR_10 > VAR_7) {
   if ((VAR_14 & 0x78) && (FUNC_2(VAR_8) == 0))
    VAR_14 &= 0x07;
  }
  break;
 case 130:
  VAR_14 = VAR_11[VAR_2];


  if (FUNC_1(VAR_11) && (VAR_11[VAR_0] & 0x38)) {
   u8 VAR_15 = ((VAR_11[VAR_0] & 0x38) >> 3) - 1;

   VAR_14 |= ((2 << VAR_15) - 1) << 3;
  }

  if (VAR_13 && VAR_13->mdma_filter)
   VAR_14 &= VAR_13->mdma_filter(VAR_8);
  else
   VAR_14 &= VAR_12->mwdma_mask;
  break;
 case 129:
  VAR_14 = VAR_11[VAR_4];
  if (!(VAR_14 & VAR_6) && (VAR_11[VAR_3] >> 8)) {
   u8 VAR_16 = VAR_11[VAR_3] >> 8;





   if (VAR_16 <= 2)
    VAR_14 = (2 << VAR_16) - 1;
  }
  VAR_14 &= VAR_12->swdma_mask;
  break;
 default:
  FUNC_0();
  break;
 }

 return VAR_14;
}
