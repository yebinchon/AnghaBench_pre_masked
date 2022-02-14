
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
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct nouveau_device*,char*) ;
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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;

int
FUNC_1(struct nouveau_device *VAR_53)
{
 switch (VAR_53->chipset) {
 case 0xe4:
  VAR_53->cname = "GK104";
  VAR_53->oclass[VAR_25 ] = &VAR_27;
  VAR_53->oclass[VAR_16 ] = &VAR_49;
  VAR_53->oclass[VAR_17 ] = &VAR_42;
  VAR_53->oclass[VAR_13 ] = &VAR_34;
  VAR_53->oclass[VAR_23 ] = &VAR_43;
  VAR_53->oclass[VAR_22 ] = &VAR_31;
  VAR_53->oclass[VAR_14] = &VAR_29;
  VAR_53->oclass[VAR_21 ] = &VAR_37;
  VAR_53->oclass[VAR_12 ] = &VAR_33;
  VAR_53->oclass[VAR_24 ] = &VAR_28;
  VAR_53->oclass[VAR_15 ] = &VAR_35;
  VAR_53->oclass[VAR_20 ] = &VAR_36;
  VAR_53->oclass[VAR_18 ] = &VAR_51;
  VAR_53->oclass[VAR_19] = &VAR_30;
  VAR_53->oclass[VAR_26 ] = &VAR_40;
  VAR_53->oclass[VAR_11 ] = &VAR_32;
  VAR_53->oclass[VAR_5 ] = &VAR_41;
  VAR_53->oclass[VAR_6 ] = &VAR_48;
  VAR_53->oclass[VAR_9 ] = &VAR_39;
  VAR_53->oclass[VAR_7 ] = &VAR_50;
  VAR_53->oclass[VAR_4 ] = &VAR_47;
  VAR_53->oclass[VAR_2 ] = &VAR_45;
  VAR_53->oclass[VAR_3 ] = &VAR_46;
  VAR_53->oclass[VAR_1 ] = &VAR_44;
  VAR_53->oclass[VAR_10 ] = &VAR_52;
  VAR_53->oclass[VAR_8 ] = &VAR_38;
  break;
 case 0xe7:
  VAR_53->cname = "GK107";
  VAR_53->oclass[VAR_25 ] = &VAR_27;
  VAR_53->oclass[VAR_16 ] = &VAR_49;
  VAR_53->oclass[VAR_17 ] = &VAR_42;
  VAR_53->oclass[VAR_13 ] = &VAR_34;
  VAR_53->oclass[VAR_23 ] = &VAR_43;
  VAR_53->oclass[VAR_22 ] = &VAR_31;
  VAR_53->oclass[VAR_14] = &VAR_29;
  VAR_53->oclass[VAR_21 ] = &VAR_37;
  VAR_53->oclass[VAR_12 ] = &VAR_33;
  VAR_53->oclass[VAR_24 ] = &VAR_28;
  VAR_53->oclass[VAR_15 ] = &VAR_35;
  VAR_53->oclass[VAR_20 ] = &VAR_36;
  VAR_53->oclass[VAR_18 ] = &VAR_51;
  VAR_53->oclass[VAR_19] = &VAR_30;
  VAR_53->oclass[VAR_26 ] = &VAR_40;
  VAR_53->oclass[VAR_11 ] = &VAR_32;
  VAR_53->oclass[VAR_5 ] = &VAR_41;
  VAR_53->oclass[VAR_6 ] = &VAR_48;
  VAR_53->oclass[VAR_9 ] = &VAR_39;
  VAR_53->oclass[VAR_7 ] = &VAR_50;
  VAR_53->oclass[VAR_4 ] = &VAR_47;
  VAR_53->oclass[VAR_2 ] = &VAR_45;
  VAR_53->oclass[VAR_3 ] = &VAR_46;
  VAR_53->oclass[VAR_1 ] = &VAR_44;
  VAR_53->oclass[VAR_10 ] = &VAR_52;
  VAR_53->oclass[VAR_8 ] = &VAR_38;
  break;
 case 0xe6:
  VAR_53->cname = "GK106";
  VAR_53->oclass[VAR_25 ] = &VAR_27;
  VAR_53->oclass[VAR_16 ] = &VAR_49;
  VAR_53->oclass[VAR_17 ] = &VAR_42;
  VAR_53->oclass[VAR_13 ] = &VAR_34;
  VAR_53->oclass[VAR_23 ] = &VAR_43;
  VAR_53->oclass[VAR_22 ] = &VAR_31;
  VAR_53->oclass[VAR_14] = &VAR_29;
  VAR_53->oclass[VAR_21 ] = &VAR_37;
  VAR_53->oclass[VAR_12 ] = &VAR_33;
  VAR_53->oclass[VAR_24 ] = &VAR_28;
  VAR_53->oclass[VAR_15 ] = &VAR_35;
  VAR_53->oclass[VAR_20 ] = &VAR_36;
  VAR_53->oclass[VAR_18 ] = &VAR_51;
  VAR_53->oclass[VAR_19] = &VAR_30;
  VAR_53->oclass[VAR_26 ] = &VAR_40;
  VAR_53->oclass[VAR_11 ] = &VAR_32;
  VAR_53->oclass[VAR_5 ] = &VAR_41;
  VAR_53->oclass[VAR_6 ] = &VAR_48;
  VAR_53->oclass[VAR_9 ] = &VAR_39;
  VAR_53->oclass[VAR_7 ] = &VAR_50;
  VAR_53->oclass[VAR_4 ] = &VAR_47;
  VAR_53->oclass[VAR_2 ] = &VAR_45;
  VAR_53->oclass[VAR_3 ] = &VAR_46;
  VAR_53->oclass[VAR_1 ] = &VAR_44;
  VAR_53->oclass[VAR_10 ] = &VAR_52;
  VAR_53->oclass[VAR_8 ] = &VAR_38;
  break;
 default:
  FUNC_0(VAR_53, "unknown Kepler chipset\n");
  return -VAR_0;
 }

 return 0;
}
