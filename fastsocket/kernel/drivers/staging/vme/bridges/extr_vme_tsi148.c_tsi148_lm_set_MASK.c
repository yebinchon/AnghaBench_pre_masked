
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vme_cycle_t ;
typedef int vme_address_t ;
typedef int u32 ;
struct vme_lm_resource {int monitors; int mtx; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;




 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,scalar_t__) ;
 int ** VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned long long,int *,int *) ;
 TYPE_1__* VAR_18 ;

int FUNC_5(struct vme_lm_resource *VAR_19, unsigned long long VAR_20,
 vme_address_t VAR_21, vme_cycle_t VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25 = 0;
 int VAR_26;

 FUNC_1(&(VAR_19->mtx));


 for (VAR_26 = 0; VAR_26 < VAR_19->monitors; VAR_26++) {
  if(VAR_17[VAR_26] != ((void*)0)) {
   FUNC_2(&(VAR_19->mtx));
   FUNC_3("Location monitor callback attached, can't "
    "reset\n");
   return -VAR_0;
  }
 }

 switch (VAR_21) {
 case 131:
  VAR_25 |= VAR_3;
  break;
 case 130:
  VAR_25 |= VAR_4;
  break;
 case 129:
  VAR_25 |= VAR_5;
  break;
 case 128:
  VAR_25 |= VAR_6;
  break;
 default:
  FUNC_2(&(VAR_19->mtx));
  FUNC_3("Invalid address space\n");
  return -VAR_1;
  break;
 }

 if (VAR_22 & VAR_15)
  VAR_25 |= VAR_10 ;
 if (VAR_22 & VAR_16)
  VAR_25 |= VAR_8;
 if (VAR_22 & VAR_14)
  VAR_25 |= VAR_9;
 if (VAR_22 & VAR_13)
  VAR_25 |= VAR_7;

 FUNC_4(VAR_20, &VAR_23, &VAR_24);

 FUNC_0(VAR_23, VAR_18->base + VAR_12);
 FUNC_0(VAR_24, VAR_18->base + VAR_11);
 FUNC_0(VAR_25, VAR_18->base + VAR_2);

 FUNC_2(&(VAR_19->mtx));

 return 0;
}
