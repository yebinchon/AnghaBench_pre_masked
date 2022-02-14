
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vme_width_t ;
typedef int vme_cycle_t ;
typedef scalar_t__ vme_address_t ;
struct vme_master_resource {unsigned int number; } ;
struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_3__ {int wrPostEnable; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;




 unsigned int VAR_6 ;


 unsigned int VAR_7 ;




 unsigned int VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_2__* VAR_26 ;
 void* FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_27 ;

int FUNC_1(struct vme_master_resource *VAR_28, int *VAR_29,
 unsigned long long *VAR_30, unsigned long long *VAR_31,
 vme_address_t *VAR_32, vme_cycle_t *VAR_33, vme_width_t *VAR_34)
{
 unsigned int VAR_35, VAR_36;
 unsigned long long VAR_37, VAR_38, VAR_39;

 VAR_35 = VAR_28->number;

 VAR_36 = FUNC_0(VAR_26->base + VAR_2[VAR_35]);

 VAR_37 = FUNC_0(VAR_26->base + VAR_1[VAR_35]);
 VAR_39 = FUNC_0(VAR_26->base + VAR_9[VAR_35]);
 VAR_38 = FUNC_0(VAR_26->base + VAR_0[VAR_35]);

 *VAR_30 = VAR_37 + VAR_39;
 *VAR_31 = (VAR_38 - VAR_37) + 0x1000;

 *VAR_29 = 0;
 *VAR_32 = 0;
 *VAR_33 = 0;
 *VAR_34 = 0;

 if (VAR_36 & VAR_3)
  *VAR_29 = 1;


 switch (VAR_36 & VAR_6) {
 case 137:
  *VAR_32 = VAR_10;
  break;
 case 136:
  *VAR_32 = VAR_11;
  break;
 case 135:
  *VAR_32 = VAR_12;
  break;
 case 134:
  *VAR_32 = VAR_14;
  break;
 case 133:
  *VAR_32 = VAR_24;
  break;
 case 132:
  *VAR_32 = VAR_25;
  break;
 }



 if (VAR_36 & VAR_7)
  *VAR_33 |= VAR_13;
 else
  *VAR_33 |= VAR_21;

 if (VAR_36 & VAR_5)
  *VAR_33 |= VAR_22;
 else
  *VAR_33 |= VAR_23;

 if (VAR_36 & VAR_4)
  *VAR_33 = VAR_20;
 else
  *VAR_33 = VAR_19;


 switch (VAR_36 & VAR_8) {
 case 128:
  *VAR_34 = VAR_18;
  break;
 case 131:
  *VAR_34 = VAR_15;
  break;
 case 130:
  *VAR_34 = VAR_16;
  break;
 case 129:
  *VAR_34 = VAR_17;
  break;
 }







 return 0;
}
