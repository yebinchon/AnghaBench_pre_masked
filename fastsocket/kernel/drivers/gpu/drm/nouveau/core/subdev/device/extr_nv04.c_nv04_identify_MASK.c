
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_device {int chipset; char* cname; int ** oclass; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct nouveau_device*,char*) ;

int
FUNC_1(struct nouveau_device *VAR_32)
{
 switch (VAR_32->chipset) {
 case 0x04:
  VAR_32->cname = "NV04";
  VAR_32->oclass[VAR_14 ] = &VAR_16;
  VAR_32->oclass[VAR_10 ] = &VAR_25;
  VAR_32->oclass[VAR_7 ] = &VAR_18;
  VAR_32->oclass[VAR_8] = &VAR_19;
  VAR_32->oclass[VAR_12 ] = &VAR_27;
  VAR_32->oclass[VAR_6 ] = &VAR_17;
  VAR_32->oclass[VAR_13 ] = &VAR_29;
  VAR_32->oclass[VAR_9 ] = &VAR_22;
  VAR_32->oclass[VAR_11] = &VAR_26;
  VAR_32->oclass[VAR_15 ] = &VAR_30;
  VAR_32->oclass[VAR_2 ] = &VAR_21;
  VAR_32->oclass[VAR_3 ] = &VAR_23;
  VAR_32->oclass[VAR_5 ] = &VAR_28;
  VAR_32->oclass[VAR_4 ] = &VAR_24;
  VAR_32->oclass[VAR_1 ] = &VAR_20;
  break;
 case 0x05:
  VAR_32->cname = "NV05";
  VAR_32->oclass[VAR_14 ] = &VAR_16;
  VAR_32->oclass[VAR_10 ] = &VAR_25;
  VAR_32->oclass[VAR_7 ] = &VAR_18;
  VAR_32->oclass[VAR_8] = &VAR_31;
  VAR_32->oclass[VAR_12 ] = &VAR_27;
  VAR_32->oclass[VAR_6 ] = &VAR_17;
  VAR_32->oclass[VAR_13 ] = &VAR_29;
  VAR_32->oclass[VAR_9 ] = &VAR_22;
  VAR_32->oclass[VAR_11] = &VAR_26;
  VAR_32->oclass[VAR_15 ] = &VAR_30;
  VAR_32->oclass[VAR_2 ] = &VAR_21;
  VAR_32->oclass[VAR_3 ] = &VAR_23;
  VAR_32->oclass[VAR_5 ] = &VAR_28;
  VAR_32->oclass[VAR_4 ] = &VAR_24;
  VAR_32->oclass[VAR_1 ] = &VAR_20;
  break;
 default:
  FUNC_0(VAR_32, "unknown RIVA chipset\n");
  return -VAR_0;
 }

 return 0;
}
