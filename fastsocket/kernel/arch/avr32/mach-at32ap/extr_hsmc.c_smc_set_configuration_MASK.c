
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smc_config {int bus_width; int nwait_mode; scalar_t__ tdf_mode; scalar_t__ byte_write; scalar_t__ nwe_controlled; scalar_t__ nrd_controlled; scalar_t__ tdf_cycles; scalar_t__ read_cycle; scalar_t__ write_cycle; scalar_t__ ncs_read_pulse; scalar_t__ nrd_pulse; scalar_t__ ncs_write_pulse; scalar_t__ nwe_pulse; scalar_t__ ncs_read_setup; scalar_t__ nrd_setup; scalar_t__ ncs_write_setup; scalar_t__ nwe_setup; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (char*,int,int,int,int,int) ;

int FUNC_5(int VAR_32, const struct smc_config *VAR_33)
{
 unsigned long VAR_34;
 u32 VAR_35, VAR_36, VAR_37, VAR_38;

 if (!VAR_31)
  return -VAR_4;
 if (VAR_32 >= VAR_21)
  return -VAR_3;

 VAR_35 = (FUNC_0(VAR_24, VAR_33->nwe_setup)
   | FUNC_0(VAR_17, VAR_33->ncs_write_setup)
   | FUNC_0(VAR_20, VAR_33->nrd_setup)
   | FUNC_0(VAR_15, VAR_33->ncs_read_setup));
 VAR_36 = (FUNC_0(VAR_23, VAR_33->nwe_pulse)
   | FUNC_0(VAR_16, VAR_33->ncs_write_pulse)
   | FUNC_0(VAR_19, VAR_33->nrd_pulse)
   | FUNC_0(VAR_14, VAR_33->ncs_read_pulse));
 VAR_37 = (FUNC_0(VAR_22, VAR_33->write_cycle)
   | FUNC_0(VAR_18, VAR_33->read_cycle));

 switch (VAR_33->bus_width) {
 case 1:
  VAR_38 = FUNC_0(VAR_2, VAR_8);
  break;
 case 2:
  VAR_38 = FUNC_0(VAR_2, VAR_6);
  break;
 case 4:
  VAR_38 = FUNC_0(VAR_2, VAR_7);
  break;
 default:
  return -VAR_3;
 }

 switch (VAR_33->nwait_mode) {
 case 0:
  VAR_38 |= FUNC_0(VAR_5, VAR_9);
  break;
 case 1:
  VAR_38 |= FUNC_0(VAR_5, VAR_12);
  break;
 case 2:
  VAR_38 |= FUNC_0(VAR_5, VAR_10);
  break;
 case 3:
  VAR_38 |= FUNC_0(VAR_5, VAR_11);
  break;
 default:
  return -VAR_3;
 }

 if (VAR_33->tdf_cycles) {
  VAR_38 |= FUNC_0(VAR_28, VAR_33->tdf_cycles);
 }

 if (VAR_33->nrd_controlled)
  VAR_38 |= FUNC_1(VAR_26);
 if (VAR_33->nwe_controlled)
  VAR_38 |= FUNC_1(VAR_30);
 if (VAR_33->byte_write)
  VAR_38 |= FUNC_1(VAR_0);
 if (VAR_33->tdf_mode)
  VAR_38 |= FUNC_1(VAR_29);

 FUNC_4("smc cs%d: setup/%08x pulse/%08x cycle/%08x mode/%08x\n",
   VAR_32, VAR_35, VAR_36, VAR_37, VAR_38);

 VAR_34 = VAR_32 * 0x10;
 FUNC_3(VAR_31, VAR_27 + VAR_34, VAR_35);
 FUNC_3(VAR_31, VAR_25 + VAR_34, VAR_36);
 FUNC_3(VAR_31, VAR_1 + VAR_34, VAR_37);
 FUNC_3(VAR_31, VAR_13 + VAR_34, VAR_38);
 FUNC_2(VAR_31, VAR_13);

 return 0;
}
