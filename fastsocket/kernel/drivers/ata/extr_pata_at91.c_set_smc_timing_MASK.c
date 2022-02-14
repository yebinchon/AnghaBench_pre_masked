
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_timing {unsigned long cyc8b; unsigned long setup; unsigned long act8b; unsigned long rec8b; } ;
struct at91_ide_info {int cs; int mck; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 unsigned long FUNC_14 (unsigned long,unsigned long) ;
 unsigned long FUNC_15 (int ) ;
 int FUNC_16 (struct device*,char*,unsigned long,unsigned long,...) ;

__attribute__((used)) static void FUNC_17(struct device *VAR_0,
  struct at91_ide_info *VAR_1, const struct ata_timing *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;

 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;

 unsigned long VAR_16;

 VAR_3 = VAR_2->cyc8b;
 VAR_7 = VAR_2->setup;
 VAR_8 = VAR_2->act8b;
 VAR_9 = VAR_2->rec8b;

 VAR_16 = FUNC_15(VAR_1->mck);

 VAR_3 = FUNC_14(VAR_3, VAR_16);
 VAR_7 = FUNC_14(VAR_7, VAR_16);
 VAR_8 = FUNC_14(VAR_8, VAR_16);
 VAR_9 = FUNC_14(VAR_9, VAR_16);

 VAR_5 = VAR_7 + VAR_8;
 VAR_6 = VAR_3 - VAR_5;


 if (VAR_6 < 2)
  VAR_3 = VAR_5 + 2;


 VAR_14 = 1;
 VAR_15 = VAR_3 - 2;


 VAR_4 = VAR_3;
 VAR_10 = VAR_7;
 VAR_11 = VAR_8;
 VAR_12 = VAR_14;
 VAR_13 = VAR_15;

 FUNC_16(VAR_0, "ATA timings: nrd_setup = %lu nrd_pulse = %lu nrd_cycle = %lu\n",
   VAR_7, VAR_8, VAR_3);
 FUNC_16(VAR_0, "ATA timings: nwe_setup = %lu nwe_pulse = %lu nwe_cycle = %lu\n",
   VAR_10, VAR_11, VAR_4);
 FUNC_16(VAR_0, "ATA timings: ncs_read_setup = %lu ncs_read_pulse = %lu\n",
   VAR_14, VAR_15);
 FUNC_16(VAR_0, "ATA timings: ncs_write_setup = %lu ncs_write_pulse = %lu\n",
   VAR_12, VAR_13);

 FUNC_13(FUNC_12(VAR_1->cs),
   FUNC_10(VAR_10) |
   FUNC_7(VAR_7) |
   FUNC_4(VAR_12) |
   FUNC_2(VAR_14));

 FUNC_13(FUNC_11(VAR_1->cs),
   FUNC_9(VAR_11) |
   FUNC_6(VAR_8) |
   FUNC_3(VAR_13) |
   FUNC_1(VAR_15));

 FUNC_13(FUNC_0(VAR_1->cs),
   FUNC_8(VAR_4) |
   FUNC_5(VAR_3));

 return;
}
