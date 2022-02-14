
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_7__ {size_t antswlut; } ;
struct TYPE_6__ {size_t antswlut; } ;
struct TYPE_8__ {TYPE_3__ ghz2; TYPE_2__ ghz5; } ;
struct ssb_sprom {TYPE_4__ fem; } ;
struct b43_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_5__ {struct ssb_sprom* bus_sprom; } ;


 size_t FUNC_0 (int *) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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
 int FUNC_1 (int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int * VAR_29 ;
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
 int FUNC_3 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_53)
{
 struct ssb_sprom *VAR_54 = VAR_53->dev->bus_sprom;
 u8 VAR_55;

 if (FUNC_2(VAR_53->wl) == VAR_26)
  VAR_55 = VAR_54->fem.ghz5.antswlut;
 else
  VAR_55 = VAR_54->fem.ghz2.antswlut;


 FUNC_3(VAR_53, VAR_13, VAR_34);
 FUNC_3(VAR_53, VAR_19, VAR_45);
 FUNC_3(VAR_53, VAR_25, VAR_52);
 FUNC_3(VAR_53, VAR_14, VAR_37);
 FUNC_3(VAR_53, VAR_24, VAR_51);
 FUNC_3(VAR_53, VAR_16, VAR_43);
 FUNC_3(VAR_53, VAR_17, VAR_44);
 FUNC_3(VAR_53, VAR_15, VAR_42);
 FUNC_3(VAR_53, VAR_20, VAR_47);
 FUNC_3(VAR_53, VAR_21, VAR_48);
 FUNC_3(VAR_53, VAR_22, VAR_49);
 FUNC_3(VAR_53, VAR_23, VAR_50);
 FUNC_3(VAR_53, VAR_18, VAR_46);
 FUNC_3(VAR_53, VAR_11, VAR_30);
 FUNC_3(VAR_53, VAR_12, VAR_33);
 FUNC_3(VAR_53, VAR_2, VAR_31);
 FUNC_3(VAR_53, VAR_7, VAR_32);
 FUNC_3(VAR_53, VAR_1, VAR_27);
 FUNC_3(VAR_53, VAR_6, VAR_28);
 FUNC_3(VAR_53, VAR_3, VAR_35);
 FUNC_3(VAR_53, VAR_8, VAR_36);
 FUNC_3(VAR_53, VAR_4, VAR_38);
 FUNC_3(VAR_53, VAR_9, VAR_39);
 FUNC_3(VAR_53, VAR_5, VAR_40);
 FUNC_3(VAR_53, VAR_10, VAR_41);


 if (VAR_55 < FUNC_0(VAR_29))
  FUNC_3(VAR_53, VAR_0,
       VAR_29[VAR_55]);
 else
  FUNC_1(1);
}
