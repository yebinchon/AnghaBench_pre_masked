
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_erp {int basic_rates; int beacon_int; int slot_time; int sifs; int eifs; int short_preamble; } ;
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
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_20,
          struct rt2x00lib_erp *VAR_21,
          u32 VAR_22)
{
 u32 VAR_23;

 FUNC_1(VAR_20, VAR_11, &VAR_23);
 FUNC_0(&VAR_23, VAR_12, 0x32);
 FUNC_0(&VAR_23, VAR_13, VAR_4);
 FUNC_2(VAR_20, VAR_11, VAR_23);

 if (VAR_22 & VAR_2) {
  FUNC_1(VAR_20, VAR_14, &VAR_23);
  FUNC_0(&VAR_23, VAR_15, 1);
  FUNC_0(&VAR_23, VAR_16,
       !!VAR_21->short_preamble);
  FUNC_2(VAR_20, VAR_14, VAR_23);
 }

 if (VAR_22 & VAR_0)
  FUNC_2(VAR_20, VAR_17,
      VAR_21->basic_rates);

 if (VAR_22 & VAR_1) {
  FUNC_1(VAR_20, VAR_18, &VAR_23);
  FUNC_0(&VAR_23, VAR_19,
       VAR_21->beacon_int * 16);
  FUNC_2(VAR_20, VAR_18, VAR_23);
 }

 if (VAR_22 & VAR_3) {
  FUNC_1(VAR_20, VAR_9, &VAR_23);
  FUNC_0(&VAR_23, VAR_10, VAR_21->slot_time);
  FUNC_2(VAR_20, VAR_9, VAR_23);

  FUNC_1(VAR_20, VAR_5, &VAR_23);
  FUNC_0(&VAR_23, VAR_7, VAR_21->sifs);
  FUNC_0(&VAR_23, VAR_8, 3);
  FUNC_0(&VAR_23, VAR_6, VAR_21->eifs);
  FUNC_2(VAR_20, VAR_5, VAR_23);
 }
}
