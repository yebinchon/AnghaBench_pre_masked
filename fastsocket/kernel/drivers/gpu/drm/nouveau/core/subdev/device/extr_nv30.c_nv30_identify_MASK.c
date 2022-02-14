
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
 size_t VAR_16 ;
 size_t VAR_17 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (struct nouveau_device*,char*) ;

int
FUNC_1(struct nouveau_device *VAR_42)
{
 switch (VAR_42->chipset) {
 case 0x30:
  VAR_42->cname = "NV30";
  VAR_42->oclass[VAR_16 ] = &VAR_18;
  VAR_42->oclass[VAR_11 ] = &VAR_30;
  VAR_42->oclass[VAR_12 ] = &VAR_23;
  VAR_42->oclass[VAR_8 ] = &VAR_20;
  VAR_42->oclass[VAR_9] = &VAR_33;
  VAR_42->oclass[VAR_14 ] = &VAR_25;
  VAR_42->oclass[VAR_7 ] = &VAR_19;
  VAR_42->oclass[VAR_15 ] = &VAR_26;
  VAR_42->oclass[VAR_10 ] = &VAR_34;
  VAR_42->oclass[VAR_13] = &VAR_24;
  VAR_42->oclass[VAR_17 ] = &VAR_27;
  VAR_42->oclass[VAR_2 ] = &VAR_22;
  VAR_42->oclass[VAR_3 ] = &VAR_32;
  VAR_42->oclass[VAR_6 ] = &VAR_31;
  VAR_42->oclass[VAR_4 ] = &VAR_35;
  VAR_42->oclass[VAR_1 ] = &VAR_21;
  break;
 case 0x35:
  VAR_42->cname = "NV35";
  VAR_42->oclass[VAR_16 ] = &VAR_18;
  VAR_42->oclass[VAR_11 ] = &VAR_30;
  VAR_42->oclass[VAR_12 ] = &VAR_23;
  VAR_42->oclass[VAR_8 ] = &VAR_20;
  VAR_42->oclass[VAR_9] = &VAR_33;
  VAR_42->oclass[VAR_14 ] = &VAR_25;
  VAR_42->oclass[VAR_7 ] = &VAR_19;
  VAR_42->oclass[VAR_15 ] = &VAR_26;
  VAR_42->oclass[VAR_10 ] = &VAR_39;
  VAR_42->oclass[VAR_13] = &VAR_24;
  VAR_42->oclass[VAR_17 ] = &VAR_27;
  VAR_42->oclass[VAR_2 ] = &VAR_22;
  VAR_42->oclass[VAR_3 ] = &VAR_32;
  VAR_42->oclass[VAR_6 ] = &VAR_31;
  VAR_42->oclass[VAR_4 ] = &VAR_40;
  VAR_42->oclass[VAR_1 ] = &VAR_21;
  break;
 case 0x31:
  VAR_42->cname = "NV31";
  VAR_42->oclass[VAR_16 ] = &VAR_18;
  VAR_42->oclass[VAR_11 ] = &VAR_30;
  VAR_42->oclass[VAR_12 ] = &VAR_23;
  VAR_42->oclass[VAR_8 ] = &VAR_20;
  VAR_42->oclass[VAR_9] = &VAR_33;
  VAR_42->oclass[VAR_14 ] = &VAR_25;
  VAR_42->oclass[VAR_7 ] = &VAR_36;
  VAR_42->oclass[VAR_15 ] = &VAR_26;
  VAR_42->oclass[VAR_10 ] = &VAR_34;
  VAR_42->oclass[VAR_13] = &VAR_24;
  VAR_42->oclass[VAR_17 ] = &VAR_27;
  VAR_42->oclass[VAR_2 ] = &VAR_22;
  VAR_42->oclass[VAR_3 ] = &VAR_32;
  VAR_42->oclass[VAR_6 ] = &VAR_31;
  VAR_42->oclass[VAR_4 ] = &VAR_35;
  VAR_42->oclass[VAR_5 ] = &VAR_37;
  VAR_42->oclass[VAR_1 ] = &VAR_21;
  break;
 case 0x36:
  VAR_42->cname = "NV36";
  VAR_42->oclass[VAR_16 ] = &VAR_18;
  VAR_42->oclass[VAR_11 ] = &VAR_30;
  VAR_42->oclass[VAR_12 ] = &VAR_23;
  VAR_42->oclass[VAR_8 ] = &VAR_20;
  VAR_42->oclass[VAR_9] = &VAR_33;
  VAR_42->oclass[VAR_14 ] = &VAR_25;
  VAR_42->oclass[VAR_7 ] = &VAR_36;
  VAR_42->oclass[VAR_15 ] = &VAR_26;
  VAR_42->oclass[VAR_10 ] = &VAR_41;
  VAR_42->oclass[VAR_13] = &VAR_24;
  VAR_42->oclass[VAR_17 ] = &VAR_27;
  VAR_42->oclass[VAR_2 ] = &VAR_22;
  VAR_42->oclass[VAR_3 ] = &VAR_32;
  VAR_42->oclass[VAR_6 ] = &VAR_31;
  VAR_42->oclass[VAR_4 ] = &VAR_40;
  VAR_42->oclass[VAR_5 ] = &VAR_37;
  VAR_42->oclass[VAR_1 ] = &VAR_21;
  break;
 case 0x34:
  VAR_42->cname = "NV34";
  VAR_42->oclass[VAR_16 ] = &VAR_18;
  VAR_42->oclass[VAR_11 ] = &VAR_30;
  VAR_42->oclass[VAR_12 ] = &VAR_23;
  VAR_42->oclass[VAR_8 ] = &VAR_20;
  VAR_42->oclass[VAR_9] = &VAR_28;
  VAR_42->oclass[VAR_14 ] = &VAR_25;
  VAR_42->oclass[VAR_7 ] = &VAR_36;
  VAR_42->oclass[VAR_15 ] = &VAR_26;
  VAR_42->oclass[VAR_10 ] = &VAR_29;
  VAR_42->oclass[VAR_13] = &VAR_24;
  VAR_42->oclass[VAR_17 ] = &VAR_27;
  VAR_42->oclass[VAR_2 ] = &VAR_22;
  VAR_42->oclass[VAR_3 ] = &VAR_32;
  VAR_42->oclass[VAR_6 ] = &VAR_31;
  VAR_42->oclass[VAR_4 ] = &VAR_38;
  VAR_42->oclass[VAR_5 ] = &VAR_37;
  VAR_42->oclass[VAR_1 ] = &VAR_21;
  break;
 default:
  FUNC_0(VAR_42, "unknown Rankine chipset\n");
  return -VAR_0;
 }

 return 0;
}
