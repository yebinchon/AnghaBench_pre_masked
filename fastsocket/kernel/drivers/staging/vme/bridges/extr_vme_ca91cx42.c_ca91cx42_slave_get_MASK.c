
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vme_cycle_t ;
typedef scalar_t__ vme_address_t ;
struct vme_slave_resource {unsigned int number; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_1__* VAR_24 ;
 void* FUNC_0 (scalar_t__) ;

int FUNC_1(struct vme_slave_resource *VAR_25, int *VAR_26,
 unsigned long long *VAR_27, unsigned long long *VAR_28,
 dma_addr_t *VAR_29, vme_address_t *VAR_30, vme_cycle_t *VAR_31)
{
 unsigned int VAR_32, VAR_33 = 0, VAR_34 = 0;
 unsigned long long VAR_35, VAR_36;

 VAR_32 = VAR_25->number;

 if ((VAR_32 == 0) || (VAR_32 == 4))
  VAR_33 = 0x1000;
 else
  VAR_33 = 0x10000;


 VAR_34 = FUNC_0(VAR_24->base + VAR_2[VAR_32]);

 *VAR_27 = FUNC_0(VAR_24->base + VAR_1[VAR_32]);
 VAR_35 = FUNC_0(VAR_24->base + VAR_0[VAR_32]);
 VAR_36 = FUNC_0(VAR_24->base + VAR_14[VAR_32]);

 *VAR_29 = (dma_addr_t)VAR_27 + VAR_36;
 *VAR_28 = (unsigned long long)((VAR_35 - *VAR_27) + VAR_33);

 *VAR_26 = 0;
 *VAR_30 = 0;
 *VAR_31 = 0;

 if (VAR_34 & VAR_3)
  *VAR_26 = 1;

 if ((VAR_34 & VAR_11) == VAR_8)
  *VAR_30 = VAR_15;
 if ((VAR_34 & VAR_11) == VAR_9)
  *VAR_30 = VAR_16;
 if ((VAR_34 & VAR_11) == VAR_10)
  *VAR_30 = VAR_17;
 if ((VAR_34 & VAR_11) == VAR_12)
  *VAR_30 = VAR_22;
 if ((VAR_34 & VAR_11) == VAR_13)
  *VAR_30 = VAR_23;

 if (VAR_34 & VAR_7)
  *VAR_31 |= VAR_20;
 if (VAR_34 & VAR_6)
  *VAR_31 |= VAR_21;
 if (VAR_34 & VAR_5)
  *VAR_31 |= VAR_19;
 if (VAR_34 & VAR_4)
  *VAR_31 |= VAR_18;

 return 0;
}
