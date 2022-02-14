
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; } ;
struct TYPE_4__ {unsigned int dma0; unsigned int dma_current; unsigned int dma1; int * ai_buf1; int * ai_buf0; int * dma_current_buf; int dma_bits; } ;
struct TYPE_3__ {int driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_0 () ;
 TYPE_2__* VAR_12 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__ VAR_13 ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_14, unsigned int VAR_15,
       unsigned int VAR_16)
{
 unsigned long VAR_17;


 if (VAR_14->irq && VAR_15) {

  switch ((VAR_15 & 0x7) | (VAR_16 << 4)) {
  case 0x5:
   VAR_12->dma_bits |= VAR_1;
   break;
  case 0x6:
   VAR_12->dma_bits |= VAR_3;
   break;
  case 0x7:
   VAR_12->dma_bits |= VAR_5;
   break;
  case 0x65:
   VAR_12->dma_bits |= VAR_2;
   break;
  case 0x76:
   VAR_12->dma_bits |= VAR_4;
   break;
  case 0x57:
   VAR_12->dma_bits |= VAR_6;
   break;
  default:
   FUNC_3(" only supports dma channels 5 through 7\n"
          " Dual dma only allows the following combinations:\n"
          " dma 5,6 / 6,7 / or 7,5\n");
   return -VAR_8;
   break;
  }
  if (FUNC_5(VAR_15, VAR_13)) {
   FUNC_3(" failed to allocate dma channel %i\n", VAR_15);
   return -VAR_8;
  }
  VAR_12->dma0 = VAR_15;
  VAR_12->dma_current = VAR_15;
  if (VAR_16) {
   if (FUNC_5(VAR_16, VAR_13)) {
    FUNC_3(" failed to allocate dma channel %i\n",
           VAR_16);
    return -VAR_8;
   }
   VAR_12->dma1 = VAR_16;
  }
  VAR_12->ai_buf0 = FUNC_2(VAR_0, VAR_11 | VAR_10);
  if (VAR_12->ai_buf0 == ((void*)0))
   return -VAR_9;
  VAR_12->dma_current_buf = VAR_12->ai_buf0;
  if (VAR_16) {
   VAR_12->ai_buf1 =
       FUNC_2(VAR_0, VAR_11 | VAR_10);
   if (VAR_12->ai_buf1 == ((void*)0))
    return -VAR_9;
  }
  VAR_17 = FUNC_0();
  FUNC_1(VAR_12->dma0);
  FUNC_6(VAR_12->dma0, VAR_7);
  if (VAR_16) {
   FUNC_1(VAR_12->dma1);
   FUNC_6(VAR_12->dma1, VAR_7);
  }
  FUNC_4(VAR_17);
 }
 return 0;
}
