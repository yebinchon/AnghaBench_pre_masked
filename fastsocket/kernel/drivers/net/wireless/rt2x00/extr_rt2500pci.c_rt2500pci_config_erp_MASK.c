
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_erp {int short_preamble; int basic_rates; int slot_time; int sifs; int pifs; int difs; int eifs; int beacon_int; } ;
struct rt2x00_dev {int dummy; } ;


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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int ,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_36,
     struct rt2x00lib_erp *VAR_37,
     u32 VAR_38)
{
 int VAR_39;
 u32 VAR_40;




 if (VAR_38 & VAR_17) {
  VAR_39 = VAR_37->short_preamble << 3;

  FUNC_2(VAR_36, VAR_31, &VAR_40);
  FUNC_1(&VAR_40, VAR_33, 0x162);
  FUNC_1(&VAR_40, VAR_32, 0xa2);
  FUNC_1(&VAR_40, VAR_35, VAR_30);
  FUNC_1(&VAR_40, VAR_34, 1);
  FUNC_3(VAR_36, VAR_31, VAR_40);

  FUNC_2(VAR_36, VAR_2, &VAR_40);
  FUNC_1(&VAR_40, VAR_5, 0x00);
  FUNC_1(&VAR_40, VAR_4, 0x04);
  FUNC_1(&VAR_40, VAR_3,
       FUNC_0(VAR_0, 10));
  FUNC_3(VAR_36, VAR_2, VAR_40);

  FUNC_2(VAR_36, VAR_6, &VAR_40);
  FUNC_1(&VAR_40, VAR_8, 0x01 | VAR_39);
  FUNC_1(&VAR_40, VAR_7, 0x04);
  FUNC_1(&VAR_40, VAR_3,
       FUNC_0(VAR_0, 20));
  FUNC_3(VAR_36, VAR_6, VAR_40);

  FUNC_2(VAR_36, VAR_9, &VAR_40);
  FUNC_1(&VAR_40, VAR_11, 0x02 | VAR_39);
  FUNC_1(&VAR_40, VAR_10, 0x04);
  FUNC_1(&VAR_40, VAR_3,
       FUNC_0(VAR_0, 55));
  FUNC_3(VAR_36, VAR_9, VAR_40);

  FUNC_2(VAR_36, VAR_12, &VAR_40);
  FUNC_1(&VAR_40, VAR_14, 0x03 | VAR_39);
  FUNC_1(&VAR_40, VAR_13, 0x84);
  FUNC_1(&VAR_40, VAR_3,
       FUNC_0(VAR_0, 110));
  FUNC_3(VAR_36, VAR_12, VAR_40);
 }

 if (VAR_38 & VAR_15)
  FUNC_3(VAR_36, VAR_1, VAR_37->basic_rates);

 if (VAR_38 & VAR_18) {
  FUNC_2(VAR_36, VAR_19, &VAR_40);
  FUNC_1(&VAR_40, VAR_20, VAR_37->slot_time);
  FUNC_3(VAR_36, VAR_19, VAR_40);

  FUNC_2(VAR_36, VAR_24, &VAR_40);
  FUNC_1(&VAR_40, VAR_26, VAR_37->sifs);
  FUNC_1(&VAR_40, VAR_25, VAR_37->pifs);
  FUNC_3(VAR_36, VAR_24, VAR_40);

  FUNC_2(VAR_36, VAR_27, &VAR_40);
  FUNC_1(&VAR_40, VAR_28, VAR_37->difs);
  FUNC_1(&VAR_40, VAR_29, VAR_37->eifs);
  FUNC_3(VAR_36, VAR_27, VAR_40);
 }

 if (VAR_38 & VAR_16) {
  FUNC_2(VAR_36, VAR_21, &VAR_40);
  FUNC_1(&VAR_40, VAR_22,
       VAR_37->beacon_int * 16);
  FUNC_1(&VAR_40, VAR_23,
       VAR_37->beacon_int * 16);
  FUNC_3(VAR_36, VAR_21, VAR_40);
 }

}
