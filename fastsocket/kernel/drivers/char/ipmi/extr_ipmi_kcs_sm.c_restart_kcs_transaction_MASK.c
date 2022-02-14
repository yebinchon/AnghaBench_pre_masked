
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {int obf_timeout; int ibf_timeout; int state; scalar_t__ read_pos; scalar_t__ write_pos; int orig_write_count; int write_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct si_sm_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct si_sm_data *VAR_4)
{
 VAR_4->write_count = VAR_4->orig_write_count;
 VAR_4->write_pos = 0;
 VAR_4->read_pos = 0;
 VAR_4->state = VAR_1;
 VAR_4->ibf_timeout = VAR_0;
 VAR_4->obf_timeout = VAR_3;
 FUNC_0(VAR_4, VAR_2);
}
