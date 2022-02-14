
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {int dummy; } ;
struct si_sm_data {int obf_timeout; int ibf_timeout; scalar_t__ truncated; scalar_t__ error_retries; scalar_t__ read_pos; scalar_t__ orig_write_count; scalar_t__ write_count; scalar_t__ write_pos; struct si_sm_io* io; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct si_sm_data *VAR_3,
      struct si_sm_io *VAR_4)
{
 VAR_3->state = VAR_1;
 VAR_3->io = VAR_4;
 VAR_3->write_pos = 0;
 VAR_3->write_count = 0;
 VAR_3->orig_write_count = 0;
 VAR_3->read_pos = 0;
 VAR_3->error_retries = 0;
 VAR_3->truncated = 0;
 VAR_3->ibf_timeout = VAR_0;
 VAR_3->obf_timeout = VAR_2;


 return 2;
}
