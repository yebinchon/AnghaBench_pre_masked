
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;
struct IN2000_hostdata {int default_sx_per; } ;


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
 int FUNC_0 () ;
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
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct IN2000_hostdata*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct IN2000_hostdata*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_25, int VAR_26)
{
 struct IN2000_hostdata *VAR_27;
 int VAR_28, VAR_29;

 VAR_27 = (struct IN2000_hostdata *) VAR_25->hostdata;

 FUNC_5(0, VAR_11);
 if (VAR_26 == VAR_15) {
  FUNC_5(0, VAR_6);
  VAR_29 = FUNC_3(VAR_9);
 }
 VAR_29 = FUNC_4(VAR_27, VAR_22);
 FUNC_6(VAR_27, VAR_20, VAR_25->this_id | VAR_12 | VAR_14 | VAR_13);
 FUNC_6(VAR_27, VAR_19, VAR_3 | VAR_2 | VAR_4);
 FUNC_6(VAR_27, VAR_23, FUNC_1(VAR_27->default_sx_per / 4, VAR_5));

 FUNC_5(0, VAR_8);
 FUNC_5(0, VAR_7);
 FUNC_6(VAR_27, VAR_18, VAR_17);

 while (!(FUNC_0() & VAR_0))
  FUNC_2();

 VAR_29 = FUNC_4(VAR_27, VAR_22);

 FUNC_6(VAR_27, VAR_21, 0xa5);
 VAR_28 = FUNC_4(VAR_27, VAR_21);
 if (VAR_28 == 0xa5) {
  VAR_29 |= VAR_1;
  FUNC_6(VAR_27, VAR_21, 0);
 }
 FUNC_6(VAR_27, VAR_24, VAR_16);
 FUNC_6(VAR_27, VAR_19, VAR_3 | VAR_2 | VAR_4);
 FUNC_5(0, VAR_10);
 return VAR_29;
}
