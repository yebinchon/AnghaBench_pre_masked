
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_timing {int nrd_recover; int nrd_pulse; int nrd_setup; int read_cycle; } ;
struct smc_config {int nrd_setup; int nrd_pulse; int read_cycle; int ncs_read_setup; int ncs_read_pulse; int write_cycle; int nwe_setup; int nwe_pulse; int ncs_write_setup; int ncs_write_pulse; } ;
struct device {int dummy; } ;
struct ata_timing {int rec8b; int act8b; int setup; int cyc8b; } ;
struct at32_ide_info {int cs; struct smc_config smc; } ;


 int FUNC_0 (struct device*,char*,int,int,int,int,...) ;
 int FUNC_1 (struct smc_timing*,int ,int) ;
 int FUNC_2 (int ,struct smc_config*) ;
 int FUNC_3 (struct smc_config*,struct smc_timing*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
      struct at32_ide_info *VAR_1,
      const struct ata_timing *VAR_2)
{
 struct smc_config *VAR_3 = &VAR_1->smc;
 struct smc_timing VAR_4;

 int VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(struct smc_timing));


 VAR_4.read_cycle = VAR_2->cyc8b;


 VAR_4.nrd_setup = VAR_2->setup;
 VAR_4.nrd_pulse = VAR_2->act8b;
 VAR_4.nrd_recover = VAR_2->rec8b;


 FUNC_3(VAR_3, &VAR_4);


 VAR_3->nrd_setup = VAR_3->nrd_setup + 1;

 VAR_5 = VAR_3->nrd_setup + VAR_3->nrd_pulse;
 VAR_6 = VAR_3->read_cycle - VAR_5;


 if (VAR_6 < 2)
   VAR_3->read_cycle = VAR_5 + 2;


 VAR_3->ncs_read_setup = 1;
 VAR_3->ncs_read_pulse = VAR_3->read_cycle - 2;


 VAR_3->write_cycle = VAR_3->read_cycle;
 VAR_3->nwe_setup = VAR_3->nrd_setup;
 VAR_3->nwe_pulse = VAR_3->nrd_pulse;
 VAR_3->ncs_write_setup = VAR_3->ncs_read_setup;
 VAR_3->ncs_write_pulse = VAR_3->ncs_read_pulse;


 FUNC_0(VAR_0, "ATA: C=%d S=%d P=%d R=%d\n",
  VAR_2->cyc8b, VAR_2->setup, VAR_2->act8b, VAR_2->rec8b);

 FUNC_0(VAR_0, "SMC: C=%d S=%d P=%d NS=%d NP=%d\n",
  VAR_3->read_cycle, VAR_3->nrd_setup, VAR_3->nrd_pulse,
  VAR_3->ncs_read_setup, VAR_3->ncs_read_pulse);


 return FUNC_2(VAR_1->cs, VAR_3);
}
