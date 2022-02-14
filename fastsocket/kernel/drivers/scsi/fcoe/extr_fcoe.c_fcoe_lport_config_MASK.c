
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int max_retry_count; int max_rport_retry_count; int e_d_tov; int r_a_tov; int service_params; int does_npiv; scalar_t__ lso_max; scalar_t__ lro_xid; scalar_t__ lro_enabled; scalar_t__ seq_offload; scalar_t__ crc_offload; scalar_t__ qfull; scalar_t__ link_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;

__attribute__((used)) static int FUNC_2(struct fc_lport *VAR_4)
{
 VAR_4->link_up = 0;
 VAR_4->qfull = 0;
 VAR_4->max_retry_count = 3;
 VAR_4->max_rport_retry_count = 3;
 VAR_4->e_d_tov = 2 * 1000;
 VAR_4->r_a_tov = 2 * 2 * 1000;
 VAR_4->service_params = (VAR_1 | VAR_2 |
     VAR_3 | VAR_0);
 VAR_4->does_npiv = 1;

 FUNC_1(VAR_4);


 FUNC_0(VAR_4);


 VAR_4->crc_offload = 0;
 VAR_4->seq_offload = 0;
 VAR_4->lro_enabled = 0;
 VAR_4->lro_xid = 0;
 VAR_4->lso_max = 0;

 return 0;
}
