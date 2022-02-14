
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_struct {scalar_t__ mite_io_addr; } ;
struct mite_channel {scalar_t__ dir; int channel; TYPE_1__* ring; struct mite_struct* mite; } ;
struct TYPE_2__ {unsigned int descriptors_dma_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (unsigned int,scalar_t__) ;

void FUNC_12(struct mite_channel *VAR_17,
     unsigned int VAR_18, unsigned int VAR_19)
{
 unsigned int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 struct mite_struct *VAR_25 = VAR_17->mite;

 FUNC_2("mite_prep_dma ch%i\n", VAR_17->channel);


 VAR_20 = VAR_8 | VAR_9;
 FUNC_11(VAR_20, VAR_25->mite_io_addr + FUNC_4(VAR_17->channel));


 VAR_21 = VAR_5 | VAR_4 | VAR_6 |
     VAR_0;
 VAR_21 |= VAR_7;
 if (VAR_19 == 32 && VAR_18 == 16) {




  VAR_21 |= VAR_1 | VAR_2;
 }
 if (VAR_17->dir == VAR_10)
  VAR_21 |= VAR_3;

 FUNC_11(VAR_21, VAR_25->mite_io_addr + FUNC_3(VAR_17->channel));


 VAR_22 = FUNC_1(64) | VAR_12;
 switch (VAR_19) {
 case 8:
  VAR_22 |= VAR_16;
  break;
 case 16:
  VAR_22 |= VAR_14;
  break;
 case 32:
  VAR_22 |= VAR_15;
  break;
 default:
  FUNC_10("mite: bug! invalid mem bit width for dma transfer\n");
  break;
 }
 FUNC_11(VAR_22, VAR_25->mite_io_addr + FUNC_9(VAR_17->channel));


 VAR_23 = FUNC_1(64) | VAR_12;
 VAR_23 |= VAR_13 | VAR_11 | FUNC_0(VAR_17->channel);
 switch (VAR_18) {
 case 8:
  VAR_23 |= VAR_16;
  break;
 case 16:
  VAR_23 |= VAR_14;
  break;
 case 32:
  VAR_23 |= VAR_15;
  break;
 default:
  FUNC_10("mite: bug! invalid dev bit width for dma transfer\n");
  break;
 }
 FUNC_11(VAR_23, VAR_25->mite_io_addr + FUNC_6(VAR_17->channel));


 FUNC_11(0, VAR_25->mite_io_addr + FUNC_5(VAR_17->channel));


 VAR_24 = FUNC_1(64) | VAR_12 | VAR_15;
 FUNC_11(VAR_24, VAR_25->mite_io_addr + FUNC_8(VAR_17->channel));


 FUNC_11(VAR_17->ring->descriptors_dma_addr,
        VAR_25->mite_io_addr + FUNC_7(VAR_17->channel));

 FUNC_2("exit mite_prep_dma\n");
}
