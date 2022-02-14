
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_timing {scalar_t__ ncs_read_setup; scalar_t__ nrd_setup; scalar_t__ ncs_write_setup; scalar_t__ nwe_setup; scalar_t__ ncs_read_pulse; scalar_t__ nrd_pulse; scalar_t__ ncs_write_pulse; scalar_t__ nwe_pulse; scalar_t__ read_cycle; scalar_t__ write_cycle; scalar_t__ ncs_read_recover; scalar_t__ nrd_recover; scalar_t__ ncs_write_recover; scalar_t__ nwe_recover; } ;
struct smc_config {int ncs_read_setup; int nrd_setup; int ncs_write_setup; int nwe_setup; int ncs_read_pulse; int nrd_pulse; int ncs_write_pulse; int nwe_pulse; int read_cycle; int write_cycle; } ;
struct TYPE_2__ {int mck; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 void* FUNC_1 (scalar_t__) ;

void FUNC_2(struct smc_config *VAR_1,
      const struct smc_timing *VAR_2)
{
 int VAR_3;
 int VAR_4;

 unsigned long VAR_5;


 VAR_1->ncs_read_setup = 0;
 VAR_1->nrd_setup = 0;
 VAR_1->ncs_write_setup = 0;
 VAR_1->nwe_setup = 0;
 VAR_1->ncs_read_pulse = 0;
 VAR_1->nrd_pulse = 0;
 VAR_1->ncs_write_pulse = 0;
 VAR_1->nwe_pulse = 0;
 VAR_1->read_cycle = 0;
 VAR_1->write_cycle = 0;






 VAR_5 = (FUNC_0(VAR_0->mck) / 10000) << 16;
 VAR_5 /= 100000;



 if (VAR_2->ncs_read_setup > 0)
  VAR_1->ncs_read_setup = ((((VAR_2->ncs_read_setup) * VAR_5) + 65535) >> 16);

 if (VAR_2->nrd_setup > 0)
  VAR_1->nrd_setup = ((((VAR_2->nrd_setup) * VAR_5) + 65535) >> 16);

 if (VAR_2->ncs_write_setup > 0)
  VAR_1->ncs_write_setup = ((((VAR_2->ncs_write_setup) * VAR_5) + 65535) >> 16);

 if (VAR_2->nwe_setup > 0)
  VAR_1->nwe_setup = ((((VAR_2->nwe_setup) * VAR_5) + 65535) >> 16);

 if (VAR_2->ncs_read_pulse > 0)
  VAR_1->ncs_read_pulse = ((((VAR_2->ncs_read_pulse) * VAR_5) + 65535) >> 16);

 if (VAR_2->nrd_pulse > 0)
  VAR_1->nrd_pulse = ((((VAR_2->nrd_pulse) * VAR_5) + 65535) >> 16);

 if (VAR_2->ncs_write_pulse > 0)
  VAR_1->ncs_write_pulse = ((((VAR_2->ncs_write_pulse) * VAR_5) + 65535) >> 16);

 if (VAR_2->nwe_pulse > 0)
  VAR_1->nwe_pulse = ((((VAR_2->nwe_pulse) * VAR_5) + 65535) >> 16);

 if (VAR_2->read_cycle > 0)
  VAR_1->read_cycle = ((((VAR_2->read_cycle) * VAR_5) + 65535) >> 16);

 if (VAR_2->write_cycle > 0)
  VAR_1->write_cycle = ((((VAR_2->write_cycle) * VAR_5) + 65535) >> 16);


 if (VAR_2->ncs_read_recover > 0)
  VAR_3 = ((((VAR_2->ncs_read_recover) * VAR_5) + 65535) >> 16);
 else
  VAR_3 = 1;

 VAR_4 = VAR_1->ncs_read_setup + VAR_1->ncs_read_pulse + VAR_3;

 if (VAR_1->read_cycle < VAR_4)
  VAR_1->read_cycle = VAR_4;


 if (VAR_2->nrd_recover > 0)
  VAR_3 = ((((VAR_2->nrd_recover) * VAR_5) + 65535) >> 16);
 else
  VAR_3 = 1;

 VAR_4 = VAR_1->nrd_setup + VAR_1->nrd_pulse + VAR_3;

 if (VAR_1->read_cycle < VAR_4)
  VAR_1->read_cycle = VAR_4;


 if (VAR_2->ncs_write_recover > 0)
  VAR_3 = ((((VAR_2->ncs_write_recover) * VAR_5) + 65535) >> 16);
 else
  VAR_3 = 1;

 VAR_4 = VAR_1->ncs_write_setup + VAR_1->ncs_write_pulse + VAR_3;

 if (VAR_1->write_cycle < VAR_4)
  VAR_1->write_cycle = VAR_4;


 if (VAR_2->nwe_recover > 0)
  VAR_3 = ((((VAR_2->nwe_recover) * VAR_5) + 65535) >> 16);
 else
  VAR_3 = 1;

 VAR_4 = VAR_1->nwe_setup + VAR_1->nwe_pulse + VAR_3;

 if (VAR_1->write_cycle < VAR_4)
  VAR_1->write_cycle = VAR_4;
}
