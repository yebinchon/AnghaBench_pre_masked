
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_8 ;

void FUNC_3(int VAR_9, int VAR_10)
{
 if (VAR_8)
  FUNC_0("vdma_set_mode: channel %d, mode 0x%x\n", VAR_9,
         VAR_10);

 switch (VAR_9) {
 case 128:
  FUNC_2(VAR_1 + (VAR_9 << 5),


      VAR_5 |
      VAR_6 |
      VAR_4);
  break;

 case 129:
  FUNC_2(VAR_1 + (VAR_9 << 5),


      VAR_5 |
      VAR_7 |
      VAR_3);
  break;

 case 131:
 case 130:
  FUNC_0("VDMA: Audio DMA not supported yet.\n");
  break;

 default:
  FUNC_0
      ("VDMA: vdma_set_mode() called with unsupported channel %d!\n",
       VAR_9);
 }

 switch (VAR_10) {
 case 133:
  FUNC_2(VAR_0 + (VAR_9 << 5),
      FUNC_1(VAR_0 +
         (VAR_9 << 5)) &
      ~VAR_2);
  break;

 case 132:
  FUNC_2(VAR_0 + (VAR_9 << 5),
      FUNC_1(VAR_0 +
         (VAR_9 << 5)) |
      VAR_2);
  break;

 default:
  FUNC_0
      ("VDMA: vdma_set_mode() called with unknown dma mode 0x%x\n",
       VAR_10);
 }
}
